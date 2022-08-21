

#include <builtins.h>

#include "mcc_generated_files/mcc.h"
#include "MisDefiniciones.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"

#define sensor 0b00111000   //valor real de direccion 0b01110000
                            //el MCC solo necesita los 7bits de la direccion, no es ncesario
                            //el bit R/W por eso se le quita el bit0


void Get_temp(){
    uint8_t r1, r2;
    
    TH= I2C1_Read1ByteRegister(sensor,0); //Parte entera de latemperatura
    r2  = I2C1_Read1ByteRegister(sensor,2); //Parte decimal de la temperatura
    r2 >>= 6;
    TL = r2 *25;
    printf("Sensor de temperatura MCC\n %d.%d\n\n",TH,r2*25);
    
}

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    //u=d=c=um=0;
    Punto_SetLow();
    while (1)
    {
        Get_temp();
        tempDu =  (TL)%10;
        tempDd = (TL/10)%10;
        
        tempEu =  (TH)%10;
        tempEd = (TH/10)%10;

        __delay_ms(5000);

        
        
        
        

        
        // Add your application code
    }
}


/**
 End of File
*/