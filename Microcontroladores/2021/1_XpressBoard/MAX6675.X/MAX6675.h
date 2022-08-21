
#ifndef MAX6675
#define	MAX6675
#include <xc.h> 
#include "mcc_generated_files/mcc.h"

//TC_DATA
//TC_CS
//TC_CLK
#define TC_DATAP     PORTBbits.RB0
#define TC_CSL       LATBbits.LATB1
#define TC_CLKL      LATBbits.LATB2

#define TC_DATAT    TRISBbits.TRISB0
#define TC_CST      TRISBbits.TRISB1
#define TC_CLKT     TRISBbits.TRISB2

#define TC_DATAA    ANSELBbits.ANSB0 = 0
#define TC_CSA      ANSELBbits.ANSB1 = 0
#define TC_CLKA     ANSELBbits.ANSB2 = 0

//VARIABLES GLOBALES
bool MAX66_error; 

//FUNCIONES
void MAX66_init();
uint16_t read_Termopar(void);
float MAX66_readC(void);
float MAX66_readF(void);
#endif	/* XC_HEADER_TEMPLATE_H */

