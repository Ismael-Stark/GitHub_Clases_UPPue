
#include "DEVICE_CONFIG.h"

void SYSTEM_init(void)
{
    OSC_init();
    PIN_MANAGER_init();
    UART_init();
    I2C_init();
}
void OSC_init(void)
{
    OSCCON1bits.NOSC = 0b110;   //OSC INTERNO
    OSCCON1bits.NDIV = 0b0000;  //divisor 0
    OSCFRQbits.HFFRQ = 0b010;   //4Mhz
}

void PIN_MANAGER_init(void)
{
    LATA = 0b00000000;          
    LATB = 0b00000000;          
    LATC = 0b00000000;          

    TRISA = 0b11111110;         
    TRISB = 0b11111111;         
    TRISC = 0b11111111;           

    ANSELA = 0b11111110;        
    ANSELB = 0b11111111;        
    ANSELC = 0b11100111;  
}
