#include "mcc_generated_files/mcc.h"
#include "ultrasonico.h"

#define delay_ms(x) __delay_ms(x)
#define delay_us(x) __delay_us(x)
#define _XTAL_FREQ 20000000L
/*
                         Main application
 */
void main(void)
{
    float distancia=0;
    uint16_t distancia_mm;
    // initialize the device
    SYSTEM_Initialize();
    
    
    hc_sr04_init();

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
    delay_ms(500);
    printf("Sensor ultrasonico\nMPlabx MCC");
    delay_ms(1500);
    while (1)
    {
        
        distancia_mm = hc_sr04_mm();
        printf("la distancia del objeto es: %i mm\n",distancia_mm);
        
//        distancia = hc_sr04_cm();
//        printf("la distancia del objeto es: %.2f cm\n",distancia);
//        
//        distancia = hc_sr04_m();
//        printf("la distancia del objeto es: %.3f m\n\n",distancia);
        delay_ms(1000);
    }
}
/**
 End of File
*/