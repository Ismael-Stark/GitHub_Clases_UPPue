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
© [2021] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
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