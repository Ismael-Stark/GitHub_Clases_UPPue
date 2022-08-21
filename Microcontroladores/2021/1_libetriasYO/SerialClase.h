#include <xc.h>
#include "config.h"
#include <stdint.h>


//typedef unsigned short    uint16_t;
//typedef unsigned char     uint8_t;

#define kbhit() PIR1bits.RCIF   //The PIR registers contain the individual 
                                //flag bits for the peripheral interrupts
// 1 = The EUSART receive buffer, RCREG, is full (cleared when RCREG is read) 

/*To set up an Asynchronous Transmission:
1. Initialize the SPBRGH:SPBRG registers for the
appropriate baud  rate.  Set or clear the  BRGH
and  BRG16  bits,  as  required,  to  achieve  the
desired baud rate.
2. Enable the asynchronous serial port by clearing
bit SYNC and setting bit SPEN.
3. If the signal from the TX pin is to be inverted, set
the TXCKP bit.
4. If interrupts are desired, set enable bit TXIE.
5. If 9-bit transmission is desired, set transmit bit
TX9. Can be used as address/data bit.
6. Enable  the  transmission  by  setting  bit  TXEN
which will also set bit TXIF.
7. If  9-bit  transmission  is  selected,  the  ninth  bit
should be loaded in bit TX9D.
8. Load  data  to  the  TXREG  register  (starts
transmission).
9. If using interrupts, ensure that the GIE and PEIE
bits in the INTCON register (INTCON<7:6>) are
set.*/



void serial_config(unsigned long baudios){
    TRISCbits.RC6 = 0;      //Tx es Salida
    TRISCbits.RC7 = 1;      //Rx es Entrada
    
    BAUDCONbits.BRG16 =0 ;  // 8-bit Baud Rate Generator
    //Desired Baud Rate =  FOSC/(64 ([SPBRGH:SPBRG] + 1))
    //X = ((FOSC/Desired Baud Rate)/64) - 1
    //Baudios
    SPBRG = (unsigned char)(((_XTAL_FREQ/baudios)/64)-1);
    //((48Mhz/115200)/64)    -1== 5.5
    
    //Configuración p240, reg TXSTA
    TXSTAbits.BRGH = 0;     //Low Speed
    TXSTAbits.SYNC = 0;     //Modo asincrono
    RCSTAbits.SPEN = 1;     //Habilitar Tx y Rx
    
    TXSTAbits.TX9 = 0;      //eusart a 8 bits
    TXSTAbits.TXEN = 1;     //se activa transmisión
    
    ////Configuración p241, reg RCTA
    //RX
    RCSTAbits.RC9 = 0;      //8 bits
    RCSTAbits.CREN = 1;     //se activa recepción
    
    BAUDCONbits.BRG16 =0 ;  // 8-bit Baud Rate Generator
}

char rx_serial(){
    return RCREG;
}

void tx_serial(unsigned char c){
    while(TXSTA1bits.TRMT == 0);
    TXREG = c;    
}

void tx_serial_string(unsigned char *c){
	while(*c != '\0'){
        tx_serial(*c);
		c++;
	}
}