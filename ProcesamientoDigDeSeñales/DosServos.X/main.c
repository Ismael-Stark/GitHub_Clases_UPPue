
#include "mcc_generated_files/mcc.h"
#include "MultiServo.h"

/*
                         Main application
 */
void main(void)
{
    uint16_t contador = 0;
    bool valid_command;
    uint8_t i;
    // initialize the device
    SYSTEM_Initialize();
    TRISBbits.TRISB0 =0;
    TRISBbits.TRISB1 =0;
    WPUB =0;
    LATBbits.LATB0 =0;
    LATBbits.LATB1 =0;

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    while (1)
    {
        // Add your application code
        //printf("%i\n",contador++);
        //__delay_ms(500);
        if(command!='\0'){
          //command=toupper(command);//#include <ctype.h> //Convierte un carácter a mayúsculas
          valid_command=0;
          printf("%c\r\n>",command);

          if(command=='?'){
            menuServo();
            valid_command=1;
          }
          if(command=='I'){
            printf("> All to Minimum\r\n>");
            for(i=0;i<2;i++) Servo_PWM[i]=Ticks4Minimum;
            valid_command=1;
          }
          if(command=='M'){
            printf("> All to Center\r\n>");
            for(i=0;i<2;i++) Servo_PWM[i]=Ticks4Center;
            valid_command=1;
          }
          if(command=='F'){
            printf("> All to Maximum\r\n>");
            for(i=0;i<2;i++) Servo_PWM[i]=Ticks4Maximum;
            valid_command=1;
          }
          if(command=='+'){
            printf("> Step to front\r\n>");
            for(i=0;i<2;i++) Servo_PWM[i]+=80;
            valid_command=1;
          }
          if(command=='-'){
            printf("> Step to back\r\n>");
            for(i=0;i<2;i++) Servo_PWM[i]-=80;
            valid_command=1;
          }

          if(!valid_command) printf("?\r\n>");
          command='\0';
        }
    }
}
/**
 End of File
*/