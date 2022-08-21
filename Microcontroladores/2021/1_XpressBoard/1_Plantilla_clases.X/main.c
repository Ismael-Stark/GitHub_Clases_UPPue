/**
 * Palantilla para clases XD
*/

#include "mcc_generated_files/mcc.h"
//#include "mcc_generated_files/examples/i2c1_master_example.h"
//#include "dht11.h"
//#include "LCD_i2c.h"
#include <string.h>
#include <stdio.h>
//#include "EMC1001.h"
#include "servo.h"
    
#define delay_ms(x) __delay_ms(x)
#define delay_us(x) __delay_us(x)

/*
                         Main application
 */

uint8_t temph, templ;

void main(void)
{
    uint8_t t,h, C;
    uint8_t temph, templ;
    uint8_t buffer[40],i=0,j=4,k=4;
    uint8_t buffer2[20];
    uint8_t buffer3[20];
    
    
    // initialize the device
    SYSTEM_Initialize();
    
    //dht11_init();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    //lcd_init();
    //lcd_gotoxy(1,2); //columna,fila
    //lcd_puts("Hola");
    LED1_SetHigh();
    while (1)
    {
        
        if(flagRTCC==1){
            flagRTCC=0;
            PIN_SERVO1 = 1;
            flagSERVO1=1;    
        }

        // CONTROL DE ANCHO DEL PULSO PWM
        if(flagSERVO1==1){
            valTIMER0 = TMR0_ReadTimer();
            if(valTIMER0>tSERVO1){
                flagSERVO1=0;
                PIN_SERVO1 = 0;
            }   
        }
    }
}
/**
 End of File
*/