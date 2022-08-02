/*
   Autor: Freddy Quispe Tello.
   Fecha: 25-07-2015
 
 * Modificacion para xc8
 * Ismael Sanchez R.
 * fercha: Marzo del 2021
 * 
 * Modificacion para soportar xc8(MCC y sin MCC), CCS(PCD y PCH) y STM32
 * Ismael Sanchez R.
 * fercha: Julio del 2022
*/
/*
 * para usar la libreria en CCS modificar el:
 * #define PCF  64 por el la direccion de la LCD, usa modo 8bit
 * 
 * En xc8 y stm32, #define PCF se usa modo 7bit
 * 
 * si se quiere usar para STM32 solo poner en 1, 0 para CCS y XC8
 * #define STM32 1
 * 
 * lcd_init();                          //inicializa la LCD
 * lcd_gotoxy(uint8_t x, uint8_t y);    //x = , y = 
 * lcd_putc(uint8_t c);                 //imprime texto
 * lcd_puts(uint8_t *dato);             //imprime un testo guardado en una variable buffer
 * Clear_LCD();                         //limpia LCD
 * 
 */

#ifndef LCD_I2C_H
#define LCD_I2C_H


#include <stdint.h>

#if defined(__PCH__) || defined(__PCM__)//code si se usa compilador CCS
//#ifdef ( __PCM__ || __PCH__ )//code si se usa compilador CCS
    #define i2c_restart(void) i2c_start(void)
    //#define LCD_MCC 0
#endif


#ifdef __XC8//code si se usa compilador xc8
    #define delay_ms(x)     __delay_ms(x)
    #define delay_us(x)     __delay_us(x)

    #define LCD_MCC 0
    #if LCD_MCC
        #include <xc.h>
        #include "mcc_generated_files/mcc.h"
        #include "mcc_generated_files/examples/i2c1_master_example.h"
    #else
        #include <xc.h> // include processor files - each processor file is guarded.
        #include "main.h"
        #include "I2C.h"
    #endif
#endif


#define STM32 0
#if STM32    //code si se usa STM32
    #define LCD_MCC 1
    #include "main.h"
    #include "I2C.h"
    #include "SysConfig.h"
#endif


//Modificar direccion i2c PCF aqui
#if defined(__PCH__) || defined(__PCM__)
    #define PCF      64  // Puede ser 112 ? 64 (PCF8574T=64, PCF8574A=112, PCF8574=64)

#else//direccion LCD para stm32 y XC8
    #define PCF       32    //PCF8574A = 56  = 0b00111000,        PCF8574T = 32 = 0b00100000
#endif

#define PCF_ID    7   //si A0,A1 y A2 estan conectados en diferente forma mover aqui


#define LCD_RS    (1<<0)
#define LCD_RW    (1<<1)
#define LCD_E     (1<<2)
#define blacking  (1<<3)
#define LCD_DB4   (1<<4)
#define LCD_DB5   (1<<5)
#define LCD_DB6   (1<<6)
#define LCD_DB7   (1<<7)

/*#define blacking  8
#define LCD_RS    1
#define LCD_RW    2 
#define LCD_E     4
#define LCD_DB4   16
#define LCD_DB5   32
#define LCD_DB6   64
#define LCD_DB7   128*/

#define LCD_LINE_1_ADDRESS 0x00 
#define LCD_LINE_2_ADDRESS 0x40 
#define LCD_LINE_3_ADDRESS 0x14 
#define LCD_LINE_4_ADDRESS 0x54

#define LCD_LINE_LENGTH 20

#define lcd_type 2   // 0=5x7, 1=5x10, 2=2 lines(or more)
#define back_light_on 255
#define back_light_off 0b11110111


void Write_PCF(char dato);
void Send_D7_D4(uint8_t address,uint8_t nibble);
void lcd_send_byte(uint8_t address, uint8_t n);
void lcd_init(void);
void lcd_gotoxy(uint8_t x, uint8_t y);
void lcd_putc(uint8_t c);
void lcd_puts(uint8_t *dato);
void Clear_LCD();
/*void CGRAM(uint8_t n);
void CGRAM_x(uint8_t p);*/

void lcd_setCustomChar(uint8_t *dato, uint8_t dir); // Donde dir es la posicion en donde se escribiran los caracteres, va de 0 a 7
void lcd_showCustomChar(uint8_t x, uint8_t y, uint8_t dir);



#endif	/* XC_HEADER_TEMPLATE_H */

