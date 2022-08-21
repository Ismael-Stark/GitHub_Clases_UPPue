
#include <xc.h>
#include "configuracion.h"
#include "misdefiniciones.h"
#define _XTAL_FREQ 32000000L

#define x 300

void init(){
    PORTA = 0;      //LIMPIO PORTA
    LATA = 0;       //LIMPIO LATA
    ANSELA = 0;     //EL PUERTO A SIRVE COMO ENTRA Y SALIDA DIGITAL
    TRISA = 0b11110000;
    
}

void main(void) {
    init();
    
    while(1){
        //codigo1
//        LATAbits.LATA3 = 1;
//        //LATA = 0;
//        delay_ms(50);
//        LATAbits.LATA3 = 0;
//        //LATA = 0;
//        delay_ms(50);
        
        //codigo2
//        led2 = 1;
//        delay_ms(500);
//        led2 = 0;
//        delay_ms(500);
        
        //codigo3
        LATA = 1;
        delay_ms(x);
        for (int i = 0; i<3;i++){
            LATA <<= 1;
            delay_ms(x);
        }
        
        for (int i = 0; i<2;i++){
            LATA >>= 1;
            delay_ms(x);
        }
        
    }
    return;
}
