

#include "mcc_generated_files/mcc.h"

//#define MFRC522_CS  LATD4   // SDA    SS
//#define MFRC522_Rst  LATE2    // RST
//#define SoftSPI_SDO  LATC5       //MOSI
//#define SoftSPI_CLK  LATC6         //SCK
//#define SoftSPI_SDI  RC4           //MISO
//
//#define MFRC522_CS_Direction  TRISD4
//#define MFRC522_Rst_Direction  TRISE2
//#define SoftSPI_SDO_Direction  TRISC5
//#define SoftSPI_CLK_Direction  TRISC6
//#define SoftSPI_SDI_Direction  TRISC4

#define MFRC522_CS  LATDbits.LATD4   // SDA    SS
#define MFRC522_Rst LATEbits.LATE2    // RST
#define SoftSPI_SDO LATCbits.LATC5       //MOSI
#define SoftSPI_CLK LATCbits.LATC6         //SCK
#define SoftSPI_SDI PORTCbits.RC4           //MISO

#define MFRC522_CS_Direction    TRISDbits.TRISD4
#define MFRC522_Rst_Direction   TRISEbits.TRISE2
#define SoftSPI_SDO_Direction   TRISCbits.TRISC5
#define SoftSPI_CLK_Direction   TRISCbits.TRISC6
#define SoftSPI_SDI_Direction   TRISCbits.TRISC4

#include "soft_spi.h"
#include "RC522.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

#define anchoPulsos 1
#define habilitaMotor() LATAbits.LATA1 = 0
#define deshabilitaMotor() LATAbits.LATA1 = 1
void activarMotor();
void pulsos(int pulsos);

char texto[13];
char UID[13]; // almacena el buffer del codigo de rfid
char buf[8];  


unsigned int TagType; // almacena el tipo de tag
char cont; // para for

//algoritmo has

unsigned long codigo_rfid;

#define FNV_PRIME 16777619
#define FNV_BASIS  2166136261

unsigned long Hash_algoritmo() {
    unsigned long hash_acum = FNV_BASIS;

    for (cont = 0; cont <= 4; cont++) // se guardan cinco datos del uid
    {
        // Add value into the hash
        hash_acum = (hash_acum * FNV_PRIME) ^ UID[cont];
    }

    return (hash_acum);
}


/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    deshabilitaMotor();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    LED_SetLow();
    __delay_ms(100);
    printf("Hola mundo mcc SoftSpi\n");
    Soft_SPI_Init();
    MFRC522_Init(); //inicializa la tarjeta
    
    habilitaMotor();
    for (int i = 0; i < 5; i++) {
    
        LATAbits.LATA0 = 1;
        __delay_ms(1);

        LATAbits.LATA0 = 0;
        __delay_ms(1);
    
    }
    deshabilitaMotor();
     __delay_ms(500);

    while (1)
    {
        //LED_Toggle();
        //__delay_ms(100);
        // Add your application code
        //si hay lectura de un TAG
        
        if (MFRC522_isCard(&TagType)) {

            if (MFRC522_ReadCardSerial(&UID)) {
                //LED_Toggle();
                printf("CODIGO_UID=");
                for (char i = 0; i < 4; i++) // Imprime el codigo del UID
                {
                    sprintf(buf,"%X", UID[i] );
                    printf(buf);
                }
                //printf('\r');
                printf("\n");
                
                codigo_rfid = Hash_algoritmo();
                sprintf(texto, "%lu", codigo_rfid); // lo pasa a unsigned long

                //LongIntToHex(codigo_rfid,texto);


                printf("CODIGO_RFID=");
                printf(texto);
                //printf('\r');
                printf("\n");

                if (codigo_rfid == 3731160114) {
                    LED_Toggle();
                    activarMotor();
                    printf("TAG1\r\n");

                } else if (codigo_rfid == 3881036155) {
                    //led2 = ~led2;
                    printf("TAG2\r\n");

                } else if (codigo_rfid == 2884436501) {
                    //led3 = ~led3;
                    printf("TAG3\r\n");

                } else if (codigo_rfid == 563250307) {
                    //led4 = ~led4;
                    LED_Toggle();
                    activarMotor();
                    printf("TAG4\r\n");

                }

                codigo_rfid = 0;


                __delay_ms(100);
                //MFRC522_Halt();
                while(MFRC522_ReadCardSerial(&UID));//se queda aqui hasta que se quita la tarjeta
                __delay_ms(200);
            }// lee el codigo RFID
            


        }// si detecta tarjeta
        //while(MFRC522_isCard(&TagType));
    }//fin while
}//Fin Main

void activarMotor(){
    pulsos(200);
    __delay_ms(800);
    pulsos(200);
    __delay_ms(1000);

}

void pulsos(int pulsos){
    habilitaMotor();
    for (int i=0;i<pulsos;i++){
        LATAbits.LATA0 = 1;
        __delay_ms(anchoPulsos);

        LATAbits.LATA0 = 0;
        __delay_ms(anchoPulsos);
    }
    deshabilitaMotor();
    
}



/**
 End of File
*/