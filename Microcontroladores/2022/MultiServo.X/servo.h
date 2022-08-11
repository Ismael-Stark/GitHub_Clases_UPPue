 
#ifndef XC_servo_H
#define	XC_servo_H

#include <xc.h>
#include "main.h"

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    #define PIN_SERVO1 LATCbits.LATC6

    const uint8_t AJUSTE_FINO_DE_RTCC =  30;//es para que la ultima interrupcion se empiece incompleta
    const uint8_t ticks_PULSO_MINIMO  =  31;
    const uint8_t ticks_PULSO_MEDIO   =  93;
    const uint8_t ticks_PULSO_MAXIMO  = 155;

    bool    flagRTCC   = 0;//A estas 5 RTCC's les llamaremos flagRTCC que solo voy a activar cuando se completen las 5 RTCC's (4 completas y una mas pero incompleta).
    uint8_t contRTCC   = 0;//cuenta las interrupciones 
    bool    flagSERVO1 = 0;//para apagar el pin que controla al servo

    uint8_t tSERVO1    = 93;//variable que uso para mover al servo
    
    uint8_t valTIMER0;
    
    
#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

