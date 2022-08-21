/**
 * Palantilla para clases XD
*/

#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
#include "LCD_i2c.h"
//#include "misdefiniciones.h"
#include "DS18b20.h"
//#include "1wire.h"

void main(void)
{
    uint16_t    raw_temp;
    uint8_t     d= 0,x=0, temp[20];
    int8_t      e=0;
    float temps =0;
    // initialize the device
    SYSTEM_Initialize();
    lcd_init();

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
//    delay_ms(500);
//    printf("hola\n");
//    delay_ms(500);
    TRISCbits.TRISC7 = 0;
    LATCbits.LATC7 = 1;
    lcd_puts("\fHola");
    //printf("la temperatura es: %f\n",temps);
    while (1)
    {
//        temps = ds18b20_read();
//        printf("la temperatura es: %f\n",temps);
//        sprintf(temp,"\fLa temp es:\n%.2f",temps);
        
        ds18b20_readd(&e,&d);
        printf("la temperatura es: %d.%d\n",e,d);
        sprintf(temp,"\fLa temp es:\n%d.%d\n",e,d);
        
        lcd_puts(temp);
       // x++;
        
//        if(ds18b20_leer(&raw_temp)){
//            if(raw_temp & 0x8000)  // if the temperature is negative
//            {
//                temp[0] = '-';             // put minus sign (-)
//                raw_temp = (~raw_temp) + 1;  // change temperature value to positive form
//            }else{
//                if((raw_temp >> 4) >= 100)  // if the temperature >= 100 °C
//                    temp[0] = '1';            // put 1 of hundreds
//                else                        // otherwise
//                    temp[0] = ' ';            // put space ' '
//            }
//
//            // put the first two digits ( for tens and ones)
//            temp[1] = ( (raw_temp >> 4) / 10 ) % 10 + '0';  // put tens digit
//            temp[2] =   (raw_temp >> 4)        % 10 + '0';  // put ones digit
//
//            // put the 4 fraction digits (digits after the point)
//            // why 625?  because we're working with 12-bit resolution (default resolution)
//            temp[4] = ( (raw_temp & 0x0F) * 625) / 1000 + '0';          // put thousands digit
//            temp[5] = (((raw_temp & 0x0F) * 625) / 100 ) % 10 + '0';    // put hundreds digit
//            temp[6] = (((raw_temp & 0x0F) * 625) / 10 )  % 10 + '0';    // put tens digit
//            temp[7] = ( (raw_temp & 0x0F) * 625) % 10 + '0';            // put ones digit
//            printf("La lemperatura es: %s",temp);
//    
//        }else{
//          printf("Error\n");
//        }

        delay_ms(1000);   // wait 1 second
        //printf("hola mundo\n");
        //__delay_ms(500);
        // Add your application code
    }
}
/**
 End of File
*/