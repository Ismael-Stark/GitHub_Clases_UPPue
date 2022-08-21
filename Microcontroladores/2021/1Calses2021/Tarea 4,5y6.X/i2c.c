#include "i2c.h"

void I2C_init(){
    SSP1STAT = 0b10000000;      //Velocidad standar, especifiacion I2C, pag 493
    //SSP1STAT = 0b00000000;      //Velocidad high, especifiacion I2C, pag 493
    SSP1CON1 = 0b00101000;      //I2C PIC habilitado en modo maestro velocidad=Fosc/(4*SSPADD+1)
	SSP1CON3 = 0x00;
    SSP1ADD = ((_XTAL_FREQ/(4UL*BAUDRATE))-1);
    //SSP1ADD = 79;
    
    SSP1CLKPPS = 0x14;   //RC4->MSSP1:SCL1;    
    RC3PPS = 0x15;   //RC3->MSSP1:SDA1;    
    RC4PPS = 0x14;   //RC4->MSSP1:SCL1;    
    SSP1DATPPS = 0x13;   //RC3->MSSP1:SDA1; 
}

void I2C_start(void){   
    SSP1CON2bits.SEN = 1;           //inicia la comunicación i2c
    while(SSP1CON2bits.SEN == 1);
}

void I2C_restart(void){    
    SSP1CON2bits.RSEN = 1;          //reinicia la comunicación i2c
    while(SSP1CON2bits.RSEN == 1); 
}

void I2C_stop(void){    
    SSP1CON2bits.PEN = 1;           //detener la comunicación i2c
    while(SSP1CON2bits.PEN == 1);
}

uint8_t I2C_read(void){
    PIR3bits.SSP1IF = 0;         	//clear SSP interrupt bit
    SSP1CON2bits.RCEN = 1;       	//set the receive enable bit to initiate a read of 8 bits from the serial eeprom
    while(PIR3bits.SSP1IF == 0); 	//Wait for interrupt flag to go high indicating transmission is complete  
    return SSP1BUF;                 //Data from eeprom is now in the SSPBUF so return that value
}

void I2C_ack(void){
    PIR3bits.SSP1IF = 0;            //clear SSP interrupt bit
    SSP1CON2bits.ACKDT = 0;         //clear the Acknowledge Data Bit - this means we are sending an Acknowledge or 'ACK'
    SSP1CON2bits.ACKEN = 1;         //set the ACK enable bit to initiate transmission of the ACK bit to the serial eeprom
    while(PIR3bits.SSP1IF == 0);    //Wait for interrupt flag to go high indicating transmission is complete
}

void I2C_nack(void){
    PIR3bits.SSP1IF = 0;            //clear SSP interrupt bit
    SSP1CON2bits.ACKDT = 1;         //set the Acknowledge Data Bit- this means we are sending a No-Ack or 'NAK'
    SSP1CON2bits.ACKEN = 1;         //set the ACK enable bit to initiate transmission of the ACK bit to the serial eeprom
    while(PIR3bits.SSP1IF == 0);    // Wait for interrupt flag to go high indicating transmission is complete
}

void I2C_write(uint8_t I2C_data){    
    PIR3bits.SSP1IF = 0;            
    SSP1BUF = I2C_data;             // Envia data por I2C
    while(PIR3bits.SSP1IF == 0);	// Wait for interrupt flag to go high indicating transmission is complete
}
