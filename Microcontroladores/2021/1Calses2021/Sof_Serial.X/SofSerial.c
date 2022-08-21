#include "SofSerial.h"

void  SoftWareUart_Init()
{
    
  SoftWare_Uart_Tx=1;
  SoftWare_Uart_Rx=1;
  SoftWare_Uart_Tx_Direction=0;
  SoftWare_Uart_Rx_Direction=1;
  SoftWare_Uart_Tx=1;
 __delay_us(BITPERIOD);
}

void Software_UART_Write(unsigned char Data)
{
  unsigned char mask;
  SoftWare_Uart_Tx = 0;
  __delay_us(BITPERIOD);

 //el for demora 14 ciclos de reloj
  for (mask=0x01;mask!=0;mask=mask<<1)
   {
    if(Data&mask) SoftWare_Uart_Tx = 1;
    else SoftWare_Uart_Tx = 0;
  __delay_us(BITPERIOD_FOR);  //para mayor precision acorde al cristal   porque son 14 cilcos de reloj
  }
  SoftWare_Uart_Tx = 1;
  __delay_us(BITPERIOD);
}

void Software_UART_Write_Text(char* Text)
{
 while(*Text)Software_UART_Write(*Text++);
}

void Software_UART_Write_Text_Const(const char* Text)
{
 while(*Text)Software_UART_Write(*Text++);
}

unsigned char Software_UART_Read ()
{
  char mask;
  char Data=0;

 while(SoftWare_Uart_Rx==1); //sino llega el bit de star se queda a esperarlo
  __delay_us(HALFBITPERIOD);
  for(mask=0x01;mask!=0;mask=mask<<1)
  {
    __delay_us(BITPERIOD_FOR_READ);   //retardo teniendo en cuenta os del for y el if es de 4 ciclos de reloj
    if(SoftWare_Uart_Rx)Data=Data|mask;
  }
  __delay_us(BITPERIOD);
  return Data;
}

void Software_UART_Read_Text(char* Buffer, char StopChar,unsigned int tama)
{
    unsigned int con_t=0;
    
 while(*(Buffer-1)!=StopChar)   //mientras no llegue el caracter deseado
 {
  con_t++;   
   *Buffer++=Software_UART_Read();  //sigue almacenando en el buffer
   if (con_t>=tama) break; 
 }
 *--Buffer=0; //coloca un cero al final para que sea una cadena
}