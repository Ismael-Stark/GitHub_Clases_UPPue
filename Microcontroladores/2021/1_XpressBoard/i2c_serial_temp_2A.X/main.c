
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
#define address 0b0111000

void main(void)
{
    uint8_t temph, templ;
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
    printf("hola\n");
    
    while (1)
    {
        //I2C1_Read1ByteRegister(i2c1_address_t address, uint8_t reg)
        temph = I2C1_Read1ByteRegister(address, 0x00);
        templ = I2C1_Read1ByteRegister(address, 0x02);
        templ >>= 6;
        templ *= 25;
        
        //por ahora el sensor no lee temperaturas negativas
        //hace falta usar el complentoA2 , para poder leer
        //numero negativos
        
        printf("la temperatura es: %d.%d\n", temph,templ);
        __delay_ms(500);// Add your application code
    }
}
/**
 End of File
*/