

#include "mcc_generated_files/mcc.h"

char coin = 0;

void main(void)
{
    uint8_t a=0;
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:
    
    //inicias lcd.....
    
    //en lcd mensaje "iniciando"
    
    
    __delay_ms(500);
    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        printf("contador %i, coin: %i pejos\n", a,coin);
        __delay_ms(500);
        // Add your application code
    }
}
/**
 End of File
*/