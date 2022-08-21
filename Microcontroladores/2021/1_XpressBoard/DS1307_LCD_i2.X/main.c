

#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
#include "ds1307yo.h"
#include "LCD_i2c.h"
#include "SofSerial.h"

#define address 0b0111000


void main(void)
{
    uint8_t contador = 0;
    uint8_t temph, templ;
    uint8_t buffer[40];
    uint8_t hr,min,sec;
    uint8_t day,mth,year,dow;
    // initialize the device
    SYSTEM_Initialize();
    SoftWareUart_Init();

    ds1307_init();
    //ds1307_set_date_time(day,  mth,  year,  dow,  hr,  min,  sec);
    //ds1307_set_date_time(4,11,21,4,15,20,00);
    lcd_init();
    lcd_puts("\fHola\nds3231");
    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();
    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();
    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        temph = I2C1_Read1ByteRegister(address, 0x00);
        templ = I2C1_Read1ByteRegister(address, 0x02);
        templ >>= 6;
        templ *= 25;
        printf("la temperatura es: %d.%d\t", temph,templ);
        printf("%d\n",contador++);
        
        sprintf(buffer,"La temp es: %d.%d\n", temph,templ);
        Software_UART_Write_Text(buffer);
        
        ds1307_get_time(&hr,&min,&sec);
        sprintf(buffer,"%d:%d:%d\t",hr,min,sec);
        printf(buffer);
        Software_UART_Write_Text(buffer);
        
        sprintf(buffer,"\f%d.%2dC, %d:%d:%2d\t",temph,templ,hr,min,sec);
        lcd_puts(buffer);
        __delay_ms(1);
        ds1307_get_date(&day,&mth,&year,&dow);
        sprintf(buffer,"%d-%d-%d\n\n",day,mth,year);
        printf(buffer);
        Software_UART_Write_Text(buffer);
        
        sprintf(buffer,"\n%d-%d-%d\n\n",day,mth,year);
        lcd_puts(buffer);
        __delay_ms(1300);
        // Add your application code
    }
}
/**
 End of File
*/