
#ifndef XC_interrupts_H
#define	XC_interrupts_H

#include <xc.h> 

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */
#include "main.h"
#include "misVar.h"

    void enable_Global_interrupt();
    void enable_Peripheral_interrupt();
    void disable_Global_interrupt();
    void disable_Peripheral_interrupt();
    void enable_IntExtInterrupt();
    


#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

