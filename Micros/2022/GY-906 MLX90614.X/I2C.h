
#ifndef I2C_H
#define I2C_H

#include <xc.h> // include processor files - each processor file is guarded.
#include "main.h"

#define BAUDRATE 100000UL
#define VALOR ((_XTAL_FREQ/(4UL*BAUDRATE))-1)

void I2C_init();
void I2C_start(void);
void I2C_restart(void);
void I2C_stop(void);
uint8_t I2C_read(void);
void I2C_ack(void);
void I2C_nack(void);
bool I2C_write(uint8_t I2C_data);

#endif	/* I2C_H */