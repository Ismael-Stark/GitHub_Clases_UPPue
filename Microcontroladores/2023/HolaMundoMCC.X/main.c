#include "mcc_generated_files/mcc.h"
#include <math.h>
#include <pic18f57q84.h>
#include "DHT11.h"
#include "HC_SR04.h"
#include "LCD_i2c.h"
#include "DS1307.h"
#include "Stepper.h"

#define stepsPerRevolution 200 //pasos fijos del motor a 1.8grados
/*
                         Main application
 */

//#define SerialAvailable() U1FIFObits.RXBF

bool DatoSerialDiponible = 0;
extern uint8_t buffer[50];

uint8_t Pasos_Soft[4][4] = {    {1,0,0,0},
                                {0,1,0,0},
                                {0,0,1,0},
                                {0,0,0,1},
                           };
//uint8_t Pasos_Soft[4][4] = {    {1,1,0,0},
//                                {0,1,1,0},
//                                {0,0,1,1},
//                                {1,0,0,1},
//                           };


                                

float map(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void Mpasos_init();


void main(void)
{
    uint16_t ADCvalor, SensorSharp, contador=0;
    float temperatura, distancia;
    uint8_t lecturaSerial, diley=100;
    float humedad, tempe,dhterr;
    uint8_t buffer[34];
    // Initialize the device
    SYSTEM_Initialize();
    //lcd_init();
    //dht_init(USE_DHT11);
    //HC_SR04_init();
    //lcd_puts("\fHola mundo");
    //__delay_ms(100);
    
    //Mpasos_init();
    stepper_init(stepsPerRevolution);
    stepper_setSpeed(60);
    
    


    
    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    //printf("Hola ds1307\n");
    //__delay_ms(100);
    //uint8_t hr,min,sec,mes,dia,anno,diasem;
    //ds1307_init();
    
    /////// ds1307_set_date_time(day,mth,year,dow,hour,min,sec)
//    uint8_t hr = 15,min=32,sec=0,mes=8,dia=16,anno=2023,diasem=3;
    //ds1307_set_date_time(dia,mes,anno,diasem,hr,min,sec);
    //ds1307_set_date_time(18,8,23,5,12,20,0);
    //ds1307_set_date(day,mth,year,dow)
    //ds1307_set_date(16,8,23,3);
    while (1)
    {   
        //printf("clockwise\n");
        stepper_step(stepsPerRevolution);
        __delay_ms(500);

    // step one revolution in the other direction:
        //printf("counterclockwise\n");
        stepper_step(-stepsPerRevolution);
        __delay_ms(500);
        //printf("contador %d\n",contador ++);
        //LED1_Toggle();
//        /// ds1307_get_time(hr,min,sec)
//        ds1307_get_time(&hr,&min,&sec);
//        /// ds1307_get_date(day,mth,year,dow)
//        ds1307_get_date(&dia,&mes,&anno,&diasem);
//        printf("La hora es: %00d:%00d:%00d\n",hr,min,sec);
//        printf("La fecha es: %d/%d/%d\n",dia,mes,anno);
        
        //ADCvalor = ADC_GetSingleConversion(POT1);
        
        //printf("La ADC es: %d\n",ADCvalor);
        //__delay_ms(1500);
//        for(uint8_t i = 0 ; i<4;i++){
//            LATFbits.LATF4 = Pasos_Soft[i][3];
//            __delay_ms(1);
//            LATFbits.LATF5 = Pasos_Soft[i][2];
//            __delay_ms(1);
//            LATFbits.LATF6 = Pasos_Soft[i][1];
//            __delay_ms(1);
//            LATFbits.LATF7 = Pasos_Soft[i][0];
//            __delay_ms(1);
//        }
//          for(uint8_t i = 0 ; i<4;i++){
//            Pasos_Soft[i][3] ? LATF |=(1<<4) : LATF &=~(1<<4);
//            Pasos_Soft[i][2] ? LATF |=(1<<5) : LATF &=~(1<<5);
//            Pasos_Soft[i][1] ? LATF |=(1<<6) : LATF &=~(1<<6);
//            Pasos_Soft[i][0] ? LATF |=(1<<7) : LATF &=~(1<<7);
//            __delay_ms(5);
//        }
        
//        for(uint8_t i = 0 ; i<=255;i++){
//            PWM1_LoadDutyValue(i);
//            __delay_ms(3);
//        }
//        __delay_ms(100);
//        for(uint8_t i = 255 ; i>=0;i--){
//            PWM1_LoadDutyValue(i);
//            __delay_ms(10);
//        }
        // Add your application code
        
        
//        if (TMR0_HasOverflowOccured() == 1){//polling
//            PIR3bits.TMR0IF =0;
//            LED1_Toggle();
//        }
//        LED1_Toggle();
//        LED2_Toggle();
//        ADCvalor = ADC_GetSingleConversion(LM35);
//        
//        temperatura = ((3.3/4095)*ADCvalor)*100;
//        
//        sprintf(buffer,"\fLM35: \n%.2f",temperatura);
//        lcd_puts(buffer);
//        
//        
//        
//        //printf("ADC5: temp %.3fC\n",temperatura);
//        //__delay_ms(100);
//        //SensorSharp = ADC_GetSingleConversion(POT2);
//        
//        //(D)= 27.86 * (lectura en Voltios)^(-1.15);
//        //distancia = pow ((27.86 * ((3.3/4095)*SensorSharp)),(-1.15));
//        //distancia = pow ((29.988 * ((3.3/4095)*SensorSharp)),-1.173);
//        //distancia =  pow(map( (29.988 * ((3.3/4095)*SensorSharp))  , 0, 4095, 0, 5000)/1000.0, -1.173);
//        
//        //printf("ADC1: %.3fcm\n\n",distancia);
//        __delay_ms(900);
//        
//        dhterr = leer_dht(&tempe, &humedad);
//        
//        if (dhterr ==0){
//            //printf("\nEl DHT11: H:%.1f%%, T:%.1f\n",humedad, tempe);
//            //printf("Humedad:%.1f%%, Temperatura:%.1f\n",humedad, tempe);
//            //printf("{\"id\":\"ismael\",\"Temperatura\":\"%.2f\",\"humedad\":\"%.2f\"}\n", tempe,humedad);
//            printf("{\"id\":\"ismael\",\"Temperatura\":\"%.2f\",\"humedad\":\"%.2f\",\"cont\":\"%d\"}\n", tempe,humedad,contador++);
//            //printf("%.2f\n", tempe);
//        }else{
//            printf("\nError DHT11 verifica tus cables\n");
//        }
//        
//        if (DatoSerialDiponible == 1){
//           DatoSerialDiponible = 0;
//           printf("llego el dato: %s\n\n",buffer);
//        }
//        
//        //printf("\nLa distancia es: %.2f cm\n",HC_SR04_cm() );
//        
    }
}






void Mpasos_init(){
    LATF = 0;
    PORTF = 0;
    TRISF &= ~( (1<<7)|(1<<6)|(1<<5)|(1<<4) );
}
/**
 End of File
*/


