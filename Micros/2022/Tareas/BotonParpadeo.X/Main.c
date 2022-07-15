    
#include <xc.h>
#include <pic16f18855.h>
#include "fuses.h"
#include "main.h"
#include "uart.h"

#define bStart      ((PORTA>>5) & 0x01)
#define bRestart    ((PORTB>>2) & 0x01)
#define Led1ON      LATA = LATA | (1<<0)
#define Led1OFF     LATA = LATA & ~(1<<0)
#define Led2ON      LATA = LATA | (1<<1)
#define Led2OFF     LATA = LATA & ~(1<<1)
#define Led3ON      LATA = LATA | (1<<2)
#define Led3OFF     LATA = LATA & ~(1<<2)
#define Led4ON      LATA = LATA | (1<<3)
#define Led4OFF     LATA = LATA & ~(1<<3)


void port_init();

bool bloqueoFlag = 0;
uint8_t contador = 0;

bool retardoYleerBoton(uint16_t retardo){
    for(uint16_t i = 0; i < retardo; i++){
        __delay_ms(1);
        if(bStart==0){
            while(bStart == 0);
            contador++;
            if(contador == 5){
                return 1;//si conto 5 pusaciones regreso 1, para  bloqueo y terminar secuencia
            }
        }        
    }
    return 0; //si no conto nada regreso 0, y el programa puede seguir funcionando
    
}


void main(void) {
    port_init();
    serial_init(9600);
    
    while(1)
    {
        if( (bStart == 0) && bloqueoFlag == 0){
            for(int i = 0;i<5;i++){
                Led4ON;                
                if(  retardoYleerBoton(250) == 1 ){
                    bloqueoFlag = 1;
                    break;
                }
                
                Led4OFF;                
                if(   retardoYleerBoton(750) ==1  ){
                    bloqueoFlag = 1;
                    break;
                }
            }
        
        }else{
            Led1OFF;
        }
        
        if(bRestart == 0){
            bloqueoFlag = 0;
            contador = 0;
        }
                
    }//end while
    return;
}


void port_init(){
    
    ANSELA = 0;
    LATA=0;
    PORTA =0;
    //TRISA = 0b11110000;
    TRISA = TRISA & ~(1<<0 | 1<<1 | 1<<2 | 1<<3);//A0 - A3 COMO SALIDA
    TRISA = TRISA | (1<<5); //A5 ENTRADA Digital
    ANSELA = 0;
    
    LATB=0;
    PORTB =0;
    TRISB = TRISB | (1<<2);//rb2 entrada digital
    
    ANSELB = 0;
    
}


//codigo funcional 1
/*
 while(1)
    {
        if( (bStart == 0) && bloqueoFlag == 0){
            for(int i = 0;i<5;i++){
                Led1ON;
                if((bStart == 0)){
                    
                    while(bStart == 0);
                    contador++;
                    if(contador == 5){
                        bloqueoFlag = 1;
                        break;
                    }
                }
                __delay_ms(250);
                
                Led1OFF;
                if((bStart == 0)){
                    while(bStart == 0);
                    contador++;
                    if(contador == 5){
                        bloqueoFlag = 1;
                        break;
                    }
                }
                __delay_ms(750);
                
            }
        }else{
            Led1OFF;
        }
        
        if(bRestart == 0){
            bloqueoFlag = 0;
            contador = 0;
        }
                
    }
 
 
 */