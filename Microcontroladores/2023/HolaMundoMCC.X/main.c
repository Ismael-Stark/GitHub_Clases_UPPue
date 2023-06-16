#include "mcc_generated_files/mcc.h"
#include <math.h>
/*
                         Main application
 */

#define SerialAvailable() U1FIFObits.RXBF

float map(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}




void main(void)
{
    uint16_t ADCvalor, SensorSharp;
    float temperatura, distancia;
    uint8_t lecturaSerial;
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    while (1)
    {
        // Add your application code
        LED1_Toggle();
        LED2_Toggle();
        ADCvalor = ADC_GetSingleConversion(LM35);
        
        temperatura = ((3.3/4095)*ADCvalor)*100;
        
        printf("ADC5: temp %.3fC\n",temperatura);
        //__delay_ms(100);
        //SensorSharp = ADC_GetSingleConversion(POT2);
        
        //(D)= 27.86 * (lectura en Voltios)^(-1.15);
        //distancia = pow ((27.86 * ((3.3/4095)*SensorSharp)),(-1.15));
        //distancia = pow ((29.988 * ((3.3/4095)*SensorSharp)),-1.173);
        //distancia =  pow(map( (29.988 * ((3.3/4095)*SensorSharp))  , 0, 4095, 0, 5000)/1000.0, -1.173);
        
        //printf("ADC1: %.3fcm\n\n",distancia);
        __delay_ms(900);
        
        
        //if (SerialAvailable() == 1){
            //lecturaSerial = getch();
            //printf("%c\n\n",lecturaSerial);
        //}
        
        
        
    }
}
/**
 End of File
*/