#include "MAX6675.h"


//!#define TC_DATA   PIN_A0 
//!#define TC_CS     PIN_A1 
//!#define TC_CLK    PIN_A2 

void MAX66_init(void){
    //CONFIGRAR E/S;
    TC_DATAT = 1;
    TC_CST  = 0;
    TC_CLKT = 0;
    //TODO E/S DIGITAL
    TC_DATAA;
    TC_CSA;
    TC_CLKA;
    
    //CONFIGURACION DE INICIO
    TC_DATAP = 0;
    TC_CLKL = 0;
    TC_CSL  = 1;
}

uint16_t read_Termopar(void){
    
    uint16_t data = 0;
    TC_CSL  = 0;
    __delay_us(1);
    for (uint8_t i=0;i<16;i++){
        
        if(TC_DATAP){
            data |= 0x01;   //shift_left(&data,2,input(TC_DATA));
        }
        data <<= 1;
        TC_CLKL = 1;
        //__delay_us(10);
        TC_CLKL = 0;
        //__delay_us(10);
        
        //shift_left(&data,2,input(TC_DATA)); 
    }
    MAX66_error = (data>>2) & 0x01;//bit_test(data,2);
    TC_CSL  = 1;
    return((data>>4));
    return(data);
} 

float MAX66_readC(void){
   uint16_t x;
   MAX66_init();
   __delay_us(50);
   x = read_Termopar();
//!   x >>= 3;   
   return((float)x/4.0);
   //return (float)x*0.25;
}
float MAX66_readF(void){
   uint16_t x;
   MAX66_init();
   __delay_us(50);
   x = read_Termopar();
//!   x=(0x0FFF & (x>>4)); 
//!   x >>= 3;   
   return(  (((float)x/4.0)*(9/5))+32   );
}