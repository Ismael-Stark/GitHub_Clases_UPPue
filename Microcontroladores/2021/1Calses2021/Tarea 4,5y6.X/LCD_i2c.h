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

#ifndef LCD_I2C_H
#define LCD_I2C_H

#include <stdint.h>
#include "configuracion.h"
#include "misdefiniciones.h"
#include "i2c.h"
#include <xc.h>
//#define delay_ms(x)     __delay_ms(x)
//#define delay_us(x)     __delay_us(x)
//typedef uint8_t         int8;

#define PCF      64  // Puede ser 112 ó 64 (PCF8574T=64, PCF8574A=112, PCF8574=64)
//#define PCF       56    //PCF8574A = 56  = 0b00111000,        PCF8574T = 32 = 0b00100000
#define PCF_ID    7   //direccion i2c

#define blacking  8
#define LCD_RS    1         //     7   6  5  4  3  2  1  0
#define LCD_RW    2         //                     1  0  0
#define LCD_E     4
#define LCD_DB4   16
#define LCD_DB5   32
#define LCD_DB6   64
#define LCD_DB7   128

#define LCD_LINE_1_ADDRESS 0x00 
#define LCD_LINE_2_ADDRESS 0x40 
#define LCD_LINE_3_ADDRESS 0x14 
#define LCD_LINE_4_ADDRESS 0x54

#define LCD_LINE_LENGTH 20
int8 g_LcdX, g_LcdY;

#define lcd_type 2   // 0=5x7, 1=5x10, 2=2 lines(or more)
#define back_light_on 255
#define back_light_off 0b11110111

int8 const LCD_INIT_STRING[4] = 
{ 
 0x20 | (lcd_type << 2),  // Set mode: 4-bit, 2+ lines, 5x8 dots 
 0xc,                     // Display on 
 1,                       // Clear display 
 6                        // Increment cursor 
 }; 

void Write_PCF(char dato);
void Send_D7_D4(int8 address,int8 nibble);
void lcd_send_byte(int8 address, int8 n);
void lcd_init(void);
void lcd_gotoxy(int8 x, int8 y);
void lcd_putc(unsigned char c);
void lcd_puts(unsigned char *dato);
void Clear_LCD();
void CGRAM(uint8_t n);
void CGRAM_x(uint8_t p);


#endif	/* XC_HEADER_TEMPLATE_H */

