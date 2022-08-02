#include "Timer5.h"

void Timer5_init(uint8_t prescaler, uint16_t TimerValue ){
    T5CON = 0b0000010;//rd16=1, timer off
    T5CON = T5CON | (prescaler<<4);
    T5CLK = T5FOSC; //clock source MFINTOSC
    TMR5H = (uint8_t)TimerValue>>8;
    TMR5L = (uint8_t)TimerValue & 0xff;
    
    //limpiar bandera primiero y no habilitamos interrupt
    PIR4bits.TMR5IF = 0;
    
    T5CON = T5CON | (1<<0); //habilitar timer1
}

void Timer5_Interrupt_init(uint8_t prescaler, uint16_t TimerValue ){
    T5CON = 0b0000010;//rd16=1, timer off
    T5CON = T5CON | (prescaler<<4);
    T5CLK = T5FOSC; //clock source MFINTOSC
    TMR5H = (uint8_t)TimerValue>>8;
    TMR5L = (uint8_t)TimerValue & 0xff;
    
    //limpiar bandera primiero
    PIR4bits.TMR5IF = 0;
    
    //habilitar interrupt
    PIE4bits.TMR5IE = 1;
    
    T5CON = T5CON | (1<<0); //habilitar timer1
}

void Timer5_set(uint16_t time){
    if (T5CONbits.nT5SYNC == 1)//si esta activa la sincronizacion
    {
        // apagar timer antes de escribir
        T5CONbits.TMR5ON = 0;

        // escribir valor del timer
        TMR5H = (uint8_t)(time >> 8);
        TMR5L = (uint8_t)time;

        // encender timer despues de escribir el valor
        T5CONbits.TMR5ON =1;
    }
    else//sino se usa sincronizacion
    {
        // escribir valor del timer
        TMR5H = (uint8_t)(time >> 8);
        TMR5L = (uint8_t)time;
    }
    
}
    
uint16_t Timer5_get(){
    return( ((uint16_t)TMR5H<<8) | TMR5L );
}