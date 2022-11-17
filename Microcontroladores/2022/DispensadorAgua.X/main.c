

#include "mcc_generated_files/mcc.h"

char coin = 0;
char coinant=0;

void main(void)
{
    uint8_t a=0;
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:
    
    //inicias lcd.....
    
    //en lcd mensaje "iniciando"
    
    
    __delay_ms(500);
    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    printf("credito: %i pejos\n", a,coin);
    while (1)
    {
        
        if (coin != coinant){
            printf("credito: %i pejos\n",coin);
            coinant = coin;
        }

        if(!boton_GetValue() && coin >= 5){
            printf("depachando litros\n");
            coin = coin - 5;
            __delay_ms(500);
            while(!boton_GetValue()){}
            
        }
        // Add your application code
    }
}
/**
 End of File
*/