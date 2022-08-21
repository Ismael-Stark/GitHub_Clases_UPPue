#include "dht11.h"

//--------------------------------funcion inicializar
void dht_init()
{
    dht11_noAnalog;
    dht_io=0;
    delay_ms(1);
    dht11l = 1;

}//-------------------

/*----------------------funcion de leer el dht-------------*/
//void leer_dht(){
//    //------- variables
//    GlobalErr=0;
//    byte dht_in;
//    byte i;
//
//    byte dht_check_sum;
//
//    //-----------------
//    dht_io=0; // configurar el pin como salida
//    dht11l = 1;
//    dht11l = 0;
//    delay_ms(18);// retardo indicado por el fabricante
//
//    dht11l = 1;
//    delay_us(22);// entre 22 y 28 us 
//    dht_io=1;// configurar el pin como entrada
//    delay_us(5);// retardo indicado por el fabricante esta entre los 22 y 28 us
//    dht_in = dht11p;
//    if(dht_in) {
//        GlobalErr=1;
//        dht11.GlobalErr = 1;
//        //printf("\r\n<dht11 start condition 1 not met");
//        return;
//    }
//    delay_us(80);
//    dht_in = dht11p;
//    if(!dht_in){
//        GlobalErr=2;
//        //printf("\r\n<dht11 start condition 2 not met");
//        return;
//    }
//    delay_us(80);
//    for (i=0; i<5; i++){
//        dht_dat[i] = leer_dht_dat(); // capturando datos
//    }
//
//    dht_io=0;// configura el puerto como salida
//    dht11l = 1;
//
//    dht_check_sum = dht_dat[0]+dht_dat[1]+dht_dat[2]+dht_dat[3]; // comprobacion si la lectura es correcta
//    if(dht_dat[4]!=dht_check_sum){
//     GlobalErr=3;
//     //printf("\r\nDHT11 checksum error");
//    }
//    //dht_dat[0]=dht_dat[0]+5;
//    //dht_dat[2]=dht_dat[2]+2;
//    // por ajustar segun caracteristicas +- 5%
//    //printf("Current humdity = ");
//     //printf("%d",dht_dat[0]+5);
//      //printf(".");
//      //printf("%d",dht_dat[1]+50);
//      //printf(" RH  ");
//     //printf("temperature = ");
//      //printf("%d",dht_dat[2]+2); // por ajustar segun caracteristicas +- 2ºC
//      //printf(".");
//      //printf("%d",dht_dat[3]+50);
//      //
//      //printf("C \n ");
//     // delay_ms(2000);
//}// fin de funcion leer dht

//------------------------funcion recoger bits del dht

/*----------------------funcion de leer el dht STRUTC-------------*/
void leer_dht(){
    //------- variables
    byte i;
   // byte dht_check_sum;
    //-----------------
    dht11.GlobalErr = 0;
    dht_io=0; // configurar el pin como salida
    dht11l = 1;
    dht11l = 0;
    delay_ms(18);// retardo indicado por el fabricante

    dht11l = 1;
    delay_us(22);// entre 22 y 28 us 
    dht_io=1;// configurar el pin como entrada
    delay_us(5);// retardo indicado por el fabricante esta entre los 22 y 28 us
    if(dht11p) {
        dht11.GlobalErr = 1;
        //printf("\r\n<dht11 start condition 1 not met");
        return;
    }
    delay_us(80);
    if(!dht11p){
        dht11.GlobalErr = 2;
        //printf("\r\n<dht11 start condition 2 not met");
        return;
    }
    delay_us(80);
    for (i=0; i<5; i++){
        dht11.dato[i] = leer_dht_dat(); // capturando datos
    }

    dht_io=0;// configura el puerto como salida
    dht11l = 1;

    dht11.check_sum = dht11.dato[0]+dht11.dato[1]+dht11.dato[2]+dht11.dato[3]; // comprobacion si la lectura es correcta
    if(dht11.dato[4]!=dht11.check_sum)
    {
     dht11.GlobalErr = 3;
    }
    dht11.temperatura = dht11.dato[2];
    dht11.humedad     = dht11.dato[0];
}// fin de funcion leer dht

byte leer_dht_dat(){
    byte i = 0;
    byte result=0;
    for (i=0; i< 8; i++) {
        //We enter this during the first start bit (low for 50uS) of the byte
        //Next: wait until pin goes high
        while(dht11p==0);
        delay_us(30);
        if (dht11p==1)//Was: if(PINC & _BV(dht_PIN))
        {
            result |=(1<<(7-i));
        }
        while (dht11p==1);
        //Was: while((PINC & _BV(dht_PIN)));
    }
    //end of "for.."
    return result;
}

//---------------------------------------------------------