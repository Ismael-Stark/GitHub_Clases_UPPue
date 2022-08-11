#include "Timer0.h"

void Timer0_8bit_init(uint8_t postscaler, uint8_t prescaler, uint8_t TimerValue ){
    T0CON0 = 0;//T0en disabled, t016bit: 8bit mode, postscaler 1:1
    T0CON0 = (T0CON0 | postscaler);
    T0CON1 = 0b01110000; //t0cs: hfintosc, t0async: 1 no syncronized; t0ckps: 0000 prescaler 1:1
    T0CON1 = (T0CON1 | prescaler);
    TMR0H = TimerValue;
    TMR0L = 0;
    T0CON0 = T0CON0 | (1<<7);//habilitar timer0
}


void Timer0_8bit_InterruptInit(uint8_t postscaler, uint8_t prescaler, uint8_t TimerValue ){
    T0CON0 = 0;//T0en disabled, t016bit: 8bit mode, postscaler 1:1
    T0CON0 = (T0CON0 | postscaler);
    T0CON1 = 0b01110000; //t0cs: hfintosc, t0async: 1 no syncronized; t0ckps: 0000 prescaler 1:1
    T0CON1 = (T0CON1 | prescaler);
    TMR0H = TimerValue;
    TMR0L = 0;
    
    // limpiamos bandera antes de habilitar interrupcion 
    PIR0bits.TMR0IF = 0;

    // habilitamos tinterrupcion tmr0.
    PIE0bits.TMR0IE = 1;
    
    T0CON0 = T0CON0 | (1<<7);//habilitar timer0
}

uint8_t Timer0_8bit_get(){
    return TMR0L;
}
void Timer0_8bit_set(uint8_t TimerValue){
    TMR0L = TimerValue;
}







void Timer0_16bit_init();
void Timer0_16bit_InterruptInit(uint8_t postscaler, uint8_t prescaler, uint16_t TimerValue ){
    T0CON0 = 0;//T0en disabled, t016bit: 8bit mode, postscaler 1:1
    T0CON0 = T0CON0 | (1<<6);// modo 16bit 
    T0CON0 = (T0CON0 | postscaler);
    T0CON1 = 0b01110000; //t0cs: hfintosc, t0async: 1 no syncronized; t0ckps: 0000 prescaler 1:1
    T0CON1 = (T0CON1 | prescaler);
    TMR0H = (uint8_t)TimerValue>>8;
    TMR0L = (uint8_t)TimerValue&0xff;
    
    // limpiamos bandera antes de habilitar interrupcion 
    PIR0bits.TMR0IF = 0;

    // habilitamos tinterrupcion tmr0.
    PIE0bits.TMR0IE = 1;
    
    T0CON0 = T0CON0 | (1<<7);//habilitar timer0  
}
void Timer0_16bit_get();
void Timer0_16bit_set(uint16_t TimerValue){
    TMR0H = (uint8_t)TimerValue>>8;
    TMR0L = (uint8_t)TimerValue&0xff;
}