#ifndef EMC1001
#define	EMC1001

#include <xc.h> // include processor files - each processor file is guarded.
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
#define address 0b0111000

void EMC1001_read(uint8_t *temph,uint8_t *templ){
    *temph = I2C1_Read1ByteRegister(address, 0x00);
    *templ = I2C1_Read1ByteRegister(address, 0x02);
    *templ >>= 6;
}

#endif	/* XC_HEADER_TEMPLATE_H */

