
#ifndef XC_MLX90614_H
#define	XC_MLX90614_H

#include <xc.h> // include processor files - each processor file is guarded.
#include "main.h"
#include "I2C.h"

#define MLX90614_add7bit    0x5A    //0101 1010
#define MLX90614_add8bit    0xB4    //1011 0100

#define POLY 0x07 // # 0x107 = x^8 + x^2 + x^1 +1  (0x07 -> 0x107)


//pag 20, datasheet
// RAM: 000x xxxx RAM Access
#define MLX90614_RAWIR1 0x04
#define MLX90614_RAWIR2 0x05
#define MLX90614_TAmb   0x06
#define MLX90614_TOBJ1  0x07
#define MLX90614_TOBJ2  0x08
// EEPROM: 001x xxxx ej: 0010 0100 = 0x24
#define MLX90614_TOMAX  0x20
#define MLX90614_TOMIN  0x21
#define MLX90614_PWMCTRL 0x22
#define MLX90614_TARANGE 0x23
#define MLX90614_EMISS  0x24
#define MLX90614_CONFIG 0x25
#define MLX90614_ADDR   0x2E
#define MLX90614_ID1    0x3C
#define MLX90614_ID2    0x3D
#define MLX90614_ID3    0x3E
#define MLX90614_ID4    0x3F

// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 
    bool MLX90614_init();
    uint16_t MLX90614_ReadReg(uint8_t reg);
    uint16_t MLX90614_ReadTemp(uint8_t Temp_Source);
    
    float MLX90614_readObjectTempC(void);
    float MLX90614_readAmbientTempC(void);
    float MLX90614_readEmissivity(void);
    
    void MLX90614_WriteReg(uint8_t reg, uint16_t val);
    void MLX90614_writeEmissivity(float emissivity);
    
    uint8_t crc8(uint8_t *Buffer, uint8_t Size);//Slow_CRC_Cal8Bits(...)
    //https://community.st.com/s/question/0D50X0000CDmAkpSQF/calculate-crc8
    //https://en.wikipedia.org/wiki/Cyclic_redundancy_check
    
    //https://crccalc.com/ //b4240000   //b42432f3
    
#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

