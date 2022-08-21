


////////////////////////////////////////////////////////////////////////////////
///                               DS1307.C                                   ///
///                     Driver for Real Time Clock                           ///
///                                                                          ///
/// ds1307_init() - Enable oscillator without clearing the seconds register -///
///                 used when PIC loses power and DS1307 run from 3V BAT     ///
///               - Disable squarewave output                                ///
///                                                                          ///
/// ds1307_set_date_time(day,mth,year,dow,hour,min,sec)  Set the date/time   ///
///                                                                          ///
/// ds1307_get_date(day,mth,year,dow)               Get the date             ///
///                                                                          ///
/// ds1307_get_time(hr,min,sec)                     Get the time             ///
///                                                                          ///
////////////////////////////////////////////////////////////////////////////////

#include <xc.h> // include processor files - each processor file is guarded.
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
#include "ds1307yo.h"

typedef union{
    char Val;
    struct{
        char F0:1;
        char F1:1;
        char F2:1;
        char F3:1;
        char F4:1;
        char F5:1;
        char F6:1;
        char F7:1;
    };
} char_val, char_bits;


uint8_t bin2bcd(uint8_t binary_value){
  uint8_t temp, retval;
  temp = binary_value;
  retval = 0;

  while(1){
    // Get the tens digit by doing multiple subtraction
    // of 10 from the binary value.
    if(temp >= 10){
      temp -= 10;
      retval += 0x10;
    }else{ // Get the ones digit by adding the remainder.
      retval += temp;
      break;
    }
  }

  return(retval);
}


// Input range - 00 to 99.
uint8_t bcd2bin(uint8_t bcd_value){
  uint8_t temp;
  temp = bcd_value;
  // Shifting upper digit right by 1 is same as multiplying by 8.
  temp >>= 1;
  // Isolate the bits for the upper digit.
  temp &= 0x78;

  // Now return: (Tens * 8) + (Tens * 2) + Ones
  return(temp + (temp >> 2) + (bcd_value & 0x0f));
}

//I2C1_Read1ByteRegister(i2c1_address_t ,  reg);
//void I2C1_Write1ByteRegister(i2c1_address_t ,  reg,  data);
void ds1307_init(void)
{
   uint8_t seconds = 0;
   /*i2c_start();
   i2c_write(0b11010000);      // SELECCIONA RTC CON  ORDEN WR
   i2c_write(0x00);      // REG 0
   i2c_start();
   i2c_write(0xD1);      // RD from RTC
   seconds = bcd2bin(i2c_read(0)); // Read current "seconds" in DS1307
   i2c_stop();*/
   
   seconds = bcd2bin( I2C1_Read1ByteRegister(DS1307add, 0x00) );
   seconds = bin2bcd(seconds & 0x7F);

   __delay_us(10);

   /*i2c_start();
   i2c_write(0xD0);      // WR to RTC
   i2c_write(0x00);      // REG 0
   i2c_write(seconds);     // Start oscillator with current "seconds value
   i2c_stop();*/
   I2C1_Write1ByteRegister(DS1307add, 0x00, seconds);
   
   __delay_us(10);
   
   /*i2c_start();
   i2c_write(0xD0);      // WR to RTC
   i2c_write(0x07);      // Control Register
   i2c_write(0x80);     // Disable squarewave output pin
   //i2c_write(0x10);     // Enable squarewave output pin
   i2c_stop();*/
   
   //I2C1_Write1ByteRegister(DS1307add, 0x07, 0x80);

}

void ds1307_set_date_time(uint8_t day, uint8_t mth, uint8_t year, uint8_t dow, uint8_t hr, uint8_t min, uint8_t sec){
  sec &= 0x7F;
  hr &= 0x3F;

  /*i2c_start();
  i2c_write(0xD0);            // I2C write address
  i2c_write(0x00);            // Start at REG 0 - Seconds
  i2c_write(bin2bcd(sec));      // REG 0
  i2c_write(bin2bcd(min));      // REG 1
  i2c_write(bin2bcd(hr));      // REG 2
  i2c_write(bin2bcd(dow));      // REG 3
  i2c_write(bin2bcd(day));      // REG 4
  i2c_write(bin2bcd(mth));      // REG 5
  i2c_write(bin2bcd(year));      // REG 6
  i2c_stop();*/
  
  //void I2C1_Write1ByteRegister(i2c1_address_t ,  reg,  data);
  I2C1_Write1ByteRegister(DS1307add, 0x00, bin2bcd(sec) );
  I2C1_Write1ByteRegister(DS1307add, 0x01, bin2bcd(min) );
  I2C1_Write1ByteRegister(DS1307add, 0x02, bin2bcd(hr) );
  I2C1_Write1ByteRegister(DS1307add, 0x03, bin2bcd(dow) );
  I2C1_Write1ByteRegister(DS1307add, 0x04, bin2bcd(day) );
  I2C1_Write1ByteRegister(DS1307add, 0x05, bin2bcd(mth) );
  I2C1_Write1ByteRegister(DS1307add, 0x06, bin2bcd(year) );
}

//!void ds1307_set_date_time12hr(BYTE day, BYTE mth, BYTE year, BYTE dow, BYTE hr, BYTE min, BYTE sec){
//!  char_val hrs; 
//!  sec &= 0x7F;
//!  hr &= 0x3F;
//!  hrs = bin2bcd(hr);
//!  hrs.F6 = 1;
//!
//!  i2c_start();
//!  i2c_write(0xD0);              // I2C write address
//!  i2c_write(0x00);              // Start at REG 0 - Seconds
//!  i2c_write(bin2bcd(sec));      // REG 0
//!  i2c_write(bin2bcd(min));      // REG 1
//!  i2c_write(hrs.val);           // REG 2
//!  i2c_write(bin2bcd(dow));      // REG 3
//!  i2c_write(bin2bcd(day));      // REG 4
//!  i2c_write(bin2bcd(mth));      // REG 5
//!  i2c_write(bin2bcd(year));     // REG 6
//!  i2c_stop();
//!}

/*void ds1307_set_date(uint8_t day, uint8_t mth, uint8_t year){
  i2c_start();
  i2c_write(0xD0);              // I2C write address
  i2c_write(0x03);              // Start at REG 0 - Seconds
  i2c_write(bin2bcd(1));      // REG 3
  i2c_write(bin2bcd(day));      // REG 4
  i2c_write(bin2bcd(mth));      // REG 5
  i2c_write(bin2bcd(year));     // REG 6
  i2c_stop();
}

void ds1307_set_time(uint8_t hr, uint8_t min, uint8_t sec){
   sec &= 0x7F;
   hr &= 0x3F;

  i2c_start();
  i2c_write(0xD0);            // I2C write address
  i2c_write(0x00);            // Start at REG 0 - Seconds
  i2c_write(bin2bcd(sec));      // REG 0
  i2c_write(bin2bcd(min));      // REG 1
  i2c_write(bin2bcd(hr));      // REG 2
  i2c_stop();
}*/

//!void ds1307_set_time12hr(BYTE hr, BYTE min, BYTE sec){
//!  char_val hrs; 
//!  sec &= 0x7F;
//!  hr &= 0x3F;
//!  hrs = bin2bcd(hr);
//!  hrs.F6 = 1;
//!
//!  i2c_start();
//!  i2c_write(0xD0);            // I2C write address
//!  i2c_write(0x00);            // Start at REG 0 - Seconds
//!  i2c_write(bin2bcd(sec));      // REG 0
//!  i2c_write(bin2bcd(min));      // REG 1
//!  i2c_write(hrs.val);      // REG 2
//!  i2c_stop();
//!}

void ds1307_get_date(uint8_t *day, uint8_t *mth, uint8_t *year, uint8_t *dow){
  /*i2c_start();
  i2c_write(0xD0);
  i2c_write(0x03);            // Start at REG 3 - Day of week
  i2c_start();
  i2c_write(0xD1);
  dow  = bcd2bin(i2c_read() & 0x7f);   // REG 3
  day  = bcd2bin(i2c_read() & 0x3f);   // REG 4
  mth  = bcd2bin(i2c_read() & 0x1f);   // REG 5
  year = bcd2bin(i2c_read(0));         // REG 6
  i2c_stop();*/
  //I2C1_Read1ByteRegister(i2c1_address_t ,  reg);
  *dow =  bcd2bin( I2C1_Read1ByteRegister(DS1307add ,  0x03) & 0x7f );
  *day =  bcd2bin( I2C1_Read1ByteRegister(DS1307add ,  0x04) & 0x3f );
  *mth =  bcd2bin( I2C1_Read1ByteRegister(DS1307add ,  0x05) & 0x1f );
  *year =  bcd2bin( I2C1_Read1ByteRegister(DS1307add ,  0x06) );
}

void ds1307_get_time(uint8_t *hr, uint8_t *min, uint8_t *sec){
  /*i2c_start();
  i2c_write(0xD0);
  i2c_write(0x00);            // Start at REG 0 - Seconds
  i2c_start();
  i2c_write(0xD1);
  sec = bcd2bin(i2c_read() & 0x7f);
  min = bcd2bin(i2c_read() & 0x7f);
  hr  = bcd2bin(i2c_read(0) & 0x3f);
  i2c_stop();*/
  //I2C1_Read1ByteRegister(i2c1_address_t ,  reg);
  *sec =  bcd2bin( I2C1_Read1ByteRegister(DS1307add ,  0x00) & 0x7f );
  *min =  bcd2bin( I2C1_Read1ByteRegister(DS1307add ,  0x01) & 0x7f );
  *hr  =  bcd2bin( I2C1_Read1ByteRegister(DS1307add ,  0x02) & 0x3f );
    
}