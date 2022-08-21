
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
#include "LCD_i2c.h"

#define address 0b0111000

void main(void)
{
    uint8_t temph, templ, hr=11,min=57,seg=50;
    uint8_t buffer[40];
    float termopar, tempf;
    uint8_t l = 'l',a='a';
    uint8_t d = 2, u = 5;
    // initialize the device
    SYSTEM_Initialize();

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
    printf("Sensor de temperatura usando LCD y protocolo i2c\n");
    
    lcd_init();
    //lcd_init(back_light_on);
    
    sprintf(buffer,"\fSensor de\ntemperatura i2c ");
    lcd_puts(buffer);
    
    TRISA = 0;
        
    while (1)
    {
        //I2C1_Read1ByteRegister(i2c1_address_t address, uint8_t reg)
        temph = I2C1_Read1ByteRegister(address, 0x00);
        templ = I2C1_Read1ByteRegister(address, 0x02);
        templ >>= 6;
        templ *= 25;
        
        //tempf = temph + (float)templ * 0.1; //conversion a float
        u = temph%10;
        d = temph/10;
        EUSART_Write(10);
        EUSART_Write(13);
        EUSART_Write(d+48);
        EUSART_Write(u+48);
        printf("\nesto es mostrando con printf %d",temph);
        sprintf(buffer,"\fLa temperatura es:\n%d.%d",temph,templ);
        lcd_puts(buffer);
        __delay_ms(1000);
        // Add your application code
    }
}

/*//por ahora el sensor no lee temperaturas negativas
        //hace falta usar el complentoA2 , para poder leer
        //numero negativos
       // itoa(tempf,buffer,10);
        // 4 is mininum width, 2 is precision; float value is copied onto str_temp/
        //dtostrf(getValue(), 4, 2, v_str);
        //dtostrf(tempf,5,2,buffer);
        
        printf("la temperatura es: %d.%d\n", temph,templ);
        
        //sprintf(buffer,"\fla temperatura \nes: %d.%d", temph,templ);
        //lcd_puts(buffer);
        //sprintf(buffer,"\n%f", tempf);
        //lcd_puts(buffer);
        //lcd_puts("\f");
        __delay_ms(300);
        termopar = 230.45;
        sprintf(buffer,"\fLa temperatura es:\n%d.%d",temph,templ);
        lcd_puts(buffer);
        //sprintf(buffer,"\ntermopar: %.2f",termopar);
        //lcd_puts(buffer);
        lcd_gotoxy(9,2);// (columna,fila)
        lcd_puts("holas");
              
        if (temph >= 24){
            LATAbits.LATA0 = 1;
        }else{
            LATAbits.LATA0 = 0;
        }
        LATAbits.LATA3 = !LATAbits.LATA3;*/
/**
 End of File
 * sprintf(buffer,"\nla hora es:\n%i:%i:%i",hr,min,seg);
        lcd_puts(buffer);
        sprintf(buffer,"la hora es: %i:%i:%i\n\n",hr,min,seg);
        printf(buffer);
        seg++;
        if(seg==60){
            seg=0;
            min++;
            if (min == 60){
                min = 0;
                hr++;
                if(hr == 24){
                    hr=0;
                }
            }            
        }
*/