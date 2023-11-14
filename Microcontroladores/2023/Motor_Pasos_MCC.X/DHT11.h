
#ifndef DHT11_H
#define	DHT11_H

#include <xc.h> // include processor files - each processor file is guarded.
#include "mcc_generated_files/mcc.h"

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
    
    
    #define USE_DHT11 0
    #define USE_DHT22 1
    
    void dht_init(bool DHTaUSAR);
    uint8_t leer_trama_dht();
    uint8_t leer_dht(float *tem,float *hum);
    //uint8_t leer_dht(uint8_t *tem,uint8_t *hum);
#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

