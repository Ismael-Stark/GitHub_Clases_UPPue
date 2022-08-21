
#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    uint8_t x;
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    //asm("MOVLW 0x0E");
    DAC_SetOutput(31);
    //LATAbits.LATA0=1;
    __delay_ms(1000);
    while (1)
    {
        printf("%d\n",x++);
        if(x>31){
            x=0;
        }
        DAC_SetOutput(x);
        __delay_ms(50);
        // Add your application code
    }
}
/**
 End of File
*/