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
    I2C_start();
    //x = I2C_write((MLX90614_add<<1));
    x = I2C_write(MLX90614_add8bit|0x01);
    I2C_stop();
    return x;
}