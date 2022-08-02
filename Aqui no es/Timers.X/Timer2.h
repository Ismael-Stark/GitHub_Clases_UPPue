 
#ifndef XC_Timer2_H
#define	XC_Timer2_H

#include <xc.h>
#include "main.h"

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */
    
    typedef  enum{
        T2PostDiv1 = 0,
        T2PostDiv2,
        T2PostDiv3,
        T2PostDiv4,
        T2PostDiv5,
        T2PostDiv6,
        T2PostDiv7,
        T2PostDiv8,
        T2PostDiv9,
        T2PostDiv10,
        T2PostDiv11,
        T2PostDiv12,
        T2PostDiv13,
        T2PostDiv14,
        T2PostDiv15,
        T2PostDiv16
        
    }T2Postscaler_t;
    
    typedef enum{
        T2PrescDiv1 = 0,
        T2PrescDiv2,
        T2PrescDiv4,
        T2PrescDiv8,
        T2PrescDiv16,
        T2PrescDiv32,
        T2PrescDiv64,
        T2PrescDiv128
    }T2Prescaler_t;


    void Timer2_init(uint8_t postscaler, uint8_t prescaler, uint8_t TimerValue );
    
    void Timer2_Interrupt_init(uint8_t postscaler, uint8_t prescaler, uint8_t TimerValue );
    
    void Timer2_set(uint8_t time);
    
    uint8_t Timer2_get();

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

