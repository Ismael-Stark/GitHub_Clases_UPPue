#include "Timer2.h"

void Timer2_Interrupt_init(uint8_t postscaler, uint8_t prescaler, uint8_t TimerValue ){
    //T2CLKCON = 0b0011; //HFINTOSC (16 MHz) CLOCK SOURCE
    T2CLKCON = 0b0100; //HFINTOSC (16 MHz) CLOCK SOURCE
    T2CON = (prescaler<<4)|(postscaler<<0);
    TMR2 = TimerValue;
    
    PIR4bits.TMR2IF = 0;
    PIE4bits.TMR2IE = 1;
    T2CON = T2CON |(1<<7);
}