
#ifndef XC_ADC
#define	XC_ADC

#include <xc.h> // include processor files - each processor file is guarded.
#include "main.h"

void adc_init();
uint16_t adc_read(uint8_t pin);



#endif	/* XC_HEADER_TEMPLATE_H */

