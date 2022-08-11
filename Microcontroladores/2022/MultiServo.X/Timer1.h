
#ifndef XC_Timer1_H
#define	XC_Timer1_H

#include <xc.h>
#include "main.h"

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    void Timer1_init(uint8_t prescaler, uint16_t TimerValue );
    void Timer1_InterruptInit(uint8_t prescaler, uint16_t TimerValue );

    
    uint16_t Timer1_get();
    void Timer1_set(uint16_t TimerValue);

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

