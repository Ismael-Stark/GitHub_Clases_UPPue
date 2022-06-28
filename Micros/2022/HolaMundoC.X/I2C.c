
#include "I2C.h"

void I2C_init(void)
{
    SSP1CLKPPS = 0x14;      //RC4->MSSP1:SCL1;
    RC4PPS = 0x14;          //RC4->MSSP1:SCL1;  
    
    RC3PPS = 0x15;          //RC3->MSSP1:SDA1;  
    SSP1DATPPS = 0x13;      //RC3->MSSP1:SDA1;    
    
    SSP1STAT = 0b10000000;      //Velocidad standar, especifiacion I2C
	SSP1CON1 = 0b00101000;      //I2C PIC habilitado en modo maestro velocidad=Fosc/(4*SSPADD+1)
	SSP1CON3 = 0x00;
	SSP1ADD = VALOR;
}

 void I2C_start(void)
 {   
    SSP1CON2bits.SEN = 1;           //inicia la comunicación i2c
    while(SSP1CON2bits.SEN == 1);
}

void I2C_restart(void)
{    
    SSP1CON2bits.RSEN = 1;          //reinicia la comunicación i2c
    while(SSP1CON2bits.RSEN == 1); 
}

void I2C_stop(void)
{    
    SSP1CON2bits.PEN = 1;           //detener la comunicación i2c
    while(SSP1CON2bits.PEN == 1);
}

char I2C_read(void)
{
    PIR3bits.SSP1IF = 0;         	//limpiar SSP interrupt bit
    SSP1CON2bits.RCEN = 1;       	//set the receive enable bit to initiate a read of 8 bits from the serial eeprom
    while(PIR3bits.SSP1IF == 0); 	//espera por la flag de interrupcion=1 indicando la transmicion completa
    return SSP1BUF;
}

void I2C_ack(void)
{
    PIR3bits.SSP1IF = 0;            //limpiar SSP interrupt bit
    SSP1CON2bits.ACKDT = 0;         //limpia el Acknowledge Data Bit - significa que envias el Acknowledge or 'ACK'
    SSP1CON2bits.ACKEN = 1;         //set the ACK enable bit para iniciar transmicion del ACK bit 
    while(PIR3bits.SSP1IF == 0);    //espera por la flag de interrupcion=1 indicando la transmicion completa
}

void I2C_nack(void)
{
    PIR3bits.SSP1IF = 0;            //limpiar SSP interrupt bit
    SSP1CON2bits.ACKDT = 1;         //pon en 1 el Acknowledge Data Bit - significa que envias el  No-Ack or 'NAK'
    SSP1CON2bits.ACKEN = 1;         //set the ACK enable bit para iniciar transmicion del ACK bit 
    while(PIR3bits.SSP1IF == 0);    //espera por la flag de interrupcion=1 indicando la transmicion completa
}

void I2C_write(char I2C_data)
{    
    PIR3bits.SSP1IF = 0;            
    SSP1BUF = I2C_data;             // Envia data por I2C
    while(PIR3bits.SSP1IF == 0);	// espera por la flag de interrupcion=1 indicando la transmicion completa
}