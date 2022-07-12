#include "interrupt.h"\

void enable_interrupt(){
    INTCON = 0b10000000;//va a detectar flanco de bajada en boton
    PIE0 = 0b00000001;//
    
    INTPPS =  0x05;//el pin de interrupcion externa ahora es RA5
}

void disable_interrupt(){
    INTCON = 0;
}


//funcion que se ejecuta por default cuando ocurre alguna interrupcion(yo no la declare)
void __interrupt() INTERRUPT_InterruptManager (void)
{
    if (PIR0bits.INTF == 1){
        PIR0bits.INTF = 0;
        counts++;
        
    //}else if(){
        
    }else{
        //interrupcion no controlada o interrup que no declare
    }
    
}