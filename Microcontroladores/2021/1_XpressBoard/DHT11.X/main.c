/**
 * DHT11
*/

#include "mcc_generated_files/mcc.h"
#include "dht11.h"
#include "misdefiniciones.h"

/*
                         Main application
 */
void main(void)
{
    float temp,hum;
    char x[10];
    // initialize the device
    SYSTEM_Initialize();
    dht_init();
    
//    TRISBbits.TRISB2 = 0;
//    ANSELBbits.ANSB2 = 0;

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        printf("\n\nSensor de Temperatura y Humedad DHT11 ");
        leer_dht();
//        printf("%i\n",GlobalErr);
//        if (GlobalErr!=0){
//            //printf("I0.0FI0.0FA0.0BA0.0BO0.0PO0.0P");
//         }else if (GlobalErr==0){
//            temp =(dht_dat[2]+ (dht_dat[3]));
//            hum =(dht_dat[0]+ (dht_dat[1]));
//            sprintf(x,"Tem:%f%c",temp,10);
//            printf(x);
//            sprintf(x,"Hum:%f%c",hum,10);
//            printf(x);
//         }
        if (GlobalErr!=0){
            //printf("I0.0FI0.0FA0.0BA0.0BO0.0PO0.0P");
         }else if (GlobalErr==0){

            //sprintf(msg," T:%3.2f, H:%3.2f ",temp,hum);
            //printf("%s",msg);
            sprintf(x,"Tem:%i.00\n",dht11.temperatura);
            printf(x);
            sprintf(x,"Hum:%i.00\n",dht11.humedad);
            printf(x);
         }
        
        delay_ms(1000);
        
//        LATBbits.LATB2 = 0;//!LATBbits.LATB2;
//        delay_us(1);
//        LATBbits.LATB2 = 1;
//        delay_us(1);
        // Add your application code
    }
}
/**
 End of File
*/