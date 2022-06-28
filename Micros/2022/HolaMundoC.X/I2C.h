
#ifndef I2C_H
#define I2C_H

#include "main.h"

#define BAUDRATE 100000UL
#define VALOR ((_XTAL_FREQ/(4UL*BAUDRATE))-1)

void I2C_init();
void I2C_start(void);
void I2C_restart(void);
void I2C_stop(void);
char I2C_read(void);
void I2C_ack(void);
void I2C_nack(void);
void I2C_write(char I2C_data);

#endif	/* I2C_H */