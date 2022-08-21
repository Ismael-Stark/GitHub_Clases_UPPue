#include <xc.h>
//#include <pic16f18855.h>
//#include <pic16lf18855.h>
#include "Serial.h"
#include "configuracion.h"
#include "misdefiniciones.h"

void serial_init(uint16_t baud){
    uint16_t sx;
    //BAUDCON1 = 0;
    BAUD1CONbits.BRG16 = 0; //brg16 deshabilitado, modo brg8

    //RC1STA = 0x90;
    RC1STA = 0b10010000;    //serial port habilitado y se habilita la recepcion continua hasta que 
                            //bit CREN sea limpiado;
    //TX1STA = 0x24;
    //TX1STA = 0b00100100;      //modo 8bit transmision, , trsnsmicion habilitada
                                //modo asincrono, modo alta velocidad
    
    TX1STA = 0b00100000; //modo 8bit transmision, , trsnsmicion habilitada
                         //modo asincrono, modo baja velocidad
    //para calcular SP1BRGL y SP1BRGH, ver pag552
    sx = ((_XTAL_FREQ/baud)/64 ) - 1;
    SP1BRGL = (uint8_t)sx;
    SP1BRGH = (uint8_t)(sx>>8);
//    SP1BRGL = 51;   //paraa 9600
//    SP1BRGH = 0x00;

    RC0PPS = 0x10;   //RC0->EUSART:TX;    pag234 y 236
    //TXPPS = 0x10;
    RXPPS = 0x11;   //RC1->EUSART:RX;
    
}

void serial_TX(uint8_t dato){
    while(PIR3bits.TXIF == 0){}
    //if(PIR3bits.TXIF == 1){
        TXREG = dato;
    //}
    
}

uint8_t serial_RX(){
    //pag146 si RCIF==0 significa que el bufer esta vacio, aun no llegan datos
    //y como no llegan datos, me espero a que llegen
    //tener cuidado, funcion bloqueante, si no llega nada
    while (PIR3bits.RCIF == 0){}
    
    if(RC1STAbits.OERR == 1){//si error de overrun
        RC1STAbits.CREN = 0; //se deshabilita continuous receive
        RC1STAbits.CREN = 1; //se vuelve a habilitar
    }
      return RCREG;
    
}


//estas dos funciones siguientes, lo que hacen es redireccionar la libreria
//STDIO.h por el puerto serial
char getch(void){
    return(serial_RX());
}

void putch(char txData ){
    serial_TX(txData);
}