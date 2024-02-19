


/***************************Definitions for used Controller Pins****************************/
//
//      MPLABXpress Board              PIC Micro                   
//      Signal Name                    Pin                       Description
//      -----------                    ---------                 ----------------------------------------------
#define LED2                          PIN_A0                   // red LED D2
#define LED3                          PIN_A1                   // red LED D3
#define LED4                          PIN_A2                   // red LED D4
#define LED5                          PIN_A3                   // red LED D5
#define POTI                          PIN_A4                   // potentiometer for analogue input
#define S2                            PIN_A5                   // switch S2 input
#define F188TXU                       PIN_C0                   // RS232 TX
#define F188RXU                       PIN_C1                   // RS232 RX
#define F188ANA1                      PIN_B0                   // analogue input AN, pin 1 of J5



/****************************Definitions for LED switching *********************************/
#define LED2_on()                   output_high(LED2)
#define LED2_off()                  output_low(LED2)
#define LED3_on()                   output_high(LED3)
#define LED3_off()                  output_low(LED3)
#define LED4_on()                   output_high(LED4)
#define LED4_off()                  output_low(LED4)
#define LED5_on()                   output_high(LED5)
#define LED5_off()                  output_low(LED5)
#define all_LEDs_on()               output_high(LED2);output_high(LED3);output_high(LED4);output_high(LED5)
#define all_LEDs_off()              output_low(LED2); output_low(LED3); output_low(LED4); output_low(LED5)
