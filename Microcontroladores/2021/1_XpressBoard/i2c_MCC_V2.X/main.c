
#include "mcc_generated_files/mcc.h"

#include "mcc_generated_files/examples/i2c2_master_example.h"

#define sensor 0b00111000   //valor real de direccion 0b01110000
                            //el MCC solo necesita los 7bits de la direccion, no es ncesario
                            //el bit R/W por eso se le quita el bit0
/*
                         Main application
 */
void main(void)
{
    uint8_t r1, r2;
    r1 = r2 = 0;
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

    printf("\r\nModulo i2c usando MCC V2 XD\n\n");
    while (1)
    {   
        //I2C1_Write1ByteRegister(sensorw,0,0);
        r1  = I2C2_Read1ByteRegister(sensor,0);
        r2  = I2C2_Read1ByteRegister(sensor,2);
        r2 >>= 6;
        printf("Sensor de temperatura MCC v2\n %d.%d Excelente\n\n",r1,r2*25);
        LED0_Toggle();
        __delay_ms(500);
        // Add your application code
    }
}
/**
 End of File
*/