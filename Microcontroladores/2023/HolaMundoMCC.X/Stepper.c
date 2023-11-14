/*
 * File:   Stepper.c
 * Author: PicTrance
 *
 * Created on 10 de noviembre de 2023, 12:55 PM
 */


#include "Stepper.h"


void stepper_init(int number_of_steps){

    stepper.step_number = 0;    // which step the motor is on
    stepper.direction = 0;      // motor direction
    stepper.last_step_time = 0; // timestamp in us of the last step taken
    stepper.number_of_steps = number_of_steps; // total number of steps for this motor
    
    // setup the pins on the microcontroller:
    motor_pin_1_T = OUTPUT;
    motor_pin_2_T = OUTPUT;
    motor_pin_3_T = OUTPUT;
    motor_pin_4_T = OUTPUT;
    
    WPUF=0;
    ANSELF = 0;
    
    motor_pin_1 = LOW;
    motor_pin_2 = LOW;
    motor_pin_3 = LOW;
    motor_pin_4 = LOW;

    
    
    


    // When there are 4 pins, set the others to 0:
    //stepper->motor_pin_5 = 0;

    // pin_count is used by the stepMotor() method:
    //stepper->pin_count = 4;
    
}

void stepper_setSpeed(long whatSpeed){
    stepper.step_delay = 60L * 1000L * 1000L/ stepper.number_of_steps / whatSpeed;
    //stepper.step_delay = 60L * 1000L / stepper.number_of_steps / whatSpeed;
}

void stepper_step(int steps_to_move){
    
    int steps_left = abs(steps_to_move);  // how many steps to take

    // determine direction based on whether steps_to_mode is + or -:
    if (steps_to_move > 0) { stepper.direction = 1; }
    if (steps_to_move < 0) { stepper.direction = 0; }


    // decrement the number of steps, moving one step each time:
    while (steps_left > 0){
    //unsigned long now;// = micros();
        
    // move only if the appropriate delay has passed:
    //if (now - stepper->last_step_time >= stepper->step_delay)
    //{
      // get the timeStamp of when you stepped:
      //stepper->last_step_time = now;
      // increment or decrement the step number,
      // depending on direction:
        if (stepper.direction == 1){
            stepper.step_number++;
            if (stepper.step_number == stepper.number_of_steps) {
                stepper.step_number = 0;
            }
        }else{
            if (stepper.step_number == 0) {
              stepper.step_number = stepper.number_of_steps;
            }
            stepper.step_number--;
        }
        // decrement the steps left:
        steps_left--;
        // step the motor to step number 0, 1, ..., {3 or 10}
        stepMotor(stepper.step_number % 4);
        
        //} else {
          //yield();
        //}
        //delay_us_stepper(stepper.step_delay );
        __delay_us(5000);
    }
}

int stepper_version(void){
    return 5;
}
    
static void stepMotor(int this_step){
    switch (this_step) {
      case 0:  // 1010
          
        motor_pin_1 = HIGH;
        motor_pin_2 = LOW;
        motor_pin_3 = HIGH;
        motor_pin_4 = LOW;
      break;
      case 1:  // 0110
          
        motor_pin_1 = LOW;
        motor_pin_2 = HIGH;
        motor_pin_3 = HIGH;
        motor_pin_4 = LOW;
      break;
      case 2:  //0101
          
        motor_pin_1 = LOW;
        motor_pin_2 = HIGH;
        motor_pin_3 = LOW;
        motor_pin_4 = HIGH;
      break;
      case 3:  //1001
          
        motor_pin_1 = HIGH;
        motor_pin_2 = LOW;
        motor_pin_3 = LOW;
        motor_pin_4 = HIGH;
      break;
    }
    
}



static void delay_us_stepper(uint32_t x){
   for(uint32_t i = 0; i < x ; i+=3){
      __delay_us(1);
   }
}

/*
 void stepper_init(int number_of_steps){

    stepper->step_number = 0;    // which step the motor is on
    stepper->direction = 0;      // motor direction
    stepper->last_step_time = 0; // timestamp in us of the last step taken
    stepper->number_of_steps = number_of_steps; // total number of steps for this motor
    
    // setup the pins on the microcontroller:
    motor_pin_1 = LOW;
    motor_pin_2 = LOW;
    motor_pin_3 = LOW;
    motor_pin_4 = LOW;

    motor_pin_1_T = OUTPUT;
    motor_pin_2_T = OUTPUT;
    motor_pin_3_T = OUTPUT;
    motor_pin_4_T = OUTPUT;
    
    WPUF=0;
    ANSELF = 0;


    // When there are 4 pins, set the others to 0:
    //stepper->motor_pin_5 = 0;

    // pin_count is used by the stepMotor() method:
    //stepper->pin_count = 4;
    
}

void stepper_setSpeed(long whatSpeed){
    stepper->step_delay = 60L * 1000L * 1000L / stepper->number_of_steps / whatSpeed;
}

void stepper_step(int steps_to_move){
    
    int steps_left = abs(steps_to_move);  // how many steps to take

    // determine direction based on whether steps_to_mode is + or -:
    if (steps_to_move > 0) { stepper->direction = 1; }
    if (steps_to_move < 0) { stepper->direction = 0; }


    // decrement the number of steps, moving one step each time:
    while (steps_left > 0){
    //unsigned long now;// = micros();
    // move only if the appropriate delay has passed:
    //if (now - stepper->last_step_time >= stepper->step_delay)
    //{
      // get the timeStamp of when you stepped:
      //stepper->last_step_time = now;
      // increment or decrement the step number,
      // depending on direction:
        if (stepper->direction == 1){
            stepper->step_number++;
            if (stepper->step_number == stepper->number_of_steps) {
                stepper->step_number = 0;
            }
        }else{
            if (stepper->step_number == 0) {
              stepper->step_number = stepper->number_of_steps;
            }
            stepper->step_number--;
        }
        // decrement the steps left:
        steps_left--;
        // step the motor to step number 0, 1, ..., {3 or 10}
        stepMotor(stepper->step_number % 4);
        
        //printf("step%d\n",stepper->step_number);
        //} else {
          //yield();
        //}
        delay_us_stepper(stepper->step_delay );
    }
}
*/