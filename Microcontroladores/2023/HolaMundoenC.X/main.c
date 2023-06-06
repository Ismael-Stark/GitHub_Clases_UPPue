#include "Config.h"
#include "serial.h"

#define led_on() LATF = LATF & ~(1<<3); // mandar un 0 a la salida(encienden led)
#define led_off() LATF = LATF | (1<<3);//mandar un 1 a la salida(apagan led)
#define led_toogle() LATF = LATF ^ (1<<3);

#define led2_off() LATF = LATF & ~(1<<2); // mandar un 0 a la salida(encienden led)
#define led2_on() LATF = LATF | (1<<2);//mandar un 1 a la salida(apagan led)
#define led2_toogle() LATF = LATF ^ (1<<2);

void main(void) {
    init_osc();
    
    //dksajbdsjkabsakjkv
    //dsadnsa
    LATA = 0;   //LIMPO LATA
    PORTA = 0;  //LIMPIO PORTA
    //TRISA = 0b00001000
    TRISA |= (1<<3 | 1<<0);    //SOLO PIN A3 COMO ENTRADA, y pinA0 como entrada
    WPUA |= (1<<3);     //SOLO SE ACTIVA PULL UP DEL PIN A3
    ANSELA = 0;     //TODO E/S DIGITAL
    
    LATF = 0;   //LIMPIO LATA
    PORTF = 0;  //LIMPIO PORTA
    //TRISF = 0b00000000;
    TRISF &= ~(1<<3 | 1<<2 | 1<<1 | 1<<0);//PIN RF2 Y RF3 COMO SALIDAS
    ANSELF = 0;     //TODO PUERTO COMO E/SALIDA DIGITAL
    
    //LATF |= (1<<2) ;  //ENCIENDO SALIDA
    //LATF |= (1<<3) ;  //Apago LED tarjeta, recordar que led funciona con logica negada
    led_off();
    led2_on();
    
    serial_init(9600);
    
    
    while(1){
        /*if ( ((PORTA>>3) & 0x01) == 0  ){
            LATF = LATF & ~(1<<3);// mandar un 0 a la salida(encienden led)
        }else{
            LATF = LATF | (1<<3);//mandar un 1 a la salida(apagan led)
        }*/
        
        /*led_on();
        __delay_ms(50);
        led_off();
        __delay_ms(50);*/
        
        led2_toogle();
        led_toogle();
        __delay_ms(500);
    }
    
    
    

}

//declarar 10 salidas, conectar leds y hacer el efecto del auto fantastico:
//https://www.youtube.com/watch?v=QVtuL9KgPig&pp=ygUUYXV0byBmYW50YXN0aWNvIGxlZHM%3D
//entregar despues de las 4pm en proto en laboratorio, es individual



    
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