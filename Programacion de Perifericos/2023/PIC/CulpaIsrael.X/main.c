
#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    uint8_t contador=0;
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

    while (1)
    {
        printf("Hola %d\n",contador++);
        __delay_ms(5);
        // Add your application code
    }
}
/**
 End of File
*/