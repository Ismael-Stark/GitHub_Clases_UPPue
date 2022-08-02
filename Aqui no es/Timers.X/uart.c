#include "uart.h"

void serial_init(uint32_t baudios){
    uint16_t sx;
    //BAUDCON1 = 0;
//    BAUD1CONbits.BRG16 = 0; //brg16 deshabilitado, modo brg8
    BAUD1CON = 0x08;

    RC1STA = 0b10010000;    //serial port habilitado y se habilita la recepcion continua hasta que 
                            //bit CREN sea limpiado;
    //TX1STA = 0x24;
    //TX1STA = 0b00100100;      //modo 8bit transmision, , trsnsmicion habilitada
                                //modo asincrono, modo alta velocidad
    
    TX1STA = 0b00100100; //modo 8bit transmision, , trsnsmicion habilitada
                         //modo asincrono
                         //BRGH (bit2) =1(alta velocidad)
    //para calcular SP1BRGL y SP1BRGH, ver pag552
    //TX1STAbits.BRGH = 1;
    sx = ((_XTAL_FREQ/baudios)/4 ) - 1;//el numero divisor depende de la tabla 33-1, pag 336
    SP1BRGL = (uint8_t)sx;
    SP1BRGH = (uint8_t)(sx>>8);
//    SP1BRGL = 51;   //para 9600, con brg8bits, y lowspeed
//    SP1BRGH = 0x00;

    RC0PPS = 0x10;   //RC0->EUSART:TX;    pag234 y 236
    //TXPPS = 0x10;
    RXPPS = 0x11;   //RC1->EUSART:RX;
    
}

void uart_tx(uint8_t dato){
    //while( PIR3bits.TXIF == 0){}
    while( ( (PIR3>>4) & 0x01) == 0){}
    //if(PIR3bits.TXIF == 1){
        TXREG = dato;
    //}
}

uint8_t uart_rx(){
    //pag146 si RCIF==0 significa que el bufer esta vacio, aun no llegan datos
    //y como no llegan datos, me espero a que llegen
    //tener cuidado, funcion bloqueante, si no llega nada
    while (rxFlag == 0){}
    
    if( ((RC1STA >> 1)& 0x01) == 1){//si error de overrun
        RC1STA = RC1STA & ~(1<<4); //se deshabilita continuous receive
        RC1STA = RC1STA | (1<<4); //se vuelve a habilitar
    }
    /*if(RC1STAbits.OERR == 1){//si error de overrun
        RC1STAbits.CREN = 0; //se deshabilita continuous receive
        RC1STAbits.CREN = 1; //se vuelve a habilitar
    }*/
      return RCREG;
    
}


void uart_send_string(uint8_t *dato){
    while(*dato){
        uart_tx( *dato++);
    }
}

void putch(uint8_t dato){//redireccionar el STDIO.h
    //por el puerto serial, para enviar datos  printf
    uart_tx( dato);
}

uint8_t getch(){//redireccionar el STDIO.h
    //por el puerto serial, para recibir datos
    return uart_rx();
}