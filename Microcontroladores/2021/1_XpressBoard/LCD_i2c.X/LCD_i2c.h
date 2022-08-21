
#ifndef LCD_I2C_H
#define LCD_I2C_H

#include "I2C.h"
#include <stdint.h> 
//#define delay_ms(x)     __delay_ms(x)
//#define delay_us(x)     __delay_us(x)
typedef uint8_t         int8;

void Write_PCF(char dato);
void Send_D7_D4(int8 address,int8 nibble);
void lcd_send_byte(int8 address, int8 n);
void lcd_init(void);
void lcd_gotoxy(int8 x, int8 y);
void lcd_putc(unsigned char c);
void lcd_putchar(unsigned char *dato);
void Clear_LCD();
void CGRAM_x(int p);


#endif	/* XC_HEADER_TEMPLATE_H */

