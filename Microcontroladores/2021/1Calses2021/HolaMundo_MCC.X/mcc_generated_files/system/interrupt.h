/**
  Generated Interrupt Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    interrupt.h

  @Summary:
    This is the Interrupt Manager file generated

  @Description:
    This header file provides implementations for global interrupt handling.
    For individual peripheral handlers please see the peripheral driver for
    all modules selected in the GUI.
    Generation Information :
        Driver Version    :  2.03
    The generated drivers are tested against the following:
        Compiler          :  XC8 v2.2 or later
        MPLAB 	          :  MPLABX v5.45
*/

/*
Copyright (c) [2012-2020] Microchip Technology Inc.  

    All rights reserved.

    You are permitted to use the accompanying software and its derivatives 
    with Microchip products. See the Microchip license agreement accompanying 
    this software, if any, for additional info regarding your rights and 
    obligations.
    
    MICROCHIP SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT 
    WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT 
    LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT 
    AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP OR ITS
    LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT 
    LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE 
    THEORY FOR ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES INCLUDING BUT NOT 
    LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES, 
    OR OTHER SIMILAR COSTS. 
    
    To the fullest extend allowed by law, Microchip and its licensors 
    liability will not exceed the amount of fees, if any, that you paid 
    directly to Microchip to use this software. 
    
    THIRD PARTY SOFTWARE:  Notwithstanding anything to the contrary, any 
    third party software accompanying this software is subject to the terms 
    and conditions of the third party's license agreement.  To the extent 
    required by third party licenses covering such third party software, 
    the terms of such license will apply in lieu of the terms provided in 
    this notice or applicable license.  To the extent the terms of such 
    third party licenses prohibit any of the restrictions described here, 
    such restrictions will not apply to such third party software.
*/

#ifndef INTERRUPT_H
#define INTERRUPT_H


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    This macro will enable global interrupts.
 * @Example
    INTERRUPT_GlobalInterruptEnable();
 */
#define INTERRUPT_GlobalInterruptEnable() (INTCONbits.GIE = 1)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    This macro will disable global interrupts.
 * @Example
    INTERRUPT_GlobalInterruptDisable();
 */
#define INTERRUPT_GlobalInterruptDisable() (INTCONbits.GIE = 0)

/**
 * @Param
    none
 * @Returns
    0 - Global Interrupt Disabled
    1 - Global Interrupt Enabled
 * @Description
    This macro will return the global interrupt enable bit status.
 * @Example
    INTERRUPT_GlobalInterruptStatus();
 */
#define INTERRUPT_GlobalInterruptStatus() (INTCONbits.GIE)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    This macro will enable peripheral interrupts.
 * @Example
    INTERRUPT_PeripheralInterruptEnable();
 */
#define INTERRUPT_PeripheralInterruptEnable() (INTCONbits.PEIE = 1)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    This macro will disable peripheral interrupts.
 * @Example
    INTERRUPT_PeripheralInterruptDisable();
 */
#define INTERRUPT_PeripheralInterruptDisable() (INTCONbits.PEIE = 0)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Initializes PIC18 peripheral interrupt priorities; enables/disables priority vectors
 * @Example
    INTERRUPT_Initialize();
 */
void INTERRUPT_Initialize (void);

/**
  @Summary
    Clears the interrupt flag for INT

  @Description
    This routine clears the interrupt flag for the external interrupt, INT.
 
  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void INT_ISR(void)
    {
        // User Area Begin->code

        // User Area End->code
        EXT_INT_InterruptFlagClear();
    }
    </code>

*/
#define EXT_INT_InterruptFlagClear()       (PIR0bits.INTF = 0)

/**
  @Summary
    Clears the interrupt enable for INT

  @Description
    This routine clears the interrupt enable for the external interrupt, INT.
    After calling this routine, external interrupts on this pin will not be serviced by the 
    interrupt handler, INT.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    Changing the external interrupt edge detect from negative to positive
    <code>
    // clear the interrupt enable
    EXT_INT_InterruptDisable();
    // change the edge
    EXT_INT_risingEdgeSet();
    // clear the interrupt flag and re-enable the interrupt
    EXT_INT_InterruptFlagClear();
    EXT_INT_InterruptEnable();
    </code>

*/
#define EXT_INT_InterruptDisable()     (PIE0bits.INTE = 0)

/**
  @Summary
    Sets the interrupt enable for INT

  @Description
    This routine sets the interrupt enable for the external interrupt, INT.
    After calling this routine, external interrupts on this pin will be serviced by the 
    interrupt handler, INT.
 
  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    Setting the external interrupt to handle positive edge interrupts
    <code>
    // set the edge
    EXT_INT_risingEdgeSet();
    // clear the interrupt flag and enable the interrupt
    EXT_INT_InterruptFlagClear();
    EXT_INT_InterruptEnable();
    </code>

*/
#define EXT_INT_InterruptEnable()       (PIE0bits.INTE = 1)

/**
  @Summary
    Sets the edge detect of the external interrupt to negative edge.

  @Description
    This routine set the edge detect of the extern interrupt to negative edge.  
    After this routine is called the interrupt flag will be set when the external 
    interrupt pins level transitions from a high to low level.
 
  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    Setting the external interrupt to handle negative edge interrupts
    <code>
    // set the edge
    EXT_INT_risingEdgeSet();
    // clear the interrupt flag and enable the interrupt
    EXT_INT_InterruptFlagClear();
    EXT_INT_InterruptEnable();
    </code>

*/
#define EXT_INT_risingEdgeSet()          (INTCONbits.INTEDG = 1)

/**
  @Summary
    Sets the edge detect of the external interrupt to positive edge.

  @Description
    This routine set the edge detect of the extern interrupt to positive edge.  
    After this routine is called the interrupt flag will be set when the external 
    interrupt pins level transitions from a low to high level.
 
  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    Setting the external interrupt to handle positive edge interrupts
    <code>
    // set the edge
    EXT_INT_fallingEdgeSet();
    // clear the interrupt flag and enable the interrupt
    EXT_INT_InterruptFlagClear();
    EXT_INT_InterruptEnable();
    </code>

*/
#define EXT_INT_fallingEdgeSet()          (INTCONbits.INTEDG = 0)

/**
   Section: External Interrupt Handlers
 */
/**
  @Summary
    Interrupt Service Routine for EXT_INT - INT pin

  @Description
    This ISR will execute whenever the signal on the INT pin will transition to the preconfigured state.
    
  @Preconditions
    Interrupt Manager intializer called

  @Returns
    None.

  @Param
    None.

*/
void INT_ISR(void);

/**
  @Summary
    Callback function for EXT_INT - INT

  @Description
    Allows for a specific callback function to be called in the INT ISR.
    It also allows for a non-specific interrupt handler to be called at runtime.
    
  @Preconditions
    Interrupt Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    INTERRUPT_Initializer();
    void INT_CallBack();

*/
void INT_CallBack(void);

/**
  @Summary
    Interrupt Handler Setter for EXT_INT - INT pin

  @Description
    Allows selecting an interrupt handler for EXT_INT - INT at application runtime
    
  @Preconditions
    Interrupt Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    INTERRUPT_Initializer();
    INT_SetInterruptHandler(MyInterruptHandler);

*/
void INT_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for EXT_INT - INT pin

  @Description
    This is the dynamic interrupt handler to be used together with the INT_SetInterruptHandler() method.
    This handler is called every time the INT ISR is executed and allows any function to be registered at runtime. 
    
  @Preconditions
    Interrupt Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    INTERRUPT_Initializer();
    INT_SetInterruptHandler(INT_InterruptHandler);

*/
extern void (*INT_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for EXT_INT - INT pin

  @Description
    This is a predefined interrupt handler to be used together with the INT_SetInterruptHandler() method.
    This handler is called every time the INT ISR is executed. 
    
  @Preconditions
    Interrupt Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    INTERRUPT_Initializer();
    INT_SetInterruptHandler(INT_DefaultInterruptHandler);

*/
void INT_DefaultInterruptHandler(void);

#endif  // INTERRUPT_H
/**
 End of File
*/