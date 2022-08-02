
#ifndef I2C_H
#define I2C_H

#include <xc.h> // include processor files - each processor file is guarded.
#include "main.h"

#define BAUDRATE 100000UL
#define VALOR ((_XTAL_FREQ/(4UL*BAUDRATE))-1)

void i2c_init();
void i2c_start(void);
void i2c_restart(void);
void i2c_stop(void);
//uint8_t I2C_read(void);
uint8_t i2c_read(bool ack);//1 envia akc, 0 envia nack
void i2c_ack(void);
void i2c_nack(void);
bool i2c_write(uint8_t I2C_data);

#endif	/* I2C_H */