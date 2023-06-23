#include "DHT11.h"
    #define dht11T  TRISDbits.TRISD7    //para poner al pin como E/s
    #define dht11L  LATDbits.LATD7      //para activar al sensor
    #define dht11P  PORTDbits.RD7       //para leer el sensor
    #define dht11_noAnalog  ANSELDbits.ANSELD7 = 0// ANSELB = 0;
    #define dht11_pullUp    WPUDbits.WPUD7 = 1// activar pullup;
    uint8_t dht_dat[5];//,GlobalErr=0;
    bool DHT_USO = 0;

void dht_init(bool DHTaUSAR){
    dht11T = 0;
    dht11L = 1;
    dht11P = 0;
    dht11_noAnalog;
    DHT_USO = DHTaUSAR;
    
}

uint8_t leer_trama_dht(){
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

uint8_t leer_dht(float *tem,float *hum){
    uint8_t dht_in=0,i=0, dht_check_sum=0;
    dht11T = 0; //pin como salida
    dht11L = 1;
    
    dht11L = 0; //mando un 0 por 18ms como dice la hoja de datos
    __delay_ms(18);
    dht11T = 1; //pongo el pin como entrada
    
    __delay_us(22);// entre 22 y 28 us
   
    dht_in = dht11P;
    
    if(dht_in) {
        //GlobalErr=1;
        //printf("\r\n<dht11 start condition 1 not met");
        return -1;
    }
    __delay_us(80);
    dht_in = dht11P;
    if(!dht_in){
        //GlobalErr=2;
        //printf("\r\n<dht11 start condition 2 not met");
        return-2;
    }
    __delay_us(80);
    for (i=0; i<5; i++){
        dht_dat[i] = leer_trama_dht(); // capturando datos
    }
    dht_check_sum = dht_dat[0] + dht_dat[1] + dht_dat[2] + dht_dat[3];
    //printf("%x, %x, %x, %x\n",dht_dat[0], dht_dat[1],dht_dat[2], dht_dat[3]);
    if (dht_check_sum != dht_dat[4]){
        //GlobalErr=3;
        return -3;  
    }
    if (DHT_USO == 0){
        *hum = dht_dat[0];
        *tem = dht_dat[2];
    }else{
        *hum = ((dht_dat[0]<<8)| dht_dat[1]) /10.0;
        
        *tem = ((dht_dat[2]<<8)| dht_dat[3]) /10.0;
    }
    
    //GlobalErr = 0;
    return 0;
}

//uint8_t leer_dht(uint8_t *tem,uint8_t *hum){
//    uint8_t dht_in=0,i=0, dht_check_sum=0;
//    dht11T = 0; //pin como salida
//    dht11L = 1;
//    
//    dht11L = 0; //mando un 0 por 18ms como dice la hoja de datos
//    __delay_ms(18);
//    dht11T = 1; //pongo el pin como entrada
//    
//    __delay_us(22);// entre 22 y 28 us
//   
//    dht_in = dht11P;
//    
//    if(dht_in) {
//        //GlobalErr=1;
//        //printf("\r\n<dht11 start condition 1 not met");
//        return -1;
//    }
//    __delay_us(80);
//    dht_in = dht11P;
//    if(!dht_in){
//        //GlobalErr=2;
//        //printf("\r\n<dht11 start condition 2 not met");
//        return-2;
//    }
//    __delay_us(80);
//    for (i=0; i<5; i++){
//        dht_dat[i] = leer_trama_dht(); // capturando datos
//    }
//    dht_check_sum = dht_dat[0] + dht_dat[1] + dht_dat[2] + dht_dat[3];
//    if (dht_check_sum != dht_dat[4]){
//        //GlobalErr=3;
//        return -3;  
//    }
//    if (DHT_USO == 0){
//        *hum = dht_dat[0];
//        *tem = dht_dat[2];
//    }else{
//        
//    }
//    
//    //GlobalErr = 0;
//    return 0;
//}



