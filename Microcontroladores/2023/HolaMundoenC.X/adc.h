


#ifndef ADC_H
#define	ADC_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include "Config.h"

    void ADC_Init();

    uint16_t ADC_Get_Sample(uint8_t canal);

#endif	/* XC_HEADER_TEMPLATE_H */