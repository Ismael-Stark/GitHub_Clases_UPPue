/*
 * File:   DS18b20.c
 * Author: el_pa
 *
 * Created on 26 de junio de 2021, 11:32 AM
 */

#include "mcc_generated_files/mcc.h"
#include <xc.h>
#include <stdio.h>
#include "DS18b20.h"
#include <stdint.h>

void onewire_reset() {
    DS18B20_PIN_NoAnalog;
    DS18B20_LPIN = 0;       // send reset pulse to the DS18B20 sensor
    DS18B20_PIN_Dir = 0;    // configure DS18B20_PIN pin as output
    __delay_us(500); 
    DS18B20_PIN_Dir = 1;    // float the bus high 
    __delay_us(500);          // wait-out remaining initialisation window 
    DS18B20_PIN_Dir = 1; 
    DS18B20_PIN_PullUp;
}



void onewire_write(uint8_t data) { 
    uint8_t count;
    //DS18B20_PIN_Dir = 0;    // configure DS18B20_PIN pin as output
    for(count = 0; count <8; count++) {
        
        DS18B20_LPIN = 0;
        DS18B20_PIN_Dir = 0;
        __delay_us(2);                // pull 1-wire low to initiate write time-slot.
        //DS18B20_LPIN = (data>>count)&0x01;
        
        //OWWriteBit(data & 0x01);
        if (data & 0x01){
            // Escribe '1' bit
            DS18B20_LPIN = 0;
            __delay_us(6);  // Espera 6uS
            DS18B20_PIN_Dir = 1;
            __delay_us(60); // Espera 60usec para que temine
        }
        else
        {
            // Escribe '0' bit
            DS18B20_LPIN = 0;
            __delay_us(60);  // Espera 6uS
            DS18B20_PIN_Dir = 1;
        }
         
		data >>= 1;
        
        //output_bit(ONE_WIRE_PIN, shift_right(&data, 1, 0)); // set output bit on 1-wire 
//        __delay_us(60);               // wait until end of write slot. 
//        DS18B20_PIN_Dir = 1; // set 1-wire high again, 
        __delay_us(2);                // for more than 1us minimum. 
    } 
} 

uint8_t onewire_read() { 
    uint8_t count, data; 
    bool in = 0;
    for(count = 0; count < 8; count++) { 
        DS18B20_LPIN = 0;
        DS18B20_PIN_Dir = 0;
        __delay_us(2);              // pull 1-wire low to initiate read time-slot. 
        DS18B20_PIN_Dir = 1;        // now let 1-wire float high, 
        __delay_us(8);              // let device state stabilise,
        //data = (data>>count) DS18B20_PIN
        //data |= (DS18B20_PIN&0X01) << count;
        //data = (data << 1) | (DS18B20_PIN&0X01);
        data >>=1;
        in = DS18B20_PIN;
        if(in){
            data |= 0x80;
        }
        //LATCbits.LATC7 = in;
        //shift_right(&data, 1, input(ONE_WIRE_PIN)); // and load result. 
        __delay_us(120);              // wait until end of read slot. 
    } 
    return data; 
} 

float ds18b20_read() { 
    uint8_t busy=0, temp1, temp2; 
    uint16_t temp3; 
    float result;  
    onewire_reset(); 
    onewire_write(0xCC);            //Skip ROM, address all devices 0b11001100, 204
    onewire_write(0x44);            //Start temperature conversion  0b01000100, 68
    while(busy == 0){                //Wait while busy (bus is low)
        busy = onewire_read();
    }
    onewire_reset(); 
    onewire_write(0xCC);            //Skip ROM, address all devices 0b11001100
    onewire_write(0xBE);            //Read scratchpad               0b10111110, 190
    temp1 = onewire_read(); 
    temp2 = onewire_read(); 
    temp3 = ((uint8_t)temp2<<8)| temp1;  
    result = (float) temp3 / 16.0;    //Calculation for DS18B20 
    //delay_ms(200); 
    //return(temp3>>4);  
    return(result);  
}

void ds18b20_readd(int8_t *e,uint8_t *d){ 
    uint8_t busy=0, temp1, temp2; 
    uint16_t temp3; 
    //float result;  
    onewire_reset(); 
    onewire_write(0xCC);            //Skip ROM, address all devices 0b11001100, 204
    onewire_write(0x44);            //Start temperature conversion  0b01000100, 68
    while(busy == 0){                //Wait while busy (bus is low)
        busy = onewire_read();
    }
    onewire_reset(); 
    onewire_write(0xCC);            //Skip ROM, address all devices 0b11001100
    onewire_write(0xBE);            //Read scratchpad               0b10111110, 190
    temp1 = onewire_read(); 
    temp2 = onewire_read(); 
    temp3 = ((uint8_t)temp2<<8)| temp1;  
    //result = (float) temp3 / 16.0;    //Calculation for DS18B20
    *e = temp3>>4;
    *d = ((temp1&0x0f)*0.0625)*100;
}


/////////////////////////otro codigo
/*
uint8_t ds18b20_start(void){
    DS18B20_PIN_Dir = 0;  // configure DS18B20_PIN pin as output
    DS18B20_LPIN = 0;      // send reset pulse to the DS18B20 sensor
    __delay_us(500);      // wait 500 us

    DS18B20_PIN_Dir = 1;  // configure DS18B20_PIN pin as input
    __delay_us(500);      // wait 100 us to read the DS18B20 sensor response

    if (!DS18B20_PIN)
    {
      __delay_us(400);    // wait 400 us
      return 1;           // DS18B20 sensor is present
    }
    return 0;   // connection error
}
void ds18b20_write_bit(uint8_t value){
  DS18B20_PIN_Dir = 0;  // configure DS18B20_PIN pin as output
  DS18B20_LPIN = 0;
  
  __delay_us(2);        // wait 2 us
 
  //DS18B20_PIN = (__bit)value;
  DS18B20_LPIN = value;
  __delay_us(80);       // wait 80 us
 
  DS18B20_PIN_Dir = 1;  // configure DS18B20_PIN pin as input
  __delay_us(2);        // wait 2 us
}
 
void ds18b20_write_byte(uint8_t value){
  for(uint8_t i = 0; i < 8; i++)
    ds18b20_write_bit(value >> i);
}
 
uint8_t ds18b20_read_bit(void){
  //static __bit value;
  uint8_t   value = 0;
  
  DS18B20_PIN_Dir = 0;  // configure DS18B20_PIN pin as output
  DS18B20_LPIN = 0;
  __delay_us(2);
 
  DS18B20_PIN_Dir = 1;  // configure DS18B20_PIN pin as input
  __delay_us(5);        // wait 5 us
 
  value = DS18B20_PIN;  // read and store DS18B20 state
  __delay_us(100);      // wait 100 us
 
  return value;
}
 
uint8_t ds18b20_read_byte(void){
  uint8_t value = 0;
 
  for(uint8_t i = 0; i < 8; i++)
    value |= (ds18b20_read_bit()&0X01) << i;
 
  return value;
}

uint8_t ds18b20_leer(uint16_t *raw_temp_value){
//uint16_t ds18b20_leer(){
//    uint16_t valor;
    if (!ds18b20_start())   // send start pulse
        return 0;             // return 0 if error
 
    ds18b20_write_byte(0xCC);   // send skip ROM command
    ds18b20_write_byte(0x44);   // send start conversion command

    while(ds18b20_read_byte() == 0);  // wait for conversion complete

    if (!ds18b20_start())  // send start pulse
        return 0;            // return 0 if error

    ds18b20_write_byte(0xCC);  // send skip ROM command
    ds18b20_write_byte(0xBE);  // send read command

    //read temperature LSB byte and store it on raw_temp_value LSB byte
    *raw_temp_value  = ds18b20_read_byte();
    // read temperature MSB byte and store it on raw_temp_value MSB byte
    *raw_temp_value |= (uint16_t)(ds18b20_read_byte() << 8);
    return 1;   // OK --> return 1
    
//    // read temperature LSB byte and store it on raw_temp_value LSB byte
//    valor  = ds18b20_read_byte();
//    // read temperature MSB byte and store it on raw_temp_value MSB byte
//    valor |= (uint16_t)(ds18b20_read_byte() << 8);
//    return valor;
//    return 8;
}
*/
