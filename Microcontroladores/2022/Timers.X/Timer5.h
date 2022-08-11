 
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> 
#include "main.h"

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */
    typedef enum{
        T5PrescDiv1 = 0,
        T5PrescDiv2,
        T5PrescDiv4,
        T5PrescDiv8
    }T5Prescaler_t;
    
    typedef enum{
        T5TxCKIPPS = 0,
        T5FOSC_4,
        T5FOSC,
        T5HFINTOSC,
        T5LFINTOSC ,
        T5MFINTOSC ,
        T5SOSC ,
        T5CLKR_output_clock,
        T5TMR0_overflow_output ,
        T5TMR1_overflow_output ,
        T5TMR3_overflow_output ,
        T5TMR5_overflow_output ,
        T5LC1_out ,
        T5LC2_out ,
        T5LC3_out ,
        T5LC4_out
    }Timer5_Clock;

    void Timer5_init(uint8_t prescaler, uint16_t TimerValue );
    
    void Timer5_Interrupt_init(uint8_t prescaler, uint16_t TimerValue );
    
    void Timer5_set(uint16_t time);
    
    uint16_t Timer5_get();
    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

