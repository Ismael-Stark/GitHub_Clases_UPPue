/*
 * File:   Main_lcd_i2c.c
 * Author: Edicion
 *
 * Created on 1 de marzo de 2021, 10:03 PM
 */


#include <xc.h>
#include "DEVICE_CONFIG.h"
#define delay_ms(x) __delay_ms(x)
#define delay_us(x) __delay_us(x)

int8_t  high_byte;
uint8_t low_byte;
//0b0111000

uint8_t Leer_EMC1001(uint8_t add){
    uint8_t x=0;
    I2C_start();
    I2C_write(0b01110000);  //ESCRITURA
    I2C_write(add);
    I2C_restart();
    I2C_write(0b01110001); //LECTURA
    x = I2C_read();
    I2C_nack();
    I2C_stop();
    return x;
}
void main(void) {
    char txt[32];
    SYSTEM_init();
    lcd_init();
    printf("Hola mundo lcd\n\r");
    lcd_putchar("\fHola\nmundo lcd\n20\nx4");
    delay_ms(500);
    while(1){

        high_byte = Leer_EMC1001(0);
        delay_ms(10);
        low_byte = Leer_EMC1001(2);
        
        low_byte = low_byte >> 6;
        printf("La temperatura es: %d.%d C\n\r", high_byte, low_byte *25 );
        LATA0 = !LATA0;
        
        sprintf(txt,"\fLa temp es:\n%d.%d", high_byte, low_byte *25);
        lcd_putchar(txt);
        
        //lcd_putchar("\fHola");
        //lcd_gotoxy(2,1);
        //lcd_putc('A');
       
        __delay_ms(100);
    }
    return;
}
