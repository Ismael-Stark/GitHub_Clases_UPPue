/*
 * File:   EEPROM_lib.c
 * Author: PicTrance
 *
 * Created on 26 de julio de 2022, 06:54 PM
 */


#include <xc.h>
#include "EEPROM_lib.h"

void EEPROM_WriteByte(uint8_t dir, int8_t data){
    uint8_t GIEBitValue = INTCONbits.GIE;
    
    INTCONbits.GIE = 0;
    
    NVMCON1bits.NVMREGS = 1;
    NVMCON1bits.WREN = 1;
    //NVMADRH = dir;
    //NVMADRL = 0x00;
    NVMADRH = 0x70;
    NVMADRL = (dir) & 0xffu;
    
    NVMDATH = 0;
    NVMDATL = data;
    NVMCON2 = 0X55;
    NVMCON2 = 0XAA;
    NVMCON1bits.WR = 1;
    
    while (NVMCON1bits.WR);
    NVMCON1bits.WREN = 0;
    INTCONbits.GIE = GIEBitValue;//ACTIVAR SOLO SI SE ESTAN USANDO INTERRUPCIONES
}

int8_t EEPROM_ReadByte(uint8_t dir){
    
    NVMCON1bits.NVMREGS = 1;
    
    NVMADRH = 0x70;
    NVMADRL = (dir) & 0xffu;
//    NOP();
  //  NOP();
    NVMCON1bits.RD = 1;
    return (NVMDATL);
}

void EEPROM_Write_int16(uint8_t dir, int16_t data){
    for(uint8_t i=0;i<2;i++){
        EEPROM_WriteByte(dir+i,*((int8_t*)(&data)+i)); 
    }
            
}
int16_t EEPROM_Read_int16(uint8_t dir){
    int16_t data;
    for(uint8_t i=0;i<2;i++){
        *((int8_t*)(&data)+i) = EEPROM_ReadByte(dir+i);
    }
    return (data);
}

void EEPROM_Write_int32(uint8_t dir, int32_t data){
    for(uint8_t i=0;i<2;i++){
        EEPROM_WriteByte(dir+i,*((int8_t*)(&data)+i)); 
    }
}
int32_t EEPROM_Read_int32(uint8_t dir){
    int32_t data;
    for(uint8_t i=0;i<4;i++){
        *((int8_t*)(&data)+i) = EEPROM_ReadByte(dir+i);
    }
    return (data);
}

void EEPROM_Write_float(uint8_t dir, float data){
    for(uint8_t i=0;i<2;i++){
        EEPROM_WriteByte(dir+i,*((int8_t*)(&data)+i)); 
    }
}

float EEPROM_Read_float(uint8_t dir){
    float data;
    for(uint8_t i=0;i<4;i++){
        *((int8_t*)(&data)+i) = EEPROM_ReadByte(dir+i);
    }
    return (data);
}