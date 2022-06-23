
#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    uint8_t contador = 0;
    char c;
    // Initialize the device
    SYSTEM_Initialize();
    //TRISFbits.TRISF0

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    //cp ${ImagePath} c:/
    
    LED0_SetLow();//se enciende el led de la tajeta
     __delay_ms(500);    
    printf("\nPrueba Puerto serial tarjeta Curiosity PIC18f57Q84\n");
    printf("manda una 'a' para encender un led\n cualquier otra letra para apagar el led\n");
    LED0_SetHigh();//se apaga el led de la tarjeta
    __delay_ms(500);
    while (1)
    {
//        c = getch();
        /*c = UART1_Read();
        
        if (c == 'a'){
            LED0_SetLow();
            LED1_SetHigh();
        }else{
            LED0_SetHigh();
            LED1_SetLow();
        }
        */
        
        //Tarea hacer de dos formas, usando if y usando switch-case
        // led1, q:enciende, z:apaga
        // led2, w:enciende, x:apaga
        // led3, e:enciende, c:apaga
        // led4, r:enciende, v:apaga
        // todos, t:enciende,by:apaga
        
        printf("Contador: %i\n\r",contador++);
        LED0_SetHigh();
        LED1_SetLow();
        LED2_SetHigh();
        __delay_ms(500);
        LED0_SetLow();
        LED1_SetHigh();
        LED2_SetLow();
        __delay_ms(500);
        // Add your application code
    }
}
/**
 End of File
*/