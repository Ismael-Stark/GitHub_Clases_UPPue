/*
 * Interfacing PIC16F887 microcontroller with DS18B20 temperature sensor.
 * C Code for MPLAB XC8 compiler.
 * Internal oscillator used @ 8MHz.
 * This is a free software with NO WARRANTY.
 * https://simple-circuit.com/
*/ 
 
// set configuration words
#pragma config CONFIG1 = 0x2CD4
#pragma config CONFIG2 = 0x0700
 
// DS18B20 data pin is connected to pin RB1
#define DS18B20_PIN      RB1
#define DS18B20_PIN_Dir  TRISB1
 
//LCD module connections
#define LCD_RS       RD0
#define LCD_EN       RD1
#define LCD_D4       RD2
#define LCD_D5       RD3
#define LCD_D6       RD4
#define LCD_D7       RD5
#define LCD_RS_DIR   TRISD0
#define LCD_EN_DIR   TRISD1
#define LCD_D4_DIR   TRISD2
#define LCD_D5_DIR   TRISD3
#define LCD_D6_DIR   TRISD4
#define LCD_D7_DIR   TRISD5
//End LCD module connections
 
 
#include <xc.h>
#define _XTAL_FREQ 8000000
#include <stdint.h>        // include stdint header
#include "LCD_Lib.c"       // include LCD driver source file
 
 
uint16_t raw_temp;
char     temp[] = "000.0000 C";
 
__bit ds18b20_start()
{
  DS18B20_PIN = 0;      // send reset pulse to the DS18B20 sensor
  DS18B20_PIN_Dir = 0;  // configure DS18B20_PIN pin as output
  __delay_us(500);      // wait 500 us
 
  DS18B20_PIN_Dir = 1;  // configure DS18B20_PIN pin as input
  __delay_us(100);      // wait 100 us to read the DS18B20 sensor response
 
  if (!DS18B20_PIN)
  {
    __delay_us(400);    // wait 400 us
    return 1;           // DS18B20 sensor is present
  }
 
  return 0;   // connection error
}
 
void ds18b20_write_bit(uint8_t value)
{
  DS18B20_PIN = 0;
  DS18B20_PIN_Dir = 0;  // configure DS18B20_PIN pin as output
  __delay_us(2);        // wait 2 us
 
  DS18B20_PIN = (__bit)value;
  __delay_us(80);       // wait 80 us
 
  DS18B20_PIN_Dir = 1;  // configure DS18B20_PIN pin as input
  __delay_us(2);        // wait 2 us
}
 
void ds18b20_write_byte(uint8_t value)
{
  for(uint8_t i = 0; i < 8; i++)
    ds18b20_write_bit(value >> i);
}
 
__bit ds18b20_read_bit(void)
{
  static __bit value;
 
  DS18B20_PIN = 0;
  DS18B20_PIN_Dir = 0;  // configure DS18B20_PIN pin as output
  __delay_us(2);
 
  DS18B20_PIN_Dir = 1;  // configure DS18B20_PIN pin as input
  __delay_us(5);        // wait 5 us
 
  value = DS18B20_PIN;  // read and store DS18B20 state
  __delay_us(100);      // wait 100 us
 
  return value;
}
 
uint8_t ds18b20_read_byte(void)
{
  uint8_t value = 0;
 
  for(uint8_t i = 0; i < 8; i++)
    value |= ds18b20_read_bit() << i;
 
  return value;
}
 
__bit ds18b20_read(uint16_t *raw_temp_value)
{
  if (!ds18b20_start())   // send start pulse
    return 0;             // return 0 if error
 
  ds18b20_write_byte(0xCC);   // send skip ROM command
  ds18b20_write_byte(0x44);   // send start conversion command
 
  while(ds18b20_read_byte() == 0);  // wait for conversion complete
 
  if (!ds18b20_start())  // send start pulse
    return 0;            // return 0 if error
 
  ds18b20_write_byte(0xCC);  // send skip ROM command
  ds18b20_write_byte(0xBE);  // send read command
 
  // read temperature LSB byte and store it on raw_temp_value LSB byte
  *raw_temp_value  = ds18b20_read_byte();
  // read temperature MSB byte and store it on raw_temp_value MSB byte
  *raw_temp_value |= (uint16_t)(ds18b20_read_byte() << 8);
 
  return 1;   // OK --> return 1
}
 
/*************************** main function *********************/
void main(void)
{
  OSCCON = 0x70;   // set internal oscillator to 8MHz
  ANSELH = 0;      // configure all PORTB pins as digital
 
  __delay_ms(1000);   // wait 1 second
 
  LCD_Begin();        // initialize LCD module
  LCD_Goto(3,  1);    // move cursor to column 3, row 1
  LCD_Print("Temperature:");
 
  temp[8] = 223;   // put degree symbol ( ° )
 
  while(1)
  {
    if(ds18b20_read(&raw_temp))
    {
      if(raw_temp & 0x8000)  // if the temperature is negative
      {
        temp[0] = '-';             // put minus sign (-)
        raw_temp = (~raw_temp) + 1;  // change temperature value to positive form
      }
 
      else
      {
        if((raw_temp >> 4) >= 100)  // if the temperature >= 100 °C
          temp[0] = '1';            // put 1 of hundreds
        else                        // otherwise
          temp[0] = ' ';            // put space ' '
      }
 
      // put the first two digits ( for tens and ones)
      temp[1] = ( (raw_temp >> 4) / 10 ) % 10 + '0';  // put tens digit
      temp[2] =   (raw_temp >> 4)        % 10 + '0';  // put ones digit
 
      // put the 4 fraction digits (digits after the point)
      // why 625?  because we're working with 12-bit resolution (default resolution)
      temp[4] = ( (raw_temp & 0x0F) * 625) / 1000 + '0';          // put thousands digit
      temp[5] = (((raw_temp & 0x0F) * 625) / 100 ) % 10 + '0';    // put hundreds digit
      temp[6] = (((raw_temp & 0x0F) * 625) / 10 )  % 10 + '0';    // put tens digit
      temp[7] = ( (raw_temp & 0x0F) * 625) % 10 + '0';            // put ones digit
 
      LCD_Goto(4, 2);     // move cursor to column 4 row 2
      LCD_Print(temp);    // print temp
    }
 
    else
    {
      LCD_Goto(4, 2);          // move cursor to column 4 row 2
      LCD_Print("  Error!  ");
    }
 
    __delay_ms(1000);   // wait 1 second
  }
 
}
 
/*************************** end main function ********************************/