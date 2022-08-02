
#include <stdlib.h>

#include "I2C.h"

void i2c_init(void)
{
    TRISCbits.TRISC3 = 1;
    TRISCbits.TRISC4 = 1;
    ANSELCbits.ANSC3 = 0;
    ANSELCbits.ANSC4 = 0;
    SSP1CLKPPS = 0x14;      //RC4->MSSP1:SCL1;    
    RC3PPS = 0x15;          //RC3->MSSP1:SDA1;    
    RC4PPS = 0x14;          //RC4->MSSP1:SCL1;    
    SSP1DATPPS = 0x13;      //RC3->MSSP1:SDA1;    
    
    SSP1STAT = 0b10000000;      //Velocidad standar, especifiacion I2C
	SSP1CON1 = 0b00101000;      //I2C PIC habilitado en modo maestro velocidad=Fosc/(4*SSPADD+1)
	SSP1CON3 = 0x00;
	SSP1ADD = VALOR;
}

void i2c_start(void)
{   
    SSP1CON2bits.SEN = 1;           //inicia la comunicación i2c
    while(SSP1CON2bits.SEN == 1);
}

void i2c_restart(void)
{    
    SSP1CON2bits.RSEN = 1;          //reinicia la comunicación i2c
    while(SSP1CON2bits.RSEN == 1); 
}

void i2c_stop(void)
{    
    SSP1CON2bits.PEN = 1;           //detener la comunicación i2c
    while(SSP1CON2bits.PEN == 1);
}

/*uint8_t i2c_read(void)
{
    PIR3bits.SSP1IF = 0;         	//limpiar SSP interrupt bit
    SSP1CON2bits.RCEN = 1;       	//set the receive enable bit to initiate a read of 8 bits from the serial eeprom
    while(PIR3bits.SSP1IF == 0); 	//espera por la flag de interrupcion=1 indicando la transmicion completa
    return SSP1BUF;
}*/
uint8_t i2c_read(bool ack)
{
    PIR3bits.SSP1IF = 0;         	//limpiar SSP interrupt bit
    SSP1CON2bits.RCEN = 1;       	//set the receive enable bit to initiate a read of 8 bits from the serial eeprom
    while(PIR3bits.SSP1IF == 0); 	//espera por la flag de interrupcion=1 indicando la transmicion completa
    if(ack){
        i2c_ack();
    }else{
        i2c_nack();
    }
    return SSP1BUF;
}

void i2c_ack(void)
{
    PIR3bits.SSP1IF = 0;            //limpiar SSP interrupt bit
    SSP1CON2bits.ACKDT = 0;         //limpia el Acknowledge Data Bit - significa que envias el Acknowledge or 'ACK'
    SSP1CON2bits.ACKEN = 1;         //set the ACK enable bit para iniciar transmicion del ACK bit 
    while(PIR3bits.SSP1IF == 0);    //espera por la flag de interrupcion=1 indicando la transmicion completa
}

void i2c_nack(void)
{
    PIR3bits.SSP1IF = 0;            //limpiar SSP interrupt bit
    SSP1CON2bits.ACKDT = 1;         //pon en 1 el Acknowledge Data Bit - significa que envias el  No-Ack or 'NAK'
    SSP1CON2bits.ACKEN = 1;         //set the ACK enable bit para iniciar transmicion del ACK bit 
    while(PIR3bits.SSP1IF == 0);    //espera por la flag de interrupcion=1 indicando la transmicion completa
}

bool i2c_write(uint8_t I2C_data)
{    
    PIR3bits.SSP1IF = 0;            
    SSP1BUF = I2C_data;             // Envia data por I2C
    while(PIR3bits.SSP1IF == 0);	// espera por la flag de interrupcion=1 indicando la transmicion completa
    if(SSP1CON2bits.ACKSTAT==0)
        return 1;           //Hubo respuesta ack
    else
        return 0;           //no hubo respuesta no ack
}

/*
 *
 *
 	 	 	 	 	 funciones del MCC portadas para STM XD
 *
 *
 */

uint8_t  I2C1_Read1ByteRegister(uint8_t address, uint8_t reg){
    uint8_t data = 0;
    i2c_start();                 
    i2c_write(address<< 1); //write
    i2c_write(reg);          
    i2c_restart();         
    i2c_write((address << 1)|0x01); //read
    data = i2c_read(0);
    i2c_stop();
	return data;

}

uint16_t I2C1_Read2ByteRegister(uint8_t address, uint8_t reg){
    uint8_t data[2];
    i2c_start();                 
    i2c_write(address); //write
    i2c_write(reg);          
    i2c_restart();         
    i2c_write((address << 1)|0x01); //read
    data[0] = i2c_read(0);
    data[1] = i2c_read(0);
    i2c_stop();
	return ( ((uint16_t)data[1]<<8) | data[0] );
	
}

void I2C1_Write1ByteRegister(uint8_t address, uint8_t reg, uint8_t data){
    i2c_start();
    i2c_write(address<<1);
    i2c_write(reg);
    i2c_write(data);
    i2c_stop();
}

void I2C1_Write2ByteRegister(uint8_t address, uint8_t reg, uint16_t data){ }
void I2C1_WriteNBytes(uint8_t address, uint8_t *data, size_t len){ }
void I2C1_ReadNBytes(uint8_t address, uint8_t *data, size_t len){ }

void I2C1_ReadDataBlock(uint8_t address, uint8_t reg, uint8_t *data, size_t len){
    i2c_start();                 
    i2c_write(address<< 1); //write
    i2c_write(reg);          
    i2c_restart();         
    i2c_write((address << 1)|0x01); //read
    for(uint8_t i=0;i<len;i++){
        *((int8_t*)(&data)+i) = i2c_read(0);;
    }
    i2c_stop();
}



