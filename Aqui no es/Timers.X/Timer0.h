
#ifndef XC_Timer0_H
#define	XC_Timer0_H

#include <xc.h> 
#include "main.h"

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */
    typedef  enum{
        PostDiv1 = 0,
        PostDiv2,
        PostDiv3,
        PostDiv4,
        PostDiv5,
        PostDiv6,
        PostDiv7,
        PostDiv8,
        PostDiv9,
        PostDiv10,
        PostDiv11,
        PostDiv12,
        PostDiv13,
        PostDiv14,
        PostDiv15,
        PostDiv16
        
    }Postscaler_t;
    
    typedef enum{
        PrescDiv1 = 0,
        PrescDiv2,
        PrescDiv4,
        PrescDiv8,
        PrescDiv16,
        PrescDiv32,
        PrescDiv64,
        PrescDiv128,
        PrescDiv256,
        PrescDiv512,
        PrescDiv1024,
        PrescDiv2048,
        PrescDiv4096,
        PrescDiv8192,
        PrescDiv16384,
        PrescDiv32768,
    }Prescaler_t;

    void Timer0_8Bit_init(uint8_t postscaler, uint8_t prescaler, uint8_t TimerValue );
    void Timer0_16Bit_init(uint8_t postscaler, uint8_t prescaler, uint16_t TimerValue );
    
    void Timer0_8Bit_Interrupt_init(uint8_t postscaler, uint8_t prescaler, uint8_t TimerValue );
    void Timer0_16Bit_Interrupt_init(uint8_t postscaler, uint8_t prescaler, uint16_t TimerValue );
    
    void Timer0_8Bit_set(uint8_t time);
    void Timer0_16Bit_set(uint16_t time);
    
    uint8_t Timer0_8Bit_get();
    uint16_t Timer0_16Bit_get();
    
#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

