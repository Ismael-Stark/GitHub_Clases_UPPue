/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F57Q84
        Driver Version    :  2.00
*/


#include "mcc_generated_files/mcc.h"
#include <math.h>
#include <inttypes.h>
//#include <pic18f57q84.h>
#include "LCD_i2c.h"
#include "Stepper.h"
#include "millis_micros.h"

//#define stepsPerRevolution 200 //pasos fijos del motor a 1.8grados
//#define stepsPerRevolution 96 //pasos fijos del motor a 3.75grados
#define stepsPerRevolution 582 

/*
                         Main application
 */

//#define SerialAvailable() U1FIFObits.RXBF

bool DatoSerialDiponible = 0;
extern uint8_t buffer[50];

uint8_t Pasos_Soft[4][4] = {    {1,0,0,0},
                                {0,1,0,0},
                                {0,0,1,0},
                                {0,0,0,1},
                           };
//uint8_t Pasos_Soft[4][4] = {    {1,1,0,0},
//                                {0,1,1,0},
//                                {0,0,1,1},
//                                {1,0,0,1},
//                           };


                                

float map(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void Mpasos_init();


void main(void)
{
    uint16_t ADCvalor, contador=0;
    uint32_t tiempoActual;
    uint8_t buffer[34];
    // Initialize the device
    SYSTEM_Initialize();
    //lcd_init();
    //lcd_puts("\fHola mundo");
    //__delay_ms(100);
    
    //Mpasos_init();
    stepper_init(stepsPerRevolution);
    stepper_setSpeed(60);
    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable high priority global interrupts
    INTERRUPT_GlobalInterruptHighEnable();

    // Enable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowEnable();
    
    // Disable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighDisable();

    // Disable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowDisable();
    printf("Hola motor pasos\n");
    INTERRUPT_GlobalInterruptLowEnable();

    while (1)
    {   
        uint32_t tiempoActual = millis();
        //printf("tiempo %Lu\n",tiempoActual);
        printf("%" PRIu32 "\n",tiempoActual);
        printf("clockwise\n");
        stepper_step(stepsPerRevolution);
        __delay_ms(500);

    // step one revolution in the other direction:
        printf("counterclockwise\n");
        stepper_step(-stepsPerRevolution);
        __delay_ms(500);
        //printf("contador %d\n",contador ++);
        LED0_Toggle();
        //__delay_ms(500);
    }
}






void Mpasos_init(){
    LATF = 0;
    PORTF = 0;
    TRISF &= ~( (1<<7)|(1<<6)|(1<<5)|(1<<4) );
}
/**
 End of File
*/


