
#ifndef XC_I2C_H
#define	XC_I2C_H

#include <xc.h>
//#include "..\1_libetriasYO\config.h"
#include "config.h"
#include <stdint.h>

//typedef unsigned short    uint16_t;
//typedef unsigned char     uint8_t;
#define TRIS_SCL TRISBbits.RB1
#define TRIS_SDA TRISBbits.RB0

void I2C_Init(void){
    TRIS_SCL = 1;
    TRIS_SDA = 1;
    SSPSTATbits.SMP = 1; // 100Kbps
    SSPSTATbits.CKE = 0;    
    
    SSPCON1bits.SSPEN = 1; // SDA Y SCL
    SSPCON1bits.SSPM = 0b1000;// Modo Maestro
    SSPCON2 = 0x00;
    
    SSPADD = 49; // 100Kbps 

}

void I2C_Start(void){
    SSPCON2bits.SEN = 1;
    while(SSPCON2bits.SEN == 1);
}

void I2C_Stop(void){
    SSPCON2bits.PEN = 1;
    while(SSPCON2bits.PEN == 1);
}

void I2C_Restart(void){
    SSPCON2bits.RSEN = 1;
    while(SSPCON2bits.RSEN == 1);
}

void I2C_Ack(void){
    PIR1bits.SSPIF = 0;
    SSPCON2bits.ACKDT = 0;//ACK
    SSPCON2bits.ACKEN = 1;//HABILITAR
    while(PIR1bits.SSPIF == 0);
}

void I2C_Nack(void){
    PIR1bits.SSPIF = 0;
    SSPCON2bits.ACKDT = 1;//NACK
    SSPCON2bits.ACKEN = 1;//HABILITAR
    while(PIR1bits.SSPIF == 0);
}

void I2C_WRITEE(char data){
    PIR1bits.SSPIF = 0;
    SSPBUF = data;
    while(PIR1bits.SSPIF == 0);
}

char I2C_READD(void){
    PIR1bits.SSPIF = 0;
    SSPCON2bits.RCEN = 1;
    while(PIR1bits.SSPIF == 0);
    return SSPBUF;
}



#endif	/* XC_HEADER_TEMPLATE_H */

