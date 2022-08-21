#include "UART.h"

/*********************************************
 * Funcion para inicializar UART
 *********************************************/

void UART_init(void)
{
    RXPPS = 0X11;             	//Pin RX RC1
    RC0PPS = 0x10;               //Pin TX RC0 

    BAUD1CONbits.BRG16 = 1;     // Generador Baud 1=16 bits, 0=8 bits
    BAUD1CONbits.ABDEN = 0;     // 0=Auto bauding off, 1=Auto bauding on

    RC1STAbits.SPEN = 1;        //1=Uart On, 0=Uart Off
    RC1STAbits.RX9 = 0;         //1=9 bits Rx, 0=8 bits Rx
    RC1STAbits.CREN = 1;        //1= Rx Continua, 0= Rx no continua

    TX1STAbits.TX9 = 0;         //1=9 bits Tx, 0= 8 bits Tx
    TX1STAbits.TXEN = 1;        //1=Tx on, 0= Tx off
    TX1STAbits.SYNC = 0;        //1= sincrono, 0=asincrono
    TX1STAbits.BRGH = 1;        //1 = Alta velocidad, 0= Baja velocidad
    TX1STAbits.TX9D = 0;        //9 bits TX 1=on, 0=off

    SPBRGH = 0x00;
    SPBRGL = 0x67;	
    
}


/***********************************************
 * Para leer un dato por RX
 **********************************************/

uint8_t UART_read(void)
{
    while(!PIR3bits.RCIF);
    if(RC1STAbits.OERR==1)     	// EUSART error - restart
    {
        RC1STAbits.CREN = 0; 
        RC1STAbits.CREN = 1; 
    }
    return RC1REG;
}

/***********************************************
 * Para enviar un dato por TX
 **********************************************/

void UART_write(uint8_t txData)
{
    while(PIR3bits.TXIF==0);
    TX1REG = txData;    	
}

/***********************************************
 * Para enviar una cadena de caracteres por TX
 **********************************************/

void UART_write_text(char *uartText)
{
    while (*uartText) UART_write(*uartText++);
}

void putch(char txData)
{
    UART_write(txData);
}

