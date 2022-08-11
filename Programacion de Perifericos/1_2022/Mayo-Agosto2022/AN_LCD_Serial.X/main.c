
#include "mcc_generated_files/mcc.h"
#include "LCD_i2c.h"
#include "MisVariables.h"
#include <stdlib.h>
#include <string.h> 

//Pin PWM RF2 a 1khz y 9bits

float map(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

/*
                         Main application
 */
void main(void)
{
    
    // Initialize the device
    SYSTEM_Initialize();
    //LED_SetLow();
    __delay_ms(500);
    //lcd_init();
    //sprintf(buffer,"\fLCD i2c\nIET 3A");
    //lcd_puts(buffer);
    /*LED2_SetHigh();
    LED3_SetHigh();
    LED4_SetHigh();
    LED5_SetHigh();*/
    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    PWM1_LoadDutyValue(127);
    
   
    while (1)
    {
        lecturaADC = ADC_GetSingleConversion(LM35);
        V = mV*lecturaADC;
        temperatura = V / 0.01;
        printf("%3.2f\n",temperatura);
        
        
        LED2_Toggle();
       // serialRX = getch();//FUNCION BLOQUEANDO, PARA EVITAR ESTO, SE USA INTERRUPCIONES
        //printf("cont\n" );
        if(strstr(bufferRx,"LED1OFF")){
            LED_SetHigh();//led se apaga
            sprintf(buffer,"");
        }else  if (strstr(bufferRx,"LED1ON")){
             LED_SetLow();//led se enciende  
             sprintf(buffer,"");
        }else {
            enteroRecibido = atoi(bufferRx);
            PWMvalue = map(enteroRecibido, 0, 10, 0, 512);
            PWM1_LoadDutyValue(PWMvalue);
            sprintf(buffer,"");
        }
        
        __delay_ms(100);
        
    }
}
/**
 End of File
*/

 /*while(1){
        for (int i=0; i<=512;i++){
            PWM1_LoadDutyValue(i);
            __delay_ms(1);
        }
        
        for (int i=512; i>=0;i--){
            PWM1_LoadDutyValue(i);
            __delay_ms(1);
        }
    }/*

/*for (int i=0; i<=65;i++){
            PWM1_LoadDutyValue(i);
            __delay_ms(10);
        }
        
        for (int i=65; i>=0;i--){
            PWM1_LoadDutyValue(i);
            __delay_ms(10);
        }*/
        /*LED_Toggle();
        lecturaADC =  ADC_GetSingleConversion(LM35);
        V = mV*lecturaADC;
        temperatura = V / 0.01;
        printf("cont=%d, ADC=%i\nV=%f, Temp=%f\n\n",contador++,lecturaADC, V, temperatura);
        //printf("%f\n",temperatura);
        __delay_ms(500);*/
        //sprintf(buffer,"\fcont=%d ADC=%i\n",contador,lecturaADC,temperatura);
        //lcd_puts(buffer);
        
        // ejemplo visualStudio enciende apaga led