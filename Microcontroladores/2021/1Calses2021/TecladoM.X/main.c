
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
#include "teclado.h"
#include "LCD_i2c.h"
#include <stdio.h>


/*
                         Main application
 */
void main(void)
{
    uint8_t c = '\0', buffer[40], string[16];   //  '\0'  caracter nulo
    
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
    lcd_init();
    teclado_init();
    lcd_puts("\fTeclado Matricial");
    while (1)
    {
        c = keypad_scanner();
        if (c != 0 ){
            printf("Presionaste la tecla: %c\n",c);
            sprintf(buffer,"\fPresionaste: %c",c);
            lcd_puts(buffer);
            //__delay_ms(50);
        }
        //__delay_ms(100);
        // Add your application code
    }
}
/**
 End of File
*/