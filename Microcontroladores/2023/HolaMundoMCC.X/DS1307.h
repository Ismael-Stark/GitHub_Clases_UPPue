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
/// ds1307_set_date(day,mth,year,dow)                    Set the date        ///
///                                                                          ///
/// ds1307_set_time(hour,min,sec)                        Set the time        ///
///                                                                          ///
/// ds1307_get_date(day,mth,year,dow)                    Get the date        ///
///                                                                          ///
/// ds1307_get_time(hr,min,sec)                          Get the time        ///
///                                                                          ///
/// Adaptada a xc8 usando MCC en 2023 by ISR PicTrance                       ///
///                                                                          ///
///                                                                          ///
///                                                                          ///
////////////////////////////////////////////////////////////////////////////////

#ifndef DS1307_H
#define	DS1307_H

#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
#include <stdint.h> //descomentar en caso de ser necesario
#include <xc.h>
// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code.
    #define ds1307_address 0b1101000
    uint8_t bin2bcd(uint8_t binary_value);
    uint8_t bcd2bin(uint8_t bcd_value);
    
    void ds1307_init(void);
    void ds1307_set_date_time(uint8_t day,uint8_t mth,uint8_t year,uint8_t dow,uint8_t hr,uint8_t min,uint8_t sec);
    //ds1307_set_date(day,mth,year,dow) 
    void ds1307_set_date(uint8_t day,uint8_t mth,uint8_t year,uint8_t dow);
    //ds1307_set_time(hour,min,sec)
    void ds1307_set_time(uint8_t hr,uint8_t min,uint8_t sec);
    
    void ds1307_get_date(uint8_t *ptrDay,uint8_t *ptrMth,uint8_t *ptrYear,uint8_t *ptrDow);
    void ds1307_get_time(uint8_t *ptrHr,uint8_t *ptrMin,uint8_t *ptrSec);
    void ds1307_OUT(void);
#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

