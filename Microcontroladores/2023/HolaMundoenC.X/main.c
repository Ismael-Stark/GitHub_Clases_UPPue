#include "Config.h"
#include "serial.h"
#include "adc.h"

//miercoles asignar equipos y proyectos de fin de cuatrimestre

void main(void) {
    init_osc();
    uint32_t count = 0; 
    uint32_t max_count = 1000000; // 1 000 000
    uint8_t contador=0, RX;
    uint16_t LecturaADC;
    
    
    led_off();
    led2_on();
    
    serial_init(115200);
    ADC_Init();
    
    
    while(1){
        
        LecturaADC = ADC_Get_Sample(5);
        
        printf("ADC0 = %d\n", LecturaADC);
        __delay_ms(500);
        
        //printf("Hola mundo %d\n", contador++);
        //RX = getch();
        //printf("%c");
        
        
        /*if ( ((PORTA>>3) & 0x01) == 0  ){
            LATF = LATF & ~(1<<3);// mandar un 0 a la salida(encienden led)
        }else{
            LATF = LATF | (1<<3);//mandar un 1 a la salida(apagan led)
        }*/
        
        /*led_on();
        __delay_ms(50);
        led_off();
        __delay_ms(50);*/
        
        /*led2_toogle();
        led_toogle();
        __delay_ms(500);*/
        
        //for (uint32_t x = 0; x<=1000000;x++)
        //led_toogle();
        
        /*count += 1; 
        if(count > max_count) 
        {             
            printf("count: %ld \n", count);         
            count = 0; 
            led_toogle();               
        }   */
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