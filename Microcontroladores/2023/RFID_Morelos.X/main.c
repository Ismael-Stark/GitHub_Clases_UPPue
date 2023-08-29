
#include "mcc_generated_files/mcc.h"
#define MFRC522_CS  LATD4   // SDA    SS
#define MFRC522_Rst  LATC7    // RST
#define SoftSPI_SDO  LATC5       //MOSI
#define SoftSPI_CLK  LATC6         //SCK
#define SoftSPI_SDI  RC4           //MISO

#define MFRC522_CS_Direction  TRISD4
#define MFRC522_Rst_Direction  TRISC7
#define SoftSPI_SDO_Direction  TRISC5
#define SoftSPI_CLK_Direction  TRISC6
#define SoftSPI_SDI_Direction  TRISC4


#include "soft_spi.h"
#include "RC522.h"
#include"stdlib.h"
#include "stdio.h"
#include "string.h"
#define led1 LATB7 
#define led2 LATB6 
#define led3 LATB5 
#define led4 LATB4 



char texto[10];
char UID[10]; // almacena el buffer del codigo de rfid


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


void main(void) {
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    int contador = 0;
    Soft_SPI_Init(); //nicia modulo SPI
    MFRC522_Init(); //inicializa la tarjeta

    while (1)
 {

        //si hay lectura de un TAG
        if (MFRC522_isCard(&TagType)) {

            if (MFRC522_ReadCardSerial(&UID)) {
                codigo_rfid = Hash_algoritmo();
                sprintf(texto, "%lu", codigo_rfid); // lo pasa a unsigned long

                //LongIntToHex(codigo_rfid,texto);

                printf("CODIGO_RFID= %s\r\n", texto);


                if (codigo_rfid == 3731160081) {
                    LED_Toggle();
                    printf("TAG1\r\n");

                } else if (codigo_rfid == 1821731433) {
                    led2 = ~led2;
                    printf("TAG2\r\n");

                }
                else if (codigo_rfid == 2337600293) {
                    led3 = ~led3;
                    printf("TAG3\r\n");

                }
                else if (codigo_rfid == 3727351763) {
                    led4 = ~led4;
                    printf("TAG4\r\n");

                }

                codigo_rfid = 0;


                __delay_ms(500);


            }// lee el codigo RFID
            while(MFRC522_ReadCardSerial(&UID));


        }// si detecta tarjeta


    }// fin while
}
/**
 End of File
 */