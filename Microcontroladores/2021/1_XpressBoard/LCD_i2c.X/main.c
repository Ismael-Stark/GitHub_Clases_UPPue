/*
 * File:   main.c
 * Author: carlo
 *
 * Created on 4 de enero de 2021, 08:48 PM
 */


#include "DEVICE_CONFIG.h"

int8_t  high_byte;
uint8_t low_byte;
//0b0111000

void main(void) {
    
    SYSTEM_init();
    while(1)
    {  
       
        I2C_start();
        I2C_write(0b01110000);  //ESCRITURA
        I2C_write(0);
        I2C_restart();
        I2C_write(0b01110001); //LECTURA
        high_byte = I2C_read();
        I2C_nack();
        I2C_stop();
        
        I2C_start();
        I2C_write(0b01110000);  //ESCRITURA
        I2C_write(2);
        I2C_restart();
        I2C_write(0b01110001); //LECTURA
        low_byte = I2C_read();
        I2C_nack();
        I2C_stop();
        
        low_byte = low_byte >> 6;
        printf("La temperatura es: %d.%d C\n\r", high_byte, low_byte *25 );
       
        __delay_ms(1000);
        
    }
    return;
}
