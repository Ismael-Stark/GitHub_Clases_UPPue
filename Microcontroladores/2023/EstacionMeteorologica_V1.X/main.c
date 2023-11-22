
#include "mcc_generated_files/mcc.h"
#include "DHT11.h"
#include "LCD_i2c.h"

//#define VOLTAJE_ADC 3.279
#define VOLTAJE_ADC 5.00
#define DIREC_ADC (VOLTAJE_ADC / 4095)
#define VEL_ADC (VOLTAJE_ADC / 4095)


float map(float x, float in_min, float in_max, float out_min, float out_max) {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

float mapDireccion(float voltaje) {
    return (360 * voltaje) / VOLTAJE_ADC;
}

float mapVelocidad(float voltaje) {
//    float voltaje_mapeado = map(voltaje, 0.0, 5.0, 0.0, VOLTAJE_ADC);
//    return 6 * voltaje_mapeado;
    return 6 * voltaje;
}

/*
                         Main application
 */
void main(void)
{
    uint16_t uVeleta, uAnemometro;
    uint16_t valorADC, valorADC2;
    float voltaje1, voltaje2;
    float Direccion;
    float Velocidad;
    float tem,hum;
    char buffer[100];
    // Initialize the device
    SYSTEM_Initialize();
    
        
    dht_init(USE_DHT22);
    lcd_init();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    __delay_ms(500);
    printf("\nEstacion meteorologica V1\n\tUPPue\nIng. electronica y Telecomunicaciones 2023\n\n");
    lcd_puts("\fEstacion meteorolo..\n -->UPPue 2023<--\n  Ing. electronica\ny Telecomunicaciones");
    __delay_ms(1000);
    while (1)
    {
//        uVeleta = ADC_GetSingleConversion(VELETA);
//        printf("ADC_Veleta: %u\n", uVeleta);
//        
//        uAnemometro = ADC_GetSingleConversion(ANEMOMETRO);
//        printf("ADC_Anemometro: %u\n", uAnemometro);
        //__delay_ms(500);
        
        
        

        valorADC = ADC_GetSingleConversion(VELETA);
        voltaje1 = valorADC * (double)DIREC_ADC;
        Direccion = mapDireccion(voltaje1);
        printf("ADC_Direccion: %f, voltaje %f, %u\n", Direccion, voltaje1, valorADC);
        __delay_ms(50);

        valorADC2 = ADC_GetSingleConversion(ANEMOMETRO);
        voltaje2 = valorADC2 * (double)VEL_ADC;//\\valor volts 0 a3.3
        Velocidad = mapVelocidad(voltaje2);
        printf("ADC_Velocidad: %f m/s, VMAp %f, %u\n\n\n", Velocidad, voltaje2, valorADC2 );
//        //__delay_ms(2000);
        // Add your application code
        leer_dht(&tem,&hum);
        printf("Temp: %f C\tHum: %f%%\n\n", tem, hum );
        
        sprintf(buffer,"\f -->UPPue 2023<--\nT:%.2f%cC, H:%.2f\nVeleta: %.2f%c\nAnemom: %.2f m/s",tem,223,hum,Direccion,223,Velocidad);
        lcd_puts(buffer);
        __delay_ms(1000);
        
    }
}
/**
 End of File
*/