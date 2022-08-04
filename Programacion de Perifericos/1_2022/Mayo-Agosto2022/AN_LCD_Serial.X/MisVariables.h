 
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.  



#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    char serialRX;
    uint8_t bufferRx[10], contadorRx=0;
    uint8_t contador = 0, buffer[60];
    uint16_t lecturaADC = 0;

float mV = (3.3/4095);
float V, temperatura;

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

