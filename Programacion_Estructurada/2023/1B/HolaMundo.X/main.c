

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

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
            led_SetHigh();
        }else{
            led_SetLow();
        }
        // Add your application code
    }
}
/**
 End of File
*/