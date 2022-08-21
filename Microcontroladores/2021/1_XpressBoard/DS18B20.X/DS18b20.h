 
#ifndef DS18B20
#define	DS18B20
#include <stdint.h>
#include "mcc_generated_files/mcc.h"
#include <xc.h> // include processor files - each processor file is guarded.
#include "misdefiniciones.h"

#define DS18B20_PIN_NoAnalog    ANSELBbits.ANSB1 = 0
#define DS18B20_PIN             PORTBbits.RB1
#define DS18B20_LPIN            LATBbits.LATB1
#define DS18B20_PIN_Dir         TRISBbits.TRISB1
#define DS18B20_PIN_PullUp      WPUBbits.WPUB1 = 1
//#define DS18B20_LPIN        LATBbits.LATB1=0; LATBbits.LATB1=0;

//typedef struct DS18b20{
//struct{
//    float temperatura;
//    uint8_t tempEntero;
//    uint8_t tempDecimal;
//}DS18b20;
void onewire_reset();
void onewire_write(uint8_t data);
uint8_t onewire_read();
float ds18b20_read();
void ds18b20_readd(int8_t *e,uint8_t *d);
//uint8_t ds18b20_start(void);
//void ds18b20_write_bit(uint8_t value);
//void ds18b20_write_byte(uint8_t value);
//uint8_t ds18b20_read_bit(void);
//uint8_t ds18b20_read_byte(void);
//uint8_t ds18b20_leer(uint16_t *raw_temp_value);


#endif	/* XC_HEADER_TEMPLATE_H */

