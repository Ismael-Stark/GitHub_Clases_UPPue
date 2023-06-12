#include "serial.h"

void serial_init(uint32_t baudios){
    uint16_t BRG;
     // UART1
    U1CON0bits.BRGS = 1; // //pagina 627
    //BRGS = 1, High Rate, Fosc/[4(UxBRG+1)]
    //BRGS = 0, Normal Rate, Fosc/[16(UxBRG+1)]
    
    //baudios = (Fosc)/(4*(UxBRG+1))   //pagina 627
    //UxBRG = Fosc / (4 * baudios)   - 1
    
    BRG = (uint16_t)((_XTAL_FREQ / (4 * baudios)  ) - 1);//BRGS = 1
    //BRG = (_XTAL_FREQ / (16 * baudios)  ) - 1;//BRGS = 0
    
    //U1BRG = 416; // 9600 Baudios
    U1BRG = BRG; // 9600 Baudios
    //U1BRG = 64; // 9600 Baudios
    
    U1CON0bits.MODE = 0; // Modo 8 bits UART
    U1CON1bits.ON = 1;   //Habilitar Puerto Serial    
    U1CON0bits.TXEN = 1; // Tx Habilitado    
    U1CON0bits.RXEN = 1; // Rx Habilitado
    
    TRISFbits.TRISF0 = 0; // Salida
    ANSELFbits.ANSELF1 = 0; // Digital
    WPUFbits.WPUF1 = 0; // habilitado pull up
    
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
    //U3TXB -> uart1 //uart 2 
    U1TXB = data; // 
    

}

uint8_t serial_read(void){
    while(U1FIFObits.RXBF == 0);
    return U1RXB; // 8 bits 
}


///redireccionar el STDIO.h por el
//puerto serial
void putch(char txData){
    serial_write(txData);
}

int getch(void)
{
    return serial_read();
}