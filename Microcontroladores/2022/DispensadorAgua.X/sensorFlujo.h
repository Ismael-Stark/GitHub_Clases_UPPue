  
#ifndef XC_HEADER_sensorFlujo
#define	XC_HEADER_sensorFlujo

#include <xc.h>

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 
    
    /* !brief esto es una ayuda para entender que hace la libreria:
     * 
     * Esta funcion inicializa el sensor
     * 
     * no tiene parametros de entrada
     * 
     * no regresa parametros
     */
    void flujo_init();

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

