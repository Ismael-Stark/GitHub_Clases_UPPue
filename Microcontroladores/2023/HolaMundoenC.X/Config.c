#include "Config.h"


void init_osc(void){
    //OSCCON1 = 0b01110000;
    //OSCCON2 = 0b01110000;
    OSCEN = 0b10000000;

}


void pin_init(void){
    
    LATA = 0;   //LIMPO LATA
    PORTA = 0;  //LIMPIO PORTA
    //TRISA = 0b00001000
    TRISA |= (1<<3 | 1<<0);    //SOLO PIN A3 COMO ENTRADA, y pinA0 como entrada
    WPUA |= (1<<3);     //SOLO SE ACTIVA PULL UP DEL PIN A3
    ANSELA = 0;     //TODO E/S DIGITAL
    
    LATF = 0;   //LIMPIO LATA
    PORTF = 0;  //LIMPIO PORTA
    //TRISF = 0b00000000;
    TRISF &= ~(1<<3 | 1<<2 | 1<<1 | 1<<0);//PIN RF2 Y RF3 COMO SALIDAS
    ANSELF = 0;     //TODO PUERTO COMO E/SALIDA DIGITAL
    
    //LATF |= (1<<2) ;  //ENCIENDO SALIDA
    //LATF |= (1<<3) ;  //Apago LED tarjeta, recordar que led funciona con logica negada
    
    TRISAbits.TRISA0 = 1; // Entrada RA0
    ANSELAbits.ANSELA0 = 1; // Analógico RA0
    TRISAbits.TRISA1 = 1; // Entrada RA1
    ANSELAbits.ANSELA1 = 1; // Analógico RA1
    
    TRISA |= (1<<5);    // Entrada RA5
    ANSELA |= (1<<5);   // Analógico RA5
    
    
}