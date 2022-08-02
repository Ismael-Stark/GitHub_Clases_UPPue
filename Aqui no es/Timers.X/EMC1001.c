/*
 * File:   EMC1001.c
 * Author: PicTrance
 *
 * Created on July 5, 2022, 1:07 PM
 */

#include "EMC1001.h"



void EMC1001_read(int8_t *TH, uint8_t *TL){
    i2c_start();
    i2c_write(EMC1001);
    i2c_write(0);
    i2c_restart();
    i2c_write(EMC1001|0x01);
    *TH = i2c_read(1);
    //i2c_ack();    
    i2c_stop();
    
    __delay_us(10);
    
    i2c_start();
    i2c_write(EMC1001);
    i2c_write(2);
    i2c_restart();
    i2c_write(EMC1001|0x01);
    *TL = i2c_read(1);
    //i2c_ack();    
    i2c_stop();
    *TL>>=6;
    *TL*=25;    
}