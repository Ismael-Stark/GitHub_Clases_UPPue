
// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef MultiServo
#define	MultiServo

#include <xc.h> // include processor files - each processor file is guarded.
#include "mcc_generated_files/mcc.h"

    #define SERVO1 LATBbits.LATB0
    #define SERVO2 LATBbits.LATB1
    /*#define SERVO3 LATBbits.LATB2
    #define SERVO4 LATBbits.LATB3
    #define SERVO5 LATBbits.LATB4
    #define SERVO6 LATBbits.LATB05
    #define SERVO7 LATCbits.LATC2
    #define SERVO8 LATCbits.LATC7*/

    char SERVO3,SERVO4,SERVO5,SERVO6,SERVO7 ,SERVO8;

    const uint16_t Ticks4Window = 0x9C40; //40000 PWM Window for servo = 2.5 ms x 8 = 20 ms
    const uint16_t Ticks4Minimum = 0X2BC0; // PWM High for Minimum Position = 0.7 ms
    const uint16_t Ticks4Center = 24000; // PWM High for Center Position = 1.5 ms
    const uint16_t Ticks4Maximum = 0X8FC0; // PWM High for Maximum Position = 2.3 ms


    uint8_t command;
    uint16_t Servo_PWM[8]={24000,24000,0,0,0,0,0,0};
    uint8_t  Servo_Idx=0;
    bool     SERVO1_ON=1;
    bool     SERVO2_ON=1;
    bool     SERVO3_ON=0;
    bool     SERVO4_ON=0;
    bool     SERVO5_ON=0;
    bool     SERVO6_ON=0;
    bool     SERVO7_ON=0;
    bool     SERVO8_ON=0;
    uint8_t     flag_Phase;
    
    static uint16_t Ticks4NextInterrupt=25536;//0x63C0
    
    
    void servoMenu(void);
    
    
    /*
    #int_rda
    void serial_isr(void){

      if(kbhit()){
        command=getc();
      }
    }
      
    #int_timer1
    void timer1_isr(void){

      if(flag_Phase==0){
        if(Servo_Idx==0 && SERVO1_ON) output_high(SERVO1);
        if(Servo_Idx==1 && SERVO2_ON) output_high(SERVO2);
        if(Servo_Idx==2 && SERVO3_ON) output_high(SERVO3);
        if(Servo_Idx==3 && SERVO4_ON) output_high(SERVO4);
        if(Servo_Idx==4 && SERVO5_ON) output_high(SERVO5);
        if(Servo_Idx==5 && SERVO6_ON) output_high(SERVO6);
        if(Servo_Idx==6 && SERVO7_ON) output_high(SERVO7);
        if(Servo_Idx==7 && SERVO8_ON) output_high(SERVO8);
        Ticks4NextInterrupt = 65535 - Servo_PWM[Servo_Idx];
        set_timer1(Ticks4NextInterrupt);
      }
      if(flag_Phase==1){
        if(Servo_Idx==0 && SERVO1_ON) output_low(SERVO1);
        if(Servo_Idx==1 && SERVO2_ON) output_low(SERVO2);
        if(Servo_Idx==2 && SERVO3_ON) output_low(SERVO3);
        if(Servo_Idx==3 && SERVO4_ON) output_low(SERVO4);
        if(Servo_Idx==4 && SERVO5_ON) output_low(SERVO5);
        if(Servo_Idx==5 && SERVO6_ON) output_low(SERVO6);
        if(Servo_Idx==6 && SERVO7_ON) output_low(SERVO7);
        if(Servo_Idx==7 && SERVO8_ON) output_low(SERVO8);
        Ticks4NextInterrupt = 65535 - Ticks4Window + Servo_PWM[Servo_Idx];
        set_timer1(Ticks4NextInterrupt);
        if(++Servo_Idx>7) Servo_Idx=0;
      }
      ++flag_Phase;
    }*/


#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

