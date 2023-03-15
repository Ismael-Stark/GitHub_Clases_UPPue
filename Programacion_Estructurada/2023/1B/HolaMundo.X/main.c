

#include "mcc_generated_files/mcc.h"
#define ledon   led_SetLow()
#define ledoff  led_SetHigh()

/*
                         Main application
 */

void cuadrado(int numero);//prototipo de funcion

void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    ledoff;
    cuadrado(4);
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    //TRISAbits.TRISA3 = 1;
    //ANSELAbits.ANSELA3 = 0;
    

    while (1){        
        if(boton_GetValue()==1){
            ledoff;
        }else{
            ledon;
        }
        // Add your application code
    }
}
/**
 End of File
*/

void cuadrado(int numero){
    //nadaaaa
    
}