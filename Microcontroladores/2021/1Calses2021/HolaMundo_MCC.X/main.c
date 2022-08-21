
#include <builtins.h>

#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/i2c_host/i2c_simple_host.h"
#include "LCD_i2c.h"


#define address 0b0111000
int main(void)
{
    uint8_t contador=0, buffer[40];
    uint8_t temph, templ,adch,adcl;
    uint16_t ADC =0;
    
    float temp;
    SYSTEM_Initialize();
    lcd_init();
    lcd_gotoxy(1,2); //columna,fila
    lcd_puts("Hola");
    lcd_gotoxy(1,1); //columna,fila
    lcd_puts("Mundo");

    while(1)
    {
        temph = i2c_read1ByteRegister(address, 0x00);
        templ = i2c_read1ByteRegister(address, 0x02);
        templ >>= 6;
        ADC = ADCC_GetSingleConversion(LM35);
        temp = (3.3*100*ADC)/1023;
        
        adch = temp;
        adcl = (temp - adch)*100;
        printf("Temp: %i.%i\tTEMPi2c: %i.%i\n",adch,adcl,temph,templ);
        sprintf(buffer,"\fTemp: %i.%i\nTEMPi2c: %i.%i",adch,adcl,temph,templ);
        lcd_puts(buffer);
        //printf("ADC: %i\tTemp: %.2f\tContador: %i\n",ADC,temp,contador++);
        __delay_ms(1000);
    }    
}