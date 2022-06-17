

#include <builtins.h>

#include "mcc_generated_files/mcc.h"
#include <string.h>


void leer_serial(char *ptrCadena){
    int i=0;
    //uint8_t c;
    do {
        ptrCadena[i++] = getch();
        /*c = getch();
        ptrCadena[i] = c;
        i++;
    } while (c != '\n');*/
    } while (ptrCadena[i-1] != '\n');
    ptrCadena[i-1] = '\0';// es para eliminar el enter del array, e indicar que ahi termina mi mensaje
    //i=0;
}
void main(void)
{
    char cadena[100];
    
    
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    while (1)
    {   
        
        LED1_Toggle();
        __delay_ms(300);
        leer_serial(&cadena);//&cadena mandan la direccion de memoria: ej ox003f
        printf("%s\n",cadena);
        
        //strcmp(cadena, referencia); compara la cadena con la referencia y si encuentra
        //la referencia dentro de la cadena entonces envia un 0 indicando
        //que existe la palabra en la varible cadena
        if (strcmp(cadena,"$ld2on")==0){
            LED2_SetLow();
        }
        
        if (strcmp(cadena,"$ld2off")==0){
            LED2_SetHigh();
        }
        
        /*c = getch();//es una funcion bloqueante
        putch(c);*/
    }
}
