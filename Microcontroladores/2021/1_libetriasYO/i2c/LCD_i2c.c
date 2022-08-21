/*
   Autor: Freddy Quispe Tello.
   Fecha: 25-07-2015
 
 * Modificacion para xc8
 * Ismael Sanchez R.
 * fercha: Marzo del 2021
*/
/*
//directivas 
#define PCF_SDA  PIN_C2
#define PCF_SCL  PIN_C1
#use i2c(master, sda=PCF_SDA, scl=PCF_SCL)
#define PCF_ID   7
#define PCF      64  // Puede ser 112 ó 64 (PCF8574T=64, PCF8574A=112, PCF8574=64)
#define blacking  P3
#define LCD_RS    P0
#define LCD_RW    P1 
#define LCD_E     P2
#define LCD_DB4   P4
#define LCD_DB5   P5
#define LCD_DB6   P6
#define LCD_DB7   P7
///////////////

......................................
*******************************************************************************
*******************************************************************************
Const char Letra1[8]={0b11011,0b11011,0b00000,0b11111,0b10001,0b10001,0b01110,0b00000};
      lcd_init();   // Para iniciar el LCD, se declara antes de su utilizacion
      lcd_gotoxy(columna, fila) // lcd_gotoxy(1,1); primera posicion de la fila 1, lcd_gotoxy(2,1) segunda posicion de la fila 2
      lcd_putc("Mensaje");
      Claer_LCD();         // Borra la LCD
      ////////////////////////////CGRAM
      CGRAM_x(n);         // Donde n es la posicion en donde se escribiran los caracteres, va de 0 a 7
      for(i=0;i<=7 ;i++) lcd_send_byte(1,Letra1[i]);  // E una vez definido la funcion, envia lo 8bytes,
       CGRAM(0); // Muestra el caracter especial almacenado en la posicion 0;*/

#include "LCD_i2c.h"

#include <stdint.h> //descomentar en caso de ser necesario
#include <xc.h>
#include "../../1_XpressBoard/i2c_LCD_MCC.X/mcc_generated_files/examples/i2c1_master_example.h"
#include "../../1_XpressBoard/i2c_LCD_MCC.X/mcc_generated_files/mcc.h"
//#include "I2C.h"
#define delay_ms(x)     __delay_ms(x)
#define delay_us(x)     __delay_us(x)
typedef uint8_t         int8;

//Solo modificar el PCF_ID y EL PCF segun sea necesario
//#define PCF       112  // Puede ser 112 ó 64 (PCF8574T=64, PCF8574A=112, PCF8574=64)
                        //112 = 0b01110000,         64 = 0b01000000

#define PCF       56   //56 = 0b00111000,         32 = 0b00100000
#define PCF_ID    7   //direccion i2c
//#define PCF       112  // Puede ser 112 ó 64 (PCF8574T=64, PCF8574A=112, PCF8574=64)

#define blacking  8
#define LCD_RS    1
#define LCD_RW    2 
#define LCD_E     4
#define LCD_DB4   16
#define LCD_DB5   32
#define LCD_DB6   64
#define LCD_DB7   128

/*#define blacking  P3
#define LCD_RS    P0
#define LCD_RW    P1 
#define LCD_E     P2
#define LCD_DB4   P4
#define LCD_DB5   P5
#define LCD_DB6   P6
#define LCD_DB7   P7*/

//A partir de aqui no modificar nada
/*#define P0   1
#define P1   2
#define P2   4
#define P3   8
#define P4   16
#define P5   32
#define P6   64
#define P7   128*/

#define LCD_LINE_1_ADDRESS 0x00 
#define LCD_LINE_2_ADDRESS 0x40 
#define LCD_LINE_3_ADDRESS 0x14 
#define LCD_LINE_4_ADDRESS 0x54 



#define LCD_LINE_LENGTH 20
int8 g_LcdX, g_LcdY;

#define lcd_type 2   // 0=5x7, 1=5x10, 2=2 lines(or more) 
int8 const LCD_INIT_STRING[4] = 
{ 
 0x20 | (lcd_type << 2),  // Set mode: 4-bit, 2+ lines, 5x8 dots 
 0xc,                     // Display on 
 1,                       // Clear display 
 6                        // Increment cursor 
 }; 

void Write_PCF(char dato){
  
   /*I2C_start();
   I2C_write(PCF|(PCF_ID<<1));
   I2C_write(dato|blacking );
   I2C_stop();*/
   
   I2C1_Write1ByteRegister( PCF|(PCF_ID),0,(dato|blacking) );
      
}
void Send_D7_D4(int8 address,int8 nibble)
{  
   char datos=0;

   if((nibble & 1)==1) datos= datos|LCD_DB4; else datos = datos&~LCD_DB4;
   if((nibble & 2)==2) datos= datos|LCD_DB5; else datos = datos&~LCD_DB5;
   if((nibble & 4)==4) datos= datos|LCD_DB6; else datos = datos&~LCD_DB6;
   if((nibble & 8)==8) datos= datos|LCD_DB7; else datos = datos&~LCD_DB7;
      delay_us(60);
   if(address)
      datos= datos |LCD_RS;   
   else
     datos = datos &~LCD_RS; 
      

   Write_PCF( datos | LCD_E);
   delay_us(2);
   Write_PCF( datos & ~LCD_E);
}

void lcd_send_byte(int8 address, int8 n)
{
   Send_D7_D4(address,n >> 4);
   Send_D7_D4(address,n & 0xf);
}

void lcd_init(void){
   int8 i;
   /*I2C_start();
   I2C_write(PCF|(PCF_ID<<1));
   I2C_write(0x00);
   I2C_stop();*/
   
   I2C1_Write1ByteRegister(PCF|(PCF_ID),0,0);
   
   delay_ms(35);

   for(i=0 ;i < 3; i++){
      Send_D7_D4(0,0x03);
      delay_ms(5);
   }
    Send_D7_D4(0,0x02);
    
    /* lcd_send_byte(0, 0x28);
    delay_ms(5);
    lcd_send_byte(0, 0x08);
    delay_ms(5);
    lcd_send_byte(0, 0x01);
    delay_ms(5);
    lcd_send_byte(0, 0x06);
    delay_ms(5);
    lcd_send_byte(0, 0x0C);
    */
    
   for(i=0; i < sizeof(LCD_INIT_STRING); i++) 
   {
      lcd_send_byte(0, LCD_INIT_STRING[i]); 
      delay_ms(5);
   } 
   g_LcdX = 0;
   g_LcdY = 0;
}

void lcd_gotoxy(int8 x, int8 y)
{
   int8 address;
   
   switch(y) 
   { 
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
   
   g_LcdX = x - 1;
   g_LcdY = y - 1;
}

void lcd_putc(unsigned char c){
      switch(c)
      {
         case '\f':
            lcd_send_byte(0,1);
            delay_ms(2);
            g_LcdX = 0;
            g_LcdY = 0;
            delay_ms(2); 
            break;
         case '\n':
            lcd_gotoxy(1, g_LcdY+2);
            break;
         default:
            lcd_send_byte(1,c);
            break;
      }
}

void lcd_puts(unsigned char *dato){
   while (*dato){
      
      switch(*dato)
      {
         case '\f':
            lcd_send_byte(0,1);
            delay_ms(2);
            g_LcdX = 0;
            g_LcdY = 0;
            delay_ms(2); 
            break;
         case '\n':
            lcd_gotoxy(1, g_LcdY+2);
            break;
         default:
            lcd_send_byte(1,*dato);
            break;
      }
      
      //lcd_send_byte(1,*dato);    // Envio el dato al LCD
      dato++;             // Incrementa el buffer de dato
    }
}

void Clear_LCD(){
     lcd_send_byte(0,1);
     delay_ms(2); 
}
/*void Clear_LCD(){
   lcd_send_byte(1,n);
}*/
void CGRAM_x(int p){
lcd_send_byte(0,0x40+p*8);
}
