#include "mcc_generated_files/mcc.h"

void main(void)
{
    uint16_t duty = 0;
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
    PWM1_LoadDutyValue(100);
    TRISA = 0;

    while (1)
    {
        //ADCC_StartConversion(POT);
        //while (ADCC_IsConversionDone() == false) { }
        //duty = ADCC_GetConversionResult();
        
        duty = ADCC_GetSingleConversion(POT);
        PWM1_LoadDutyValue(duty);
        
        PWM5_LoadDutyValue(duty);
        
        //LATAbits.LATA3 = !LATAbits.LATA3;
        printf("%i\n",duty);
        __delay_ms(50);
        // Add your application code
    }
}
/**
 End of File
*/