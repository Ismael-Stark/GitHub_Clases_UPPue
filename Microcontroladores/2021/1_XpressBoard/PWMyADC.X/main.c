
#include "mcc_generated_files/mcc.h"


void main(void)
{
    uint16_t i=0, pot;
    // initialize the device
    SYSTEM_Initialize();
    //RC0PPS = 0x10;   //RC0->EUSART:TX;    
    //RXPPS = 0x11;   //RC1->EUSART:RX;    
    RA3PPS = 0x09;   //RA3->CCP5:CCP5;    
    //RA1PPS = 0x0D;   //RA1->CCP5:CCP5;    
    //RA2PPS = 0x0D;   //RA2->CCP5:CCP5;    
    //RA0PPS = 0x0D;   //RA0->CCP5:CCP5;    
    RC7PPS = 0x09;   //RC7->CCP1:CCP1;  

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

    while (1)
    {
        pot = ADCC_GetSingleConversion(channel_ANA4);
        PWM1_LoadDutyValue(pot);
        __delay_ms(100);
        
        /*for (i=0;i<1024;i++){
            PWM1_LoadDutyValue(i);
            __delay_ms(1);            
        }
        for (i=1023;i>0;i--){
            PWM1_LoadDutyValue(i);
            __delay_ms(1);            
        }*/
        
        //printf("%i\n",i);
        //__delay_ms(10);
        // Add your application code
    }
}
/**
 End of File
*/