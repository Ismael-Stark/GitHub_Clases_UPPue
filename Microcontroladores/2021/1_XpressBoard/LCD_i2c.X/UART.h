
#ifndef UART_H
#define UART_H

#include "DEVICE_CONFIG.h"

void UART_init(void);
uint8_t UART_read(void);
void UART_write(uint8_t txData);
void UART_write_text(char *uartText);

#endif	/* UART_H */
