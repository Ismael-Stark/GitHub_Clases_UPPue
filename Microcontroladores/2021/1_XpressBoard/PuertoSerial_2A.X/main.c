

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    
    
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
    unsigned char txt[10];
    uint8_t c;
    IO_RA0_SetHigh();
    __delay_ms(500);    
    printf("\nPrueba Puerto serial tarjeta Mplab Xpress board\n");
    printf("manda una 'a' para encender un led\n cualquier otra letra para apagar el led\n");
    IO_RA0_SetLow();
    __delay_ms(500);
    while (1)
    {
        c = getch();
        if (c == 'a'){
            IO_RA0_SetHigh();
        }else{
            IO_RA0_SetLow();
        }
        //Tarea hacer de dos formas, usando if y usando switch-case
        // led1, q:enciende, w:apaga
        // led2, a:enciende, s:apaga
        // led3, z:enciende, x:apaga
        // led4, f:enciende, g:apaga
        // todos, t:enciende, y:apaga
    }
}
/**
 End of File
*/