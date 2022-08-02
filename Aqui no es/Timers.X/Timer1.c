/*
 * File:   Timer1.c
 * Author: PicTrance
 *
 * Created on 28 de julio de 2022, 06:45 PM
 */

#include "Timer1.h"

void Timer1_init(uint8_t prescaler, uint16_t TimerValue ){
    T1CON = 0b0000010;//rd16=1, timer off
    T1CON = T1CON | (prescaler<<4);
    T1CLK = 0b0101; //clock source MFINTOSC
    TMR1H = (uint8_t)TimerValue>>8;
    TMR1L = (uint8_t)TimerValue & 0xff;
    
    //limpiar bandera primiero y no habilitamos interrupt
    PIR4bits.TMR1IF = 0;
    
    T1CON = T1CON | (1<<0); //habilitar timer1
}

void Timer1_Interrupt_init(uint8_t prescaler, uint16_t TimerValue ){
    T1CON = 0b0000010;//rd16=1, timer off
    T1CON = T1CON | (prescaler<<4);
    T1CLK = 0b0101; //clock source MFINTOSC
    TMR1H = (uint8_t)TimerValue>>8;
    TMR1L = (uint8_t)TimerValue & 0xff;
    
    //limpiar bandera primiero
    PIR4bits.TMR1IF = 0;
    
    //habilitar interrupt
    PIE4bits.TMR1IE = 1;
    
    T1CON = T1CON | (1<<0); //habilitar timer1
}

void Timer1_set(uint16_t time){
    TMR1H = (uint8_t)time>>8;
    TMR1L = (uint8_t)time & 0xff;
    
}
    
uint16_t Timer1_get(){
    return( ((uint16_t)TMR1H<<8) | TMR1L );
}