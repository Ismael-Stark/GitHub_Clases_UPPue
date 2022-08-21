
#ifndef i2c
#define	i2c

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>
#include "configuracion.h"
#include "misdefiniciones.h"

#define BAUDRATE 100000UL

void I2C_init();
void I2C_start(void);
void I2C_restart(void);
void I2C_stop(void);
uint8_t I2C_read(void);
void I2C_ack(void);
void I2C_nack(void);
void I2C_write(uint8_t I2C_data);

#endif	/* XC_HEADER_TEMPLATE_H */

