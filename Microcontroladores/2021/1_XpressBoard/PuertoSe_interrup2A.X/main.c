

#include "mcc_generated_files/mcc.h"
uint16_t leer_adc = 0;


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
    
    /* *****************************tarea ************************************
     agregar completar los led que faltan(de la tarjeta) para encender y apagar usando la frase:
     
     ledxon  y ledxoff
     
     donde x es el numero del led a encender o apagar
     pueden usar la funcion strstr()  o la funcion strcmp()
     * 
     * agregar mas leds a la tarjeta usando protoboard
     * agregarlos al puertoB del pin RB0 al RB5 
     * ejemplo  si escribo:
     * led10on*
     * 
     * lo que hara es encender el led conectado al pin RB5    
     */
    
    while (1)
    {
        ADCC_StartConversion(POT);  //aqui indicamos que puerto del adc se va a leer
        while ( ADCC_IsConversionDone() == false  );//pregunta si ya termino de hacer laconversion el ADC
        leer_adc = ADCC_GetConversionResult();//una vez que se termina de hacer la conversion
                                                //se guarda lo qeu se lee en una variable
        

        printf("ADC: %u\n",leer_adc);
        __delay_ms(500);
        // Add your application code
    }
}
/**
 End of File
*/