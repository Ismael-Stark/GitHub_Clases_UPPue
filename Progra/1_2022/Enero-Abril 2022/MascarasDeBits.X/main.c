

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    //TRISx se ocupa para declarar entras o salidas
    //PORTx se ocupa para leer un pin/puerto que funcione como entrada
    //LATx  se ocupa pra encender/apagar Algun pin/puerto que funcione como salida
    //ANSELx Se ocupa para activar/desactivar las entradas analogicas
    
    LATF = 0;//0 ES TODO EL PUETO APAGADO, FF(255) TODO EL PUERTO ENCENDIDO
    //1 EL PIN ES ENTRADA, 0 SI EL PIN ES SALIDA
    TRISF = TRISF & ~(1<<3);//SOLO EL PIN RF3 ES SALIDA
    ANSELF = 0;//TODO EL PUERTO COMO e/s DIGITAL
    
    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    while (1)
    {   // Add your application code
        
        /*LATF = LATF | (1 <<3);//ENCENDIENDO PIN_RF3
        __delay_ms(50);
        LATF = LATF & ~(1<<3);  //APAGA PIN_RF3
        __delay_ms(50);*/
        
        LATF = LATF ^ (1<<3); /*OPERACIN XOR PARA HACER TOGGLE AL PIN_RF3*/
        __delay_ms(500);        
        
    }
}
/**
 End of File
*/