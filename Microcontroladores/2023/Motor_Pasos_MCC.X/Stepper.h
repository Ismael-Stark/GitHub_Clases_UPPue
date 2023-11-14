/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.
#include "mcc_generated_files/mcc.h"
#include "millis_micros.h"

// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 
    
    //Stepper(int number_of_steps, int motor_pin_1, int motor_pin_2);
    //Stepper(int number_of_steps, int motor_pin_1, int motor_pin_2,
    //                             int motor_pin_3, int motor_pin_4);
    //Stepper(int number_of_steps, int motor_pin_1, int motor_pin_2,
    //                             int motor_pin_3, int motor_pin_4,
    //                             int motor_pin_5);
    
    void stepper_init(int number_of_steps);
    // speed setter method:
    void stepper_setSpeed(long whatSpeed);
    // mover method:
    void stepper_step(int steps_to_move);
    int stepper_version(void);
    
    
    static void stepMotor(int this_step);
    static void delay_us_stepper(uint32_t x);
    
    struct Stepper{
        int direction;            // Direction of rotation
        unsigned long step_delay; // delay between steps, in us, based on speed
        int number_of_steps;      // total number of steps this motor can take
        int pin_count;            // how many pins are in use.
        int step_number;          // which step the motor is on

        // motor pin numbers:
//        int motor_pin_1;
//        int motor_pin_2;
//        int motor_pin_3;
//        int motor_pin_4;
//        int motor_pin_5;          // Only 5 phase motor

        unsigned long last_step_time; // timestamp in us of when the last step was taken
    };

    //struct Stepper *stepper;
    struct Stepper stepper;
    
    
    #define motor_pin_1 LATFbits.LATF7
    #define motor_pin_2 LATFbits.LATF6
    #define motor_pin_3 LATFbits.LATF5
    #define motor_pin_4 LATFbits.LATF4

    #define motor_pin_1_T TRISFbits.TRISF7
    #define motor_pin_2_T TRISFbits.TRISF6
    #define motor_pin_3_T TRISFbits.TRISF5
    #define motor_pin_4_T TRISFbits.TRISF4

    
    
    
    

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

