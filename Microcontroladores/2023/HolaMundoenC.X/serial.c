#include "serial.h"

void serial_init(uint32_t baudios){
    uint32_t BRG;
     // UART1
    U1CON0bits.BRGS = 0; // Formula 16
    //baudios = (Fosc)/(4*(UxBRG+1))   //pagina 626
    //UxBRG = Fosc / (4 * baudios)   - 1
    BRG = ((1/_XTAL_FREQ) / (4 * baudios)  ) - 1//BRGS = 1
    U1BRG = 416; // 9600 Baudios
    U1BRG = BRG; // 9600 Baudios
    
    U1CON0bits.MODE = 0; // Modo 8 bits UART
    U1CON1bits.ON = 1;   //Habilitar Puerto Serial
    
    U1CON0bits.TXEN = 1; // Tx Habilitado
    
    U1CON0bits.RXEN = 1; // Rx Habilitado
    
    RF0PPS = 0x20; // RF0 -> TX
    TRISFbits.TRISF1 = 1; // ENTRADA
    ANSELFbits.ANSELF1 = 0; // Digital
    WPUFbits.WPUF1 = 0; // habilitado pull up
    INLVLFbits.INLVLF1 = 0; // TTL
    SLRCONFbits.SLRF1 = 1; // Limitado
    ODCONFbits.ODCF1 = 0; // Push Pull 
    
    U1RXPPS = 0x29; // RF1 -> RX 
    //U1TXB = 'A'; //->> TSR
    
    
    
}

void serial_write(uint8_t data){
    while(U1ERRIRbits.TXMTIF == 0); // SE está enviando un dato
    //while(0 == PIR4bits.U1TXIF);
    //U3TXB -> uart1 uart 2 
    U1TXB = data; // 
    
    /*
    //while( PIR3bits.TXIF == 0){}
    while( ( (PIR3>>4) & 0x01) == 0){}
    //if(PIR3bits.TXIF == 1){
        TXREG = data;
    //} */
}

uint8_t serial_read(void){
    return U1RXB; // 8 bits 
    
    /*
    //pag146 si RCIF==0 significa que el bufer esta vacio, aun no llegan datos
    //y como no llegan datos, me espero a que llegen
    //tener cuidado, funcion bloqueante, si no llega nada
    while (rxFlag == 0){}
    
    if( ((RC1STA >> 1)& 0x01) == 1){//si error de overrun
        RC1STA = RC1STA & ~(1<<4); //se deshabilita continuous receive
        RC1STA = RC1STA | (1<<4); //se vuelve a habilitar
    }  */
    /*if(RC1STAbits.OERR == 1){//si error de overrun
        RC1STAbits.CREN = 0; //se deshabilita continuous receive
        RC1STAbits.CREN = 1; //se vuelve a habilitar
    }*/
      //return RCREG; 
}

void putch(char txData){
    serial_write(txData);
}

char getch(void)
{
    return serial_read();
}