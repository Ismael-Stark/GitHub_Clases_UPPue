  
#ifndef MultiServo
#define	MultiServo

#include <xc.h> 
#include "mcc_generated_files/mcc.h"
    #define SERVO1 LATBbits.LATB0
    #define SERVO2 LATBbits.LATB1
    /*#define SERVO3 LATBbits.LATB2
    #define SERVO4 LATBbits.LATB3
    #define SERVO5 LATBbits.LATB4
    #define SERVO6 LATBbits.LATB05
    #define SERVO7 LATCbits.LATC2
    #define SERVO8 LATCbits.LATC7*/
    char SERVO3,SERVO4,SERVO5,SERVO6,SERVO7 ,SERVO8;//solo comentar la linea si se van a usar mas servos
    
    const uint16_t Ticks4Window = 0x9C40; //40000 PWM Window for servo = 2.5 ms x 8 = 20 ms
    const uint16_t Ticks4Minimum = 0X2580; //9600 PWM High for Minimum Position = 0.7 ms
    const uint16_t Ticks4Center = 24000; // PWM High for Center Position = 1.5 ms
    const uint16_t Ticks4Maximum = 0x8fc0;      //36800 PWM High for Center Position = 2.3 ms

    uint8_t command;//lee comando por puerto serial
    uint16_t Servo_PWM[8]={0x8fc0,0X8FC0,0,0,0,0,0,0};/// tiempos para saber el angulo del servo
    uint8_t  Servo_Idx=0;//para saber que servo debo activar
    bool     SERVO1_ON=1;//por si no quiero usar algunos servos
    bool     SERVO2_ON=1;
    bool     SERVO3_ON=0;
    bool     SERVO4_ON=0;
    bool     SERVO5_ON=0;
    bool     SERVO6_ON=0;
    bool     SERVO7_ON=0;
    bool     SERVO8_ON=0;
    uint8_t     flag_Phase;//para saber si debo mandar el pulso en alto o bajo para controlar el servo
    static uint16_t Ticks4NextInterrupt = 0x63C0;

    void menuServo();
#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

