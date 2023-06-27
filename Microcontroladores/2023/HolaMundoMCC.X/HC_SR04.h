#ifndef HC_SR04_H
#define	HC_SR04_H

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
    #define pin_echo        PORTDbits.RD5		//pulso que se recibe del sensor
    #define pin_echo_t      TRISDbits.TRISD5
    #define pin_echo_AN     ANSELDbits.ANSELD7

    #define pin_trigger     LATDbits.LATD6		//pulso que se envia al sensor
    #define pin_trigger_t   TRISDbits.TRISD6
    #define pin_trigger_AN  ANSELDbits.ANSELD6
    
    
    void HC_SR04_init();
    float HC_SR04_cm();
    
#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

