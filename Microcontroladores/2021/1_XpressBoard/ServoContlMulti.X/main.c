
#include "mcc_generated_files/mcc.h"
#include <ctype.h>//Convierte un carácter a mayúsculas
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
    SERVO1 = 0;
    SERVO2 = 0;
        
    __delay_ms(100);
    command='\0';
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
        
        //printf("%i\n",contador++);
        //LED1_Toggle();
        //LATBbits.LATB0 = !LATBbits.LATB0;
        //__delay_ms(500);
        // Comandos serie
        if(command!='\0'){
          //command=toupper(command);//#include <ctype.h> //Convierte un carácter a mayúsculas
          valid_command=0;
          //printf("%c\r\n>",command);
          
          if(command=='a'){
            Servo_PWM[0] -= 580;
            if ( Servo_PWM[0] < Ticks4Minimum) {
                Servo_PWM[0] = Ticks4Minimum;
            }
            valid_command=1;
          }
          if(command=='d'){
            Servo_PWM[0] += 580;
            if ( Servo_PWM[0] > Ticks4Maximum) {
                Servo_PWM[0] = Ticks4Maximum;
            }
            valid_command=1;
          }
          if(command=='j'){
            Servo_PWM[0] = Ticks4Minimum;
            valid_command=1;
          }
          if(command=='k'){
            Servo_PWM[0] = Ticks4Center;
            valid_command=1;
          }
          if(command=='l'){
            Servo_PWM[0] = Ticks4Maximum;
            valid_command=1;
          }
          
          
          
          if(command=='w'){
            Servo_PWM[1] += 580;
            valid_command=1;
          }
          if(command=='s'){
            Servo_PWM[1] -= 580;
            valid_command=1;
          }
           if(command=='i'){
            Servo_PWM[1] = Ticks4Minimum;
            valid_command=1;
          }
          if(command=='o'){
            Servo_PWM[1] = Ticks4Center;
            valid_command=1;
          }
          if(command=='p'){
            Servo_PWM[1] = Ticks4Maximum;
            valid_command=1;
          }
          

          //if(!valid_command) printf("?\r\n>");
          command='\0';
        }
        // Add your application code
    }
}
/**
 End of File
*/


/*
 * if(command=='?'){
            servoMenu();
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
 */