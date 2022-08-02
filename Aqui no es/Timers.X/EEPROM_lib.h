

#ifndef XC_EEPROM_lib_H
#define	XC_EEPROM_lib_H

#include <xc.h> 
#include "main.h"


#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */
    
    void EEPROM_WriteByte(uint8_t dir, int8_t data);
    int8_t EEPROM_ReadByte(uint8_t dir);

    void EEPROM_Write_int16(uint8_t dir, int16_t data);
    int16_t EEPROM_Read_int16(uint8_t dir);

    void EEPROM_Write_int32(uint8_t dir, int32_t data);
    int32_t EEPROM_Read_int32(uint8_t dir);

    void EEPROM_Write_float(uint8_t dir, float data);
    float EEPROM_Read_float(uint8_t dir);
    
#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

