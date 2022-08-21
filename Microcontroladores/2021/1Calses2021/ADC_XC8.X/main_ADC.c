
#include <xc.h>
#include "configuracion.h"
#include "misdefiniciones.h"
#include "adc.h"
#include <stdio.h>
#define _XTAL_FREQ 32000000L

#define x 300

void init(){
    PORTA = 0;      //LIMPIO PORTA
    LATA = 0;       //LIMPIO LATA
    ANSELA = 0;     //EL PUERTO A SIRVE COMO ENTRA Y SALIDA DIGITAL

    TRISA = 0b11110000;
    
    PORTB = 0;      //LIMPIO PORTB
    LATB = 0;       //LIMPIO LATB
    ANSELB = 0;     //EL PUERTO A SIRVE COMO ENTRA Y SALIDA DIGITAL
    TRISB = 0x01;   //pinB0 es entrada
    
    PORTC = 0;      //LIMPIO PORTB
    LATC = 0;       //LIMPIO LATB
    ANSELC = 0;     //EL PUERTO C SIRVE COMO ENTRA Y SALIDA DIGITAL
    TRISCbits.TRISC7 = 0;//CON ESTO SOLO EL PIN C7 ES UNA SALIDA,
                         //LOS DEMAS PINES NO IMPORTAN
    
}


void main(void) {
    uint16_t lecturaAdc;
    uint8_t adc;
    init();
    adc_init();
    
    
    while(1){
        lecturaAdc = Leer_adc(pot); //leo potenciometro
        adc = lecturaAdc>>2;
        

        LATA = adc;
        delay_ms(100);
               
    }
    return;
}
