#ifndef   lcd
#define	  lcd
#include <xc.h>
#include "config.h"

#define RS LATDbits.LD0
#define EN LATDbits.LD2
#define D4 LATDbits.LD7
#define D5 LATDbits.LD6
#define D6 LATDbits.LD5
#define D7 LATDbits.LD4

/*#define RS RD0
#define EN RD2
#define D4 RD7
#define D5 RD6
#define D6 RD5
#define D7 RD4*/

void Lcd_Port(char a){
    D4 = !!(a & 1);
    D5 = !!(a & 2);
    D6 = !!(a & 4);
    D7 = !!(a & 8);
    
    /*if(a & 1)
      D4 = 1;
   else
      D4 = 0;

   if(a & 2)
      D5 = 1;
   else
      D5 = 0;

   if(a & 4)
      D6 = 1;
   else
      D6 = 0;
   
   if(a & 8)
      D7 = 1;
   else
      D7 = 0;*/
}
void Lcd_Cmd(char a)
{
    RS = 0;             // => RS = 0
    
    /*D4 = !!(a & 1);
    D5 = !!(a & 2);
    D6 = !!(a & 4);
    D7 = !!(a & 8);*/
    Lcd_Port(a);
   EN  = 1;             // => E = 1
        __delay_ms(4);
        EN  = 0;             // => E = 0
}

void lcd_clear()
{
   Lcd_Cmd(0);
   Lcd_Cmd(1);
}

void lcd_gotoxy(char a, char b)
{
   char temp,z,y;
   if(a == 1)
   {
     temp = 0x80 + b - 1;
   }
   else if(a == 2)
   {
      temp = 0xC0 + b - 1;
   }
   
   z = temp>>4;
   y = temp & 0x0F;
   Lcd_Cmd(z);
   Lcd_Cmd(y);
}

void lcd_init()
{
    PORTD = 0X00;
    LATD = 0X00;
    TRISD=0x00;               //Configuramos el Puerto D como salida digital.
    
    Lcd_Port(0x00);
    __delay_ms(20);
    Lcd_Cmd(0x03);
    __delay_ms(5);
    Lcd_Cmd(0x03);
     __delay_ms(11);
    Lcd_Cmd(0x03);
    /////////////////////////////////////////////////////
    Lcd_Cmd(0x02);
    Lcd_Cmd(0x02);
    Lcd_Cmd(0x08);
    Lcd_Cmd(0x00);
    Lcd_Cmd(0x0C);
    Lcd_Cmd(0x00);
    Lcd_Cmd(0x06);
}

void lcd_write_char(char a)
{
   char temp,y;
   temp = a&0x0F;
   y = a&0xF0;
   RS = 1;             // => RS = 1
   Lcd_Port(y>>4);             //Data transfer
   EN = 1;
   __delay_us(40);
   EN = 0;
   Lcd_Port(temp);
   EN = 1;
   __delay_us(40);
   EN = 0;
}

void lcd_putc(char *a)
{
   int i;
   for(i=0;a[i]!='\0';i++)
      lcd_write_char(a[i]);
}

void lcd_shift_right()
{
   Lcd_Cmd(0x01);
   Lcd_Cmd(0x0C);
}

void lcd_shift_left()
{
   Lcd_Cmd(0x01);
   Lcd_Cmd(0x08);
}

#endif
