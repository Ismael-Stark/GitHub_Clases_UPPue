#include "I2C.h"

void I2C_init(void){
    //EN disabled; RSEN disabled; S Cleared by hardware after Start; CSTR Enable clocking; MODE 7-bit address; 
    I2C1CON0 = 0x04;
    //ACKCNT Acknowledge; ACKDT Acknowledge; P Cleared by hardware after sending Stop; RXO No overflow; TXU No underflow; CSD Clock Stretching enabled; 
    I2C1CON1 = 0x80;
    //ACNT disabled; GCEN disabled; FME disabled; ABD disabled; SDAHT 30 ns hold time; BFRET 8 I2C Clock pulses; 
    I2C1CON2 = 0x18;
    //CLK MFINTOSC; 
    I2C1CLK = 0x03;
    //CNTIF Byte count is not zero; ACKTIF Acknowledge sequence not detected; WRIF Data byte not detected; ADRIF Address not detected; PCIF Stop condition not detected; RSCIF Restart condition not detected; SCIF Start condition not detected; 
    I2C1PIR = 0x00;
    //CNTIE disabled; ACKTIE disabled; WRIE disabled; ADRIE disabled; PCIE disabled; RSCIE disabled; SCIE disabled; 
    I2C1PIE = 0x00;
    //BTOIF No bus timeout; BCLIF No bus collision detected; NACKIF No NACK/Error detected; BTOIE disabled; BCLIE disabled; NACKIE disabled; 
    I2C1ERR = 0x00;
    //Count register
    I2C1CNTL = 0x00;
    I2C1CNTH = 0x00;
    //BAUD 0; 
    I2C1BAUD = 0x00;
    
    I2C1SDAPPS = 0x0A;   //RB2->I2C1:SDA1;    
    RB1PPS = 0x37;   //RB1->I2C1:SCL1;    
    RB2PPS = 0x38;   //RB2->I2C1:SDA1;   
    I2C1SCLPPS = 0x09;   //RB1->I2C1:SCL1;
}