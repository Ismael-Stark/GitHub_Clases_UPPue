#include"Timer0.h"

void Timer0_8Bit_init(uint8_t postscaler, uint8_t prescaler, uint8_t TimerValue ){
    T0CON0 = 0;//T0en disabled, t016bit: 8bit mode, postscaler 1:1
    T0CON0 = (T0CON0 | postscaler);
    T0CON1 = 0b01110000; //t0cs: hfintosc, t0async: 1 no syncronized; t0ckps: 0000 prescaler 1:1
    T0CON1 = (T0CON1 | prescaler);
    TMR0H = TimerValue;
    TMR0L = 0;
    T0CON0 = T0CON0 | (1<<7);//habilitar timer0
    
}

void Timer0_8Bit_Interrupt_init(uint8_t postscaler, uint8_t prescaler, uint8_t TimerValue ){
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
    //RA3PPS = 
}

void Timer0_8Bit_set(uint8_t time){
    TMR0L = time;
}
uint8_t Timer0_8Bit_get(){
    return  TMR0L;
}

void Timer0_16Bit_init(uint8_t postscaler, uint8_t prescaler, uint16_t TimerValue ){
    T0CON0 = 0;//T0en disabled, t016bit: 8bit mode, postscaler 1:1
    T0CON0 = T0CON0 |(1<<6);//t016bit: 16bit mode
    T0CON0 = (T0CON0 | postscaler);
    T0CON1 = 0b01110000; //t0cs: hfintosc, t0async: 1 no syncronized; t0ckps: 0000=prescaler 1:1
    T0CON1 = (T0CON1 | prescaler);
    TMR0H = (uint8_t)(TimerValue>>8);
    TMR0L = (uint8_t)(TimerValue & 0xff);
    T0CON0 = T0CON0 | (1<<7);//habilitar timer0
    
}
void Timer0_16Bit_Interrupt_init(uint8_t postscaler, uint8_t prescaler, uint16_t TimerValue ){
    T0CON0 = 0;//T0en disabled, t016bit: 8bit mode, postscaler 1:1
    T0CON0 = T0CON0 |(1<<6);//t016bit: 16bit mode
    T0CON0 = (T0CON0 | postscaler);
    T0CON1 = 0b01110000; //t0cs: hfintosc, t0async: 1 no syncronized; t0ckps: 0000=prescaler 1:1
    T0CON1 = (T0CON1 | prescaler);
    TMR0H = (uint8_t)(TimerValue>>8);
    TMR0L = (uint8_t)(TimerValue & 0xff);
    // limpiamos bandera antes de habilitar interrupcion 
    PIR0bits.TMR0IF = 0;

    // habilitamos tinterrupcion tmr0.
    PIE0bits.TMR0IE = 1;
    T0CON0 = T0CON0 | (1<<7);//habilitar timer0
}
void Timer0_16Bit_set(uint16_t time){
    TMR0H = (uint8_t)(time>>8);
    TMR0L = (uint8_t)(time & 0xff);
}
uint16_t Timer0_16Bit_get(){
    return( ((uint16_t)TMR0H<<8) | TMR0L );
}
