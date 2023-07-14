
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
#define address 0b0111000
/*
                         Main application
 */
void main(void)
{
     uint8_t temph, templ;
    uint8_t contador=0;
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
     printf("Hola mundooooooooo\n");
    LED1_SetHigh();
    LED2_SetHigh();
    LED3_SetHigh();
    LED4_SetHigh();

    while (1)
    {
        printf("Hola %d\n",contador++);
        uint16_t Leer_adc = ADCC_GetSingleConversion(LM35);
        float volt = (5.0*Leer_adc)/1024;
        float tempe = (3.3*100*Leer_adc)/1024;
        printf("ADC_RB0: %d,Volt: %.5f, temp %.2f\n",Leer_adc,volt,tempe);
        
        
        temph = I2C1_Read1ByteRegister(address, 0x00);
        templ = I2C1_Read1ByteRegister(address, 0x02);
        templ >>= 6;
        templ *= 25;
        
        //por ahora el sensor no lee temperaturas negativas
        //hace falta usar el complentoA2 , para poder leer
        //numero negativos
        
        printf("MPLABx la temperatura es: %d.%d\n\n", temph,templ);
        __delay_ms(1000);
        // Add your application code
    }
}
/**
 End of File
*/