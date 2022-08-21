/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

#ifndef XC_ds1307yo
#define	XC_ds1307yo

#include <xc.h> // include processor files - each processor file is guarded.
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"

//#define DS1307add 0b11010000    // SELECCIONA RTC CON  ORDEN WR
  #define DS1307add 0b01101000    // SELECCIONA RTC sin orden
//I2C1_Read1ByteRegister(i2c1_address_t ,  reg);
//void I2C1_Write1ByteRegister(i2c1_address_t ,  reg,  data);
uint8_t bin2bcd(uint8_t binary_value);
uint8_t bcd2bin(uint8_t bcd_value);
void ds1307_init(void);
void ds1307_OUT(void);
void ds1307_set_date_time(uint8_t day, uint8_t mth, uint8_t year, uint8_t dow, uint8_t hr, uint8_t min, uint8_t sec);
void ds1307_set_date(uint8_t day, uint8_t mth, uint8_t year);
void ds1307_set_time(uint8_t hr, uint8_t min, uint8_t sec);
void ds1307_get_date(uint8_t *day, uint8_t *mth, uint8_t *year, uint8_t *dow);
void ds1307_get_time(uint8_t *hr, uint8_t *min, uint8_t *sec);

#endif	/* XC_HEADER_TEMPLATE_H */

