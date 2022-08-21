
#include "dht11.h"

void dht11_init(){
    dht11_noAnalog;
    dht11T = 0;
    dht11L = 1;    
}
void dht11_read(uint8_t *tem, uint8_t *hum){
    uint8_t dht_in=0,i=0, dht_check_sum=0;
    dht11T = 0; //pin como salida
    dht11L = 1;
    
    dht11L = 0; //mando un 0 por 18ms como dice la hoja de datos
    __delay_ms(18);
    dht11T = 1; //pongo el pin como entrada
    
    __delay_us(22);// entre 22 y 28 us
   
    dht_in = dht11P;
    
    if(dht_in) {
        GlobalErr=1;
        //printf("\r\n<dht11 start condition 1 not met");
        return;
    }
    __delay_us(80);
    dht_in = dht11P;
    if(!dht_in){
        GlobalErr=2;
        //printf("\r\n<dht11 start condition 2 not met");
        return;
    }
    __delay_us(80);
    for (i=0; i<5; i++){
        dht_dat[i] = leer_dht_dat(); // capturando datos
    }
    dht_check_sum = dht_dat[0] + dht_dat[1] + dht_dat[2] + dht_dat[3];
    if (dht_check_sum != dht_dat[4]){
        GlobalErr=3;
        return;
    }
    *hum = dht_dat[0];
    *tem = dht_dat[2];
    GlobalErr = 0;
}

uint8_t leer_dht_dat(){
    uint8_t result= 0, i=0;
    for (i=0; i< 8; i++) {
        while(dht11P==0);
        __delay_us(30);
        if (dht11P==1)
        {
            result |=(1<<(7-i));
        }
        while (dht11P==1);
    }
    return result;
    
}