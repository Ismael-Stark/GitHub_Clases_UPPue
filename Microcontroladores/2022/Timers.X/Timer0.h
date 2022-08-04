
#ifndef XC_Timer0_H
#define	XC_Timer0_H

#include <xc.h> 
#include "main.h"

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */
    
    typedef enum{
        T0Poscaler_div1 = 0,
        T0Poscaler_div2,
        T0Poscaler_div3,
        T0Poscaler_div4,
        T0Poscaler_div5,
        T0Poscaler_div6,
        
    }T0Poscaler_t;
    
    typedef enum{
        T0Prescaler_div1 = 0,
        T0Prescaler_div2,
        T0Prescaler_div4,
        T0Prescaler_div8,
        T0Prescaler_div16,
        T0Prescaler_div16384 = 14,
        T0Prescaler_div32768
    }T0Prescaler_t;

    void Timer0_8bit_init(uint8_t postscaler, uint8_t prescaler, uint8_t TimerValue );
    void Timer0_16bit_init();
    
    void Timer0_8bit_InterruptInit(uint8_t postscaler, uint8_t prescaler, uint8_t TimerValue );
    void Timer0_16bit_InterruptInit(uint8_t postscaler, uint8_t prescaler, uint16_t TimerValue );
    
    uint8_t Timer0_8bit_get();
    void Timer0_8bit_set(uint8_t TimerValue);
    
    void Timer0_16bit_get();
    void Timer0_16bit_set(uint16_t TimerValue);
    

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

