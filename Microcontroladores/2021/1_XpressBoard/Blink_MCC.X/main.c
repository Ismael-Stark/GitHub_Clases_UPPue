

#include "mcc_generated_files/mcc.h"
#define delay_ms(x) __delay_ms(x)
/*
                         Main application
 */
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
    
    ///////////recibir datos en eusart.c 
    //en funcion EUSART_Receive_ISR(void)
    //asm("MOVLW 0x0E");
    delay_ms(100);
    //LED1_SetHigh();
    //LED3_SetHigh();
    
    printf("hola BLINK_MCC\n\r");

    
    while (1)
    {   
        /*asm("BSF LATA,0");
        __delay_ms(100);
        asm("BCF LATA,0");
        __delay_ms(100);*/
        //if(EUSART_is_tx_ready()){
        //printf("Saludos\n\r");}
        printf("Saludos\n\r");
        if (PORTAbits.RA5==1){
            LATAbits.LATA0=0;
        }else{
            LATAbits.LATA0=1;
        }
/*        LED0_Toggle();
        LED1_Toggle();
        LED2_Toggle();
        LED3_Toggle();*/
        __delay_ms(500);
        // Add your application code
    }
}
/**
 End of File
*/