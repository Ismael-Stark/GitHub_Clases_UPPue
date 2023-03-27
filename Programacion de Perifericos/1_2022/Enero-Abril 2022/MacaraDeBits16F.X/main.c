
#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    float x = 3.1416;
    
    //TRISx se ocupa para declarar entras o salidas
    //PORTx se ocupa para leer un pin/puerto que funcione como entrada
    //LATx  se ocupa pra encender/apagar Algun pin/puerto que funcione como salida
    //ANSELx Se ocupa para activar/desactivar las entradas analogicas
    
    LATA = 0;//0 ES TODO EL PUETO APAGADO, FF(255) TODO EL PUERTO ENCENDIDO
    //1 EL PIN ES ENTRADA, 0 SI EL PIN ES SALIDA
    TRISA = TRISA & ~( (1<<3)|(1<<2)|(1<<1)|(1<<0) ) ;//DEL PIN0 AL PIN3 ES SALIDA
    ANSELA = 0;//TODO EL PUERTO COMO e/s DIGITAL
    
    printf("bjcsbdkjcs \n");
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

    while (1)
    {
        // Add your application code
        /*LATA = LATA | (1 <<3);//ENCENDIENDO PIN_RF3
        __delay_ms(50);
        LATA = LATA & ~(1<<3);  //APAGA PIN_RF3
        __delay_ms(50);*/
        
        //LATA = LATA ^ (1<<3); /*OPERACIN XOR PARA HACER TOGGLE AL PIN_RF3*/
        //__delay_ms(500);  
        
        /*LATA = LATA | ( (1<<3)|(1<<2)|(1<<1)|(1<<0) );//ENCENDIENDO PIN_RF3
        __delay_ms(50);
        LATA = LATA & ~( (1<<3)|(1<<2)|(1<<1)|(1<<0) ) ;  //APAGA PIN_RF3
        __delay_ms(50);*/
        
        /*LATA = 0B00001111;//ENCENDIENDO 
        __delay_ms(200);
        LATA = 0;  //APAGA 
        __delay_ms(200);*/
        
        /*LATA = 0B00000001;//ENCENDIENDO 
        __delay_ms(200);
        LATA = 0B00000010;//ENCENDIENDO 
        __delay_ms(200);
        LATA = 0B00000100;//ENCENDIENDO 
        __delay_ms(200);
        LATA = 0B00001000;//ENCENDIENDO 
        __delay_ms(200);*/
        
        LATA = 0B00000001;
        __delay_ms(800);
        for (int i =0 ; i<2;i++){
            LATA = LATA<<1;
            __delay_ms(800);
        }
    }
    
}
/**
 End of File
*/