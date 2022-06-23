
#include "mcc_generated_files/mcc.h"
#include "LCD_i2c.h"

uint8_t contador = 0, buffer[40];
uint16_t lecturaADC = 0;

float mV = 3.3/4095, V, temperatura;


/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    lcd_init();
    sprintf(buffer,"\fLCD i2c\nIET 3A");
    lcd_puts(buffer);

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    while (1)
    {
        lecturaADC =  ADC_GetSingleConversion(LM35);
        V = mV*lecturaADC;
        temperatura = V / 0.01;
        printf("cont=%d, ADC=%i\nV=%f, Temp=%f\n",contador++,lecturaADC, V, temperatura);
        __delay_ms(500);
        sprintf(buffer,"\fcont=%d\n ADC=%i",contador++,lecturaADC);
        lcd_puts(buffer);
        // Add your application code
    }
}
/**
 End of File
*/