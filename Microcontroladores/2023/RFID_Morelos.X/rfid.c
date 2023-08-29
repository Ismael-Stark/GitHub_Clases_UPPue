/*
 * File:   rfid.c
 * Author: Alcides Ramos
 *
 * Created on 9 de agosto de 2019, 12:59 PM
 */

// PIC18F2550 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1L
#pragma config PLLDIV = 5       // PLL Prescaler Selection bits (Divide by 5 (20 MHz oscillator input))
#pragma config CPUDIV = OSC1_PLL2// System Clock Postscaler Selection bits ([Primary Oscillator Src: /1][96 MHz PLL Src: /2])
#pragma config USBDIV = 2       // USB Clock Selection bit (used in Full-Speed USB mode only; UCFG:FSEN = 1) (USB clock source comes from the 96 MHz PLL divided by 2)

// CONFIG1H
#pragma config FOSC = HSPLL_HS  // Oscillator Selection bits (HS oscillator, PLL enabled (HSPLL))
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor disabled)
#pragma config IESO = OFF       // Internal/External Oscillator Switchover bit (Oscillator Switchover mode disabled)

// CONFIG2L
#pragma config PWRT = ON        // Power-up Timer Enable bit (PWRT enabled)
#pragma config BOR = ON         // Brown-out Reset Enable bits (Brown-out Reset enabled in hardware only (SBOREN is disabled))
#pragma config BORV = 3         // Brown-out Reset Voltage bits (Minimum setting 2.05V)
#pragma config VREGEN = ON      // USB Voltage Regulator Enable bit (USB voltage regulator enabled)

// CONFIG2H
#pragma config WDT = OFF        // Watchdog Timer Enable bit (WDT disabled (control is placed on the SWDTEN bit))
#pragma config WDTPS = 32768    // Watchdog Timer Postscale Select bits (1:32768)

// CONFIG3H
#pragma config CCP2MX = ON      // CCP2 MUX bit (CCP2 input/output is multiplexed with RC1)
#pragma config PBADEN = ON      // PORTB A/D Enable bit (PORTB<4:0> pins are configured as analog input channels on Reset)
#pragma config LPT1OSC = OFF    // Low-Power Timer 1 Oscillator Enable bit (Timer1 configured for higher power operation)
#pragma config MCLRE = ON       // MCLR Pin Enable bit (MCLR pin enabled; RE3 input pin disabled)

// CONFIG4L
#pragma config STVREN = ON      // Stack Full/Underflow Reset Enable bit (Stack full/underflow will cause Reset)
#pragma config LVP = ON         // Single-Supply ICSP Enable bit (Single-Supply ICSP enabled)
#pragma config XINST = OFF      // Extended Instruction Set Enable bit (Instruction set extension and Indexed Addressing mode disabled (Legacy mode))

// CONFIG5L
#pragma config CP0 = OFF        // Code Protection bit (Block 0 (000800-001FFFh) is not code-protected)
#pragma config CP1 = OFF        // Code Protection bit (Block 1 (002000-003FFFh) is not code-protected)
#pragma config CP2 = OFF        // Code Protection bit (Block 2 (004000-005FFFh) is not code-protected)
#pragma config CP3 = OFF        // Code Protection bit (Block 3 (006000-007FFFh) is not code-protected)

// CONFIG5H
#pragma config CPB = OFF        // Boot Block Code Protection bit (Boot block (000000-0007FFh) is not code-protected)
#pragma config CPD = OFF        // Data EEPROM Code Protection bit (Data EEPROM is not code-protected)

// CONFIG6L
#pragma config WRT0 = OFF       // Write Protection bit (Block 0 (000800-001FFFh) is not write-protected)
#pragma config WRT1 = OFF       // Write Protection bit (Block 1 (002000-003FFFh) is not write-protected)
#pragma config WRT2 = OFF       // Write Protection bit (Block 2 (004000-005FFFh) is not write-protected)
#pragma config WRT3 = OFF       // Write Protection bit (Block 3 (006000-007FFFh) is not write-protected)

// CONFIG6H
#pragma config WRTC = OFF       // Configuration Register Write Protection bit (Configuration registers (300000-3000FFh) are not write-protected)
#pragma config WRTB = OFF       // Boot Block Write Protection bit (Boot block (000000-0007FFh) is not write-protected)
#pragma config WRTD = OFF       // Data EEPROM Write Protection bit (Data EEPROM is not write-protected)

// CONFIG7L
#pragma config EBTR0 = OFF      // Table Read Protection bit (Block 0 (000800-001FFFh) is not protected from table reads executed in other blocks)
#pragma config EBTR1 = OFF      // Table Read Protection bit (Block 1 (002000-003FFFh) is not protected from table reads executed in other blocks)
#pragma config EBTR2 = OFF      // Table Read Protection bit (Block 2 (004000-005FFFh) is not protected from table reads executed in other blocks)
#pragma config EBTR3 = OFF      // Table Read Protection bit (Block 3 (006000-007FFFh) is not protected from table reads executed in other blocks)

// CONFIG7H
#pragma config EBTRB = OFF      // Boot Block Table Read Protection bit (Boot block (000000-0007FFh) is not protected from table reads executed in other blocks)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.






#define _XTAL_FREQ 48000000

 #define MFRC522_CS  LATA0   // SDA    SS
 #define MFRC522_Rst  LATA1    // RST
 #define SoftSPI_SDO  LATA2       //MOSI
 #define SoftSPI_CLK  LATA3         //SCK
 #define SoftSPI_SDI  RA4           //MISO

 #define MFRC522_CS_Direction  TRISA0
 #define MFRC522_Rst_Direction  TRISA1
 #define SoftSPI_SDO_Direction  TRISA2
 #define SoftSPI_CLK_Direction  TRISA3
 #define SoftSPI_SDI_Direction  TRISA4


#include "soft_spi.h"
#include "RC522.h"
#include"stdlib.h"
#include "stdio.h"
#include "string.h"



#include <xc.h>


#define led1 LATB7 
#define led2 LATB6 
#define led3 LATB5 
#define led4 LATB4 



char texto[10];
char UID[10];  // almacena el buffer del codigo de rfid


unsigned int TagType; // almacena el tipo de tag
char cont;   // para for

 //algoritmo has

unsigned long codigo_rfid;

#define FNV_PRIME 16777619
#define FNV_BASIS  2166136261



unsigned long  Hash_algoritmo ()
{
unsigned long  hash_acum = FNV_BASIS;

      for (cont=0;cont<=4;cont++)   // se guardan cinco datos del uid
          {
                 // Add value into the hash
                hash_acum = (hash_acum * FNV_PRIME) ^ UID[cont];
        }

        return (hash_acum);
}


void Uart1_Init(const long int baudios)
{
unsigned int temp_;   

    //  CONFIGURACIÓN SERIAL
    TXSTA=0; //LIMPIA REGISTRO DE TRANSMISION

    TXEN=1; // HABILITA LA TRANSMISION
     BRGH=1; // PARA TRABAJAR A BAUDIOS ALTOS
    
    //REGISTRO DE RECEPCION
    RCSTA=0;

    SPEN=1;//  habilita el MODULO UART
   
    
    
    CREN=1; // HABILITA RECEPCION CONTINUA
    
    //REGISTRO DE BAUDIOS
    BAUDCON=0;
  
    BRG16=1; // TRABAJA A 16 BITS PARA BAUDIOS

    temp_ = (_XTAL_FREQ / (baudios * 4))-1; // FROMULA DEL DATASHETT


 SPBRG= temp_ & 0x00FF;//temp_; //Carga los Baudios parte baja
 SPBRGH=temp_ >>8 ;


}

void Uart1_Write(unsigned char txData)
{
    while(0 == PIR1bits.TXIF)   {}

    TXREG = txData;    // Write the data byte to the USART.
}

void Uart1_write_text(unsigned char *info)
{
 while(*info) Uart1_Write(*info++);
}

unsigned char Uart1_Read(void)
{
    while(!PIR1bits.RCIF)
    {
    }

    
    if(1 == RCSTAbits.OERR)
    {
        // EUSART error - restart

        RCSTAbits.CREN = 0; 
        RCSTAbits.CREN = 1; 
    }

    return RCREG;
}


void Uart1_Read_Text(char* Buffer, char StopChar,unsigned int tama)
{
    unsigned int con_t=0;
    
 while(*(Buffer-1)!=StopChar)   //mientras no llegue el caracter deseado
 {
  con_t++;   
   *Buffer++=Uart1_Read();  //sigue almacenando en el buffer
   if (con_t>=tama) break; 
 }
 *--Buffer=0; //coloca un cero al final para que sea una cadena
}

void main(void) 

{
    // CONVERSOR ANALOGO

ADCON1=0B1111;// TODO DIGITAL

//EL COMPARADOR
CMCON=7; // APAGA EL COMPARADOR.

TRISB=0;
TRISC=0;

TRISC7=1; //entrada rx
Uart1_Init(9600);

RCEN=1; //recepcion continua.
  
  
Uart1_write_text( "Iniciando\r\n" );

  
  
   Soft_SPI_Init();    //nicia modulo SPI
   
   MFRC522_Init();  //inicializa la tarjeta

    LATB=0;
    while (1)
        
    {

        //si hay lectura de un TAG
          if( MFRC522_isCard( &TagType ) )
          {
            
         if( MFRC522_ReadCardSerial( &UID ) )
         {  
            codigo_rfid=Hash_algoritmo();
           sprintf(texto,"%lu",codigo_rfid);// lo pasa a unsigned long
                    
            //LongIntToHex(codigo_rfid,texto);
            
           Uart1_write_text("CODIGO_RFID=");
             Uart1_write_text(texto);
              Uart1_Write('\r');
               Uart1_Write('\n');
               
               if (codigo_rfid==3276407465)
        {
         led1=~led1;
         Uart1_write_text("TAG1\r\n");

         }
       else if (codigo_rfid==3881036155)
        {
         led2=~led2;
         Uart1_write_text("TAG2\r\n");

         }

          else if (codigo_rfid==2884436501)
        {
         led3=~led3;
         Uart1_write_text("TAG3\r\n");

         }
         
          else if (codigo_rfid==3727351763)
        {
         led4=~led4;
         Uart1_write_text("TAG4\r\n");

         }

         codigo_rfid=0;

               
               __delay_ms(2000);
 
           
          }// lee el codigo RFID
              
              
              
          }// si detecta tarjeta
        
        
    }// fin while



    return;
}
