#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
#include "LCD_i2c.h"
#include "MAX6675.h"

/*
                         Main application
 */
void main(void)
{
    uint8_t buffer[32];
    uint16_t x=0;
    float t;
    // initialize the device
    SYSTEM_Initialize();
    lcd_init();
    MAX66_init();
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
    lcd_puts("\fHola");
    __delay_ms(500);
    while (1)
    {
//        MAX66_init();
//        __delay_us(50);
//        x = read_Termopar();
//        sprintf(buffer,"\f%i",x);
        
        t = MAX66_readC();
        sprintf(buffer,"\f%.2f",t);
         lcd_puts(buffer);
        __delay_ms(500);
        // Add your application code
    }
}
/**
 End of File
*/