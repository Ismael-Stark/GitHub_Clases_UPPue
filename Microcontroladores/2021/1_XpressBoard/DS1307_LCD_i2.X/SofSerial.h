
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include "mcc_generated_files/mcc.h"

#define BAUDIOS 9600


//Constantes necesarias para el calculo de los baudios y retardos el programa
//#define  cristal  _XTAL_FREQ/1000000//obtiene el reloj en mega
#define  cristal 32

#define DELAY_FOR  (4*16/cristal)        //retardo extra en la escritura 14us   // depende del compilador usado
#define DELAY_FOR_READ  (4*18/cristal)   //Retardo extra en la Lectura    10us   // depende del compialdor

#define BITPERIOD ((1000000/BAUDIOS))//  Duración de  1 bit en microsegundos

#define  BITPERIOD_FOR (BITPERIOD - DELAY_FOR)//  Retardo real a la Escritura
#define BITPERIOD_FOR_READ (BITPERIOD - DELAY_FOR_READ)//  Retardo real a la lectura
#define HALFBITPERIOD (BITPERIOD/2)// Duración medio bit


#define  SoftWare_Uart_Tx               LATCbits.LATC5
#define  SoftWare_Uart_Rx               PORTCbits.RC6
#define  SoftWare_Uart_Tx_Direction     TRISCbits.TRISC5
#define  SoftWare_Uart_Rx_Direction     TRISCbits.TRISC6

//void SoftUart_Init();
void SoftWareUart_Init();
void Software_UART_Write(unsigned char Data);
void Software_UART_Write_Text(char* Text);
void Software_UART_Write_Text_Const(const char* Text);
unsigned char Software_UART_Read ();
void Software_UART_Read_Text(char* Buffer, char StopChar,unsigned int tama);

#endif	/* XC_HEADER_TEMPLATE_H */

