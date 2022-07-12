/*
 * File:   EMC1001.c
 * Author: PicTrance
 *
 * Created on July 5, 2022, 1:07 PM
 */

#include "EMC1001.h"



void EMC1001_read(int8_t *TH, uint8_t *TL){
    I2C_start();
    I2C_write(EMC1001);
    I2C_write(0);
    I2C_restart();
    I2C_write(EMC1001|0x01);
    *TH = I2C_read();
    I2C_ack();    
    I2C_stop();
    
    __delay_us(10);
    
    I2C_start();
    I2C_write(EMC1001);
    I2C_write(2);
    I2C_restart();
    I2C_write(EMC1001|0x01);
    *TL = I2C_read();
    I2C_ack();    
    I2C_stop();
    *TL>>=6;
    *TL*=25;    
}