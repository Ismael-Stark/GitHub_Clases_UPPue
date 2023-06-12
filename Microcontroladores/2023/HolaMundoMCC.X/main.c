#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    uint16_t ADCvalor;
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    while (1)
    {
        // Add your application code
        LED1_Toggle();
        LED2_Toggle();
        ADCvalor = ADC_GetSingleConversion(LM35);
        printf("ADC5: %d\n",ADCvalor);
        __delay_ms(500);
    }
}
/**
 End of File
*/