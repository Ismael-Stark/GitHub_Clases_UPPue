

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    uint16_t temp = 0;
    uint8_t th,tl;
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
    printf("Hola mundo\n");
    LATBbits.LATB2 = 1;
    __delay_ms(1000);

    while (1)
    {
        LATBbits.LATB2 = 0;
        SPI1_Open(SPI1_DEFAULT);
        //SPI1_ReadBlock(&th, 1);
        //SPI1_ReadBlock(&tl, 1);
        th = SPI1_ExchangeByte(0);
        tl = SPI1_ExchangeByte(0);
        
        SPI1_Close();
        LATBbits.LATB2 = 1;
        
        temp = (th<<8)|tl;
        temp >>= 4;
        printf("%.2f\n",temp/4.0);
        __delay_ms(500);
        // Add your application code
    }
}
/**
 End of File
*/