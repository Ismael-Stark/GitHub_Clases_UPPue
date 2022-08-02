/*
 * File:   MLX90614.c
 * Author: PicTrance
 *
 * Created on 4 de julio de 2022, 06:53 PM
 */


#include <xc.h>
#include "MLX90614.h"

bool MLX90614_init(){
    bool x;
    i2c_start();
    x = i2c_write((MLX90614_add7bit<<1));
    //x = i2c_write(MLX90614_add8bit|0x01);
    i2c_stop();
    return x;
}

/*
 For a read
1) Send start
2) Send device address (write bit low).
3) Send command to access register required (command includes register address)
4) Send repeated start.
5) send device address with write bit high.
6) I2C read from then requested register (two reads = 16 bits).
7) Extra read for the PEC.
8) send I2C stop.
*/
uint16_t MLX90614_ReadReg(uint8_t reg){
    uint16_t valReg;
    uint8_t pec;
    i2c_start();                 
    i2c_write(MLX90614_add7bit << 1); //write
    i2c_write(reg);          
    i2c_restart();         
    i2c_write((MLX90614_add7bit << 1)|0x01); //read
    valReg = i2c_read(1);
    valReg = (i2c_read(1) << 8) + valReg;
    pec = i2c_read(1);
    i2c_stop();
    return valReg;
}

uint16_t MLX90614_ReadTemp(uint8_t Temp_Source){
    return (MLX90614_ReadReg(Temp_Source));
}

float MLX90614_readObjectTempC(void){
    return ((MLX90614_ReadReg(MLX90614_TOBJ1)* 0.02) - 273.15);
}
float MLX90614_readAmbientTempC(void){
    return ((MLX90614_ReadReg(MLX90614_TAmb)* 0.02) - 273.15);
}

float MLX90614_readEmissivity(void){
    float reg;
    reg = MLX90614_ReadReg(MLX90614_EMISS);
    return (reg / 65535.0);
}

/*
 For a write
1) Send start
2) Send device address (write bit low).
3) Send command to access register required (command includes
register address)
4) send the bytes to write (again two writes since registers are 16bits).
5) Send I2C stop.
*/
void MLX90614_WriteReg(uint8_t reg, uint16_t val){
    uint8_t buffer[4];
    buffer[0] = MLX90614_add7bit << 1;
    buffer[1] = reg;
    buffer[2] = val & 0xff;
    buffer[3] = val >> 8;
    //uint8_t pec = crc8(buffer, 4);
    uint8_t pec = crc8(4,buffer);
    printf("0x%x\n",pec);

    
    i2c_start();                 
    i2c_write(MLX90614_add7bit << 1);
    i2c_write(reg);          
    i2c_write(val & 0xff);
    i2c_write(val >> 8);
    i2c_write(pec);
    i2c_stop();
    
}

uint8_t crc8(uint8_t *Buffer, uint8_t Size)
// The PEC calculation includes all bits except the START, REPEATED START, STOP,
// ACK, and NACK bits. The PEC is a CRC-8 with polynomial X8+X2+X1+1 = 0x107 = 0x07.
{
    uint8_t i, crc = 0;
    while(Size--){
        crc = crc ^ *Buffer++; // Apply Byte 
        for(i=0; i<8; i++) {// Eight rounds of 1-bit
            if (crc & 0x80)
                crc = (crc << 1) ^ POLY;
            else
                crc = (crc << 1); // Left Shifting
        }
    }
    return(crc);
}


void MLX90614_writeEmissivity(float emissivity){
    uint16_t ereg = (uint16_t)(0xffff * emissivity);
    
    MLX90614_WriteReg(MLX90614_EMISS,0);
    __delay_ms(10);
    printf("0x%x\n",ereg);
    MLX90614_WriteReg(MLX90614_EMISS,ereg);
    __delay_ms(10);
    
}