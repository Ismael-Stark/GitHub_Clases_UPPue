#include "Timer1.h"\

void Timer1_init(uint8_t prescaler, uint16_t TimerValue ){
    T1CON = 0;
    T1CON = T1CON |(prescaler<<4);//
    T1CON = T1CON |(1<<1);//habilito la lectura de los 16bits
    T1CLK = 5; //fuente de reloj 500Khz
    
    TMR1H =  ((uint16_t)TimerValue>>8); 
    TMR1L = TimerValue&0XFF;
       
    T1CON = T1CON | 1;//habilito timer 1       
}
void Timer1_InterruptInit(uint8_t prescaler, uint16_t TimerValue );

    
//void Timer1_get();
void Timer1_set(uint16_t TimerValue){
    TMR1H =  ((uint16_t)TimerValue>>8); 
    TMR1L = TimerValue&0XFF;
}
