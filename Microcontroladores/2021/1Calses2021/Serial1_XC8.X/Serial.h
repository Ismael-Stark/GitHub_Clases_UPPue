#ifndef SERIAL
#define	SERIAL

#include <xc.h>
#include <stdint.h>
#include <stdio.h>

#define EUSART_DataReady  (PIR3bits.RCIF)

void serial_init(uint16_t baud);

void serial_TX(uint8_t dato);

uint8_t serial_RX();


#endif	/* XC_HEADER_TEMPLATE_H */

