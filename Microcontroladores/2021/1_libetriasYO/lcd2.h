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

#define LCD_LINE_1_ADDRESS 0x00 
#define LCD_LINE_2_ADDRESS 0x20 
#define LCD_LINE_3_ADDRESS 0x40 
#define LCD_LINE_4_ADDRESS 0x60 

#define lcd_type 2   // 0=5x7, 1=5x10, 2=2 lines(or more) 

unsigned char lcd_line; 

unsigned char const LCD_INIT_STRING[4] = { 
 0x20 | (lcd_type << 2),  // Set mode: 4-bit, 2+ lines, 5x8 dots 
 0xc,                     // Display on 
 1,                       // Clear display 
 6                        // Increment cursor 
 }; 

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
    
    D4 = !!(a & 1);
    D5 = !!(a & 2);
    D6 = !!(a & 4);
    D7 = !!(a & 8);
    
    //__delay_us(1);
    //delay_cycles(1); 
    EN  = 1;             // => E = 1
    __delay_ms(4);      //delay_us(2); 
    EN  = 0;             // => E = 0
}


void lcd_send_byte(char address, char n) 
{ 
    RS = 0;             // => RS = 0

    __delay_us(60);  

    if(address){ 
        RS = 1;
    }else {
        RS = 0;
    }
      
    EN = 0; 

    Lcd_Cmd(n >> 4); 
    Lcd_Cmd(n & 0xf); 
} 

void lcd_clear()
{
   Lcd_Cmd(0);
   Lcd_Cmd(1);
}

/*void lcd_gotoxy(char a, char b)
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
}*/

void lcd_init(){
    unsigned char i;
    PORTD   = 0X00;
    LATD    = 0X00;
    TRISD   = 0x00;               //Configuramos el Puerto D como salida digital.
    
    Lcd_Port(0x00);
    __delay_ms(20);
    for(i=0 ;i < 3; i++){ 
      Lcd_Cmd(0x03); 
      delay_ms(5); 
   } 
    /*Lcd_Cmd(0x03);
    __delay_ms(5);
    Lcd_Cmd(0x03);
     __delay_ms(11);
    Lcd_Cmd(0x03);*/
    /////////////////////////////////////////////////////
    
    /*for(i=0; i < sizeof(LCD_INIT_STRING); i++) { 
      lcd_send_byte(0, LCD_INIT_STRING[i]); 
    
      // If the R/W signal is not used, then 
      // the busy bit can't be polled.  One of 
      // the init commands takes longer than 
      // the hard-coded delay of 50 us, so in 
      // that case, lets just do a 5 ms delay 
      // after all four of them. 
      //#ifndef USE_RW_PIN 
         //delay_ms(5); 
      //#endif 
   }*/
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

/*void lcd_shift_right()
{
   Lcd_Cmd(0x01);
   Lcd_Cmd(0x0C);
}

void lcd_shift_left()
{
   Lcd_Cmd(0x01);
   Lcd_Cmd(0x08);
}*/


void lcd_gotoxy(char x, char y) 
{ 
    char address; 
    switch(y) { 
        case 1: 
            address = LCD_LINE_1_ADDRESS; 
            break; 
        case 2: 
            address = LCD_LINE_2_ADDRESS; 
            break; 
        case 3: 
            address = LCD_LINE_3_ADDRESS; 
            break; 
        case 4: 
            address = LCD_LINE_4_ADDRESS; 
            break; 
        default: 
            address = LCD_LINE_1_ADDRESS; 
            break; 
    } 
    address += x-1; 
    lcd_send_byte(0, 0x80 | address); 
}


/*void lcd_putc(char c) 
{ 
 switch(c) 
   { 
    case '\f': 
      lcd_send_byte(0,1); 
      lcd_line = 1; 
      delay_ms(2); 
      break; 
    
    case '\n': 
       lcd_gotoxy(1, ++lcd_line); 
       break; 
    
    case '\b': 
       lcd_send_byte(0,0x10); 
       break; 
    
    default: 
       lcd_send_byte(1,c); 
       break; 
   } 
} */

#endif
