#include "DS1307.h"


//uint8_t bin2bcd(uint8_t binary_value);
//uint8_t bcd2bin(uint8_t bcd_value);

uint8_t bin2bcd(uint8_t binary_value)
{
  uint8_t temp;
  uint8_t retval;

  temp = binary_value;
  retval = 0;

  while(1)
  {
    // Get the tens digit by doing multiple subtraction
    // of 10 from the binary value.
    if(temp >= 10)
    {
      temp -= 10;
      retval += 0x10;
    }
    else // Get the ones digit by adding the remainder.
    {
      retval += temp;
      break;
    }
  }

  return(retval);
}


// Input range - 00 to 99.
uint8_t bcd2bin(uint8_t bcd_value)
{
  uint8_t temp;

  temp = bcd_value;
  // Shifting upper digit right by 1 is same as multiplying by 8.
  temp >>= 1;
  // Isolate the bits for the upper digit.
  temp &= 0x78;

  // Now return: (Tens * 8) + (Tens * 2) + Ones

  return(temp + (temp >> 2) + (bcd_value & 0x0f));
}


void ds1307_init(void)
{
   uint8_t seconds = 0;
   
   seconds = I2C1_Read1ByteRegister(ds1307_address,0x00);// Read current "seconds" in DS1307
   seconds = bin2bcd(seconds & 0x7F);
   __delay_us(10);
   I2C1_Write1ByteRegister(ds1307_address,0,seconds);// Start oscillator with current "seconds value
   __delay_us(10);
   I2C1_Write1ByteRegister(ds1307_address,0x07,0x80);//Control Register, // Disable squarewave output pin
   //I2C1_Write1ByteRegister(ds1307_address,0x07,0x10);// Enable squarewave output pin
}

void ds1307_OUT(void){
    I2C1_Write1ByteRegister(ds1307_address,0x07,0x10);//Control Register, // Enable squarewave output pin
}

void ds1307_set_date_time(uint8_t day,uint8_t mth,uint8_t year,uint8_t dow,uint8_t hr,uint8_t min,uint8_t sec)
{
    
    sec &= 0x7F;
    hr &= 0x3F;
    I2C1_Write1ByteRegister(ds1307_address,0x00,bin2bcd(sec));// REG 0
    I2C1_Write1ByteRegister(ds1307_address,0x01,bin2bcd(min));// REG 1
    I2C1_Write1ByteRegister(ds1307_address,0x02,bin2bcd(hr));// REG 2
    I2C1_Write1ByteRegister(ds1307_address,0x03,bin2bcd(dow));// REG 3
    I2C1_Write1ByteRegister(ds1307_address,0x04,bin2bcd(day));// REG 4
    I2C1_Write1ByteRegister(ds1307_address,0x05,bin2bcd(mth));// REG 5
    I2C1_Write1ByteRegister(ds1307_address,0x06,bin2bcd(year));// REG 6
    I2C1_Write1ByteRegister(ds1307_address,0x07,0x80);// REG 7 - Disable squarewave output pin
    //I2C1_Write1ByteRegister(ds1307_address,0x07,0x10);     // Enable squarewave output pin

}

void ds1307_set_date(uint8_t day,uint8_t mth,uint8_t year,uint8_t dow)
{
    I2C1_Write1ByteRegister(ds1307_address,0x03,bin2bcd(dow));// REG 3
    I2C1_Write1ByteRegister(ds1307_address,0x04,bin2bcd(day));// REG 4
    I2C1_Write1ByteRegister(ds1307_address,0x05,bin2bcd(mth));// REG 5
    I2C1_Write1ByteRegister(ds1307_address,0x06,bin2bcd(year));// REG 6
    //I2C1_Write1ByteRegister(ds1307_address,0x07,0x80);// REG 7 - Disable squarewave output pin
}

void ds1307_set_time(uint8_t hr,uint8_t min,uint8_t sec)
{    
    sec &= 0x7F;
    hr &= 0x3F;
    I2C1_Write1ByteRegister(ds1307_address,0x00,bin2bcd(sec));// REG 0
    I2C1_Write1ByteRegister(ds1307_address,0x01,bin2bcd(min));// REG 1
    I2C1_Write1ByteRegister(ds1307_address,0x02,bin2bcd(hr));// REG 2

}

void ds1307_get_date(uint8_t *ptrDay,uint8_t *ptrMth,uint8_t *ptrYear,uint8_t *ptrDow)
{
  *ptrDow  = bcd2bin( I2C1_Read1ByteRegister(ds1307_address,0x03) & 0x7f);   // REG 3
  *ptrDay  = bcd2bin( I2C1_Read1ByteRegister(ds1307_address,0x04) & 0x3f);   // REG 4
  *ptrMth  = bcd2bin( I2C1_Read1ByteRegister(ds1307_address,0x05) & 0x1f);   // REG 5
  *ptrYear = bcd2bin( I2C1_Read1ByteRegister(ds1307_address,0x06) );         // REG 6
}

void ds1307_get_time(uint8_t *ptrHr,uint8_t *ptrMin,uint8_t *ptrSec)
{
  *ptrSec = bcd2bin( I2C1_Read1ByteRegister(0b1101000,0x00) & 0x7f);   // REG 0
  //__delay_us(10);
  *ptrMin = bcd2bin( I2C1_Read1ByteRegister(ds1307_address,0x01) & 0x7f);   // REG 3
  //__delay_us(10);
  *ptrHr  = bcd2bin( I2C1_Read1ByteRegister(ds1307_address,0x02) & 0x3f);
}

