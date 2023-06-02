#include "Config.h"


void main(void) {
    init_osc();
    
    LATA = 0;   //LIMPO LATA
    PORTA = 0;  //LIMPIO PORTA
    //TRISA = 0b00001000
    TRISA |= (1<<3);    //SOLO PIN A3 COMO ENTRADA
    WPUA |= (1<<3);     //SOLO SE ACTIVA PULL UP DEL PIN A3
    ANSELA = 0;     //TODO E/S DIGITAL
    
    LATF = 0;   //LIMPIO LATA
    PORTF = 0;  //LIMPIO PORTA
    //TRISF = 0b00000000;
    TRISF &= ~(1<<3 | 1<<2);//PIN RF2 Y RF3 COMO SALIDAS
    ANSELF = 0;     //TODO PUERTO COMO E/SALIDA DIGITAL
    
    LATF |= (1<<2) ;  //ENCIENDO SALIDA
    LATF |= (1<<3) ;  //Apago LED tarjeta, recordar que led funciona con logica negada
    
    
    while(1){
        /*if ( ((PORTA>>3) & 0x01) ==0  ){
            LATF = LATF & ~(1<<3);
        }else{
            LATF = LATF | (1<<3);
        }*/
        
        
        
        
        
        
    }
    
    
    

}





    
    /*
    LATAbits.LATA3 = 0;// lat es para mostrar algo en la salida
    PORTAbits.RA3 = 0;  //port es para leer entradas
    TRISAbits.TRISA3 = 1;//en tris 1 entrada, 0 Salida
    WPUAbits.WPUA3 = 1;// habilitar resitencia pullup
    ANSELA = 0;
    
    TRISFbits.TRISF3 = 0; // salida
    ANSELFbits.ANSELF3 = 0; // Digital
    WPUFbits.WPUF3 = 0; // deshabilitado pull up
    INLVLFbits.INLVLF3 = 0; // TTL
    //SLRCONFbits.SLRF3 = 1; // Limitado
    //ODCONFbits.ODCF3 = 0; // Push Pull
    */
     


/*if ( PORTAbits.RA3 == 0 ){
            LATFbits.LATF3 = 1;
        }else{
            LATFbits.LATF3 = 0;
        }*/


/*LATF = LATF & ~(1<<3);
        __delay_ms(500);
        LATF = LATF | (1<<3);
        __delay_ms(500);*/