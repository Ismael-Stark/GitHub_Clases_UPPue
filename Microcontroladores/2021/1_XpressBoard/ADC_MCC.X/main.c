

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    uint16_t promedio_adcc;
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
    LED1_SetHigh();
    printf("Valor ADCC");
    while (1)
    {
        //LED1_Togg
        
        promedio_adcc = ADCC_GetSingleConversion(POT);
         printf("Valor ADCC: %i\n\r",promedio_adcc);

        /*
        ADCC_StartConversion(POT);
        while(ADCC_IsConversionDone() == false);
        promedio_adcc = ADCC_GetFilterValue();
        printf("Valor ADCC: %i\n\r",promedio_adcc);
        if(PIR1bits.ADTIF == 1){
            LED4_SetHigh();
            PIR1bits.ADTIF = 0;
        }else{
            LED4_SetLow();
        }*/
        
        __delay_ms(500);
    }
}
/**
 End of File
*/