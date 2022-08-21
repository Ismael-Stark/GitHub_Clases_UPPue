
#include "mcc_generated_files/mcc.h"
#include "SofSerial.h"

/*
                         Main application
 */
void main(void)
{
    uint8_t c =0, buffer[20];
    // initialize the device
    SYSTEM_Initialize();
    SoftWareUart_Init();
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
    printf("Hola\n");
    __delay_ms(1000);
    while (1)
    {
        c = Software_UART_Read();
        //sprintf(buffer,"Saludos desde...%d\n",c++);
        //Software_UART_Write_Text(buffer);
        printf("%c\n",c);
        __delay_ms(500);
        // Add your application code
    }
}
/**
 End of File
*/