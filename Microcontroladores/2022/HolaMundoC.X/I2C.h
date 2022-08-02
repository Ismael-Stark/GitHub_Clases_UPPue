
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

//funciones del MCC portadas a mi lib
#define adres8BitMode 0	/// 1 para usar direccion en modo8bit, 0 para modo 7bit
uint8_t  I2C1_Read1ByteRegister(uint8_t address, uint8_t reg);
uint16_t I2C1_Read2ByteRegister(uint8_t address, uint8_t reg);
void I2C1_Write1ByteRegister(uint8_t address, uint8_t reg, uint8_t data);
void I2C1_Write2ByteRegister(uint8_t address, uint8_t reg, uint16_t data);

void I2C1_WriteNBytes(uint8_t address, uint8_t *data, size_t len);
void I2C1_ReadNBytes(uint8_t address, uint8_t *data, size_t len);
void I2C1_ReadDataBlock(uint8_t address, uint8_t reg, uint8_t *data, size_t len);

#endif	/* I2C_H */