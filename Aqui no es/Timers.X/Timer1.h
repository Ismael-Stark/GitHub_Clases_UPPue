
#ifndef XC_Timer1_H
#define	XC_Timer1_H

#include <xc.h>
#include "main.h"


#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */
    
    typedef enum{
        T1PrescDiv1 = 0,
        T1PrescDiv2,
        T1PrescDiv4,
        T1PrescDiv8
    }T1Prescaler_t;
    
    typedef enum{
        T1TxCKIPPS = 0,
        T1FOSC_4,
        T1FOSC,
        T1HFINTOSC,
        T1LFINTOSC ,
        T1MFINTOSC ,
        T1SOSC ,
        T1CLKR_output_clock,
        T1TMR0_overflow_output ,
        T1TMR1_overflow_output ,
        T1TMR3_overflow_output ,
        T1TMR5_overflow_output ,
        T1LC1_out ,
        T1LC2_out ,
        T1LC3_out ,
        T1LC4_out
    }Timer1_Clock;

    void Timer1_init(uint8_t prescaler, uint16_t TimerValue );
    
    void Timer1_Interrupt_init(uint8_t prescaler, uint16_t TimerValue );
    
    void Timer1_set(uint16_t time);
    
    uint16_t Timer1_get();
    

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

