
#ifndef XC_UART
#define	XC_UART

#include <xc.h>
#include"main.h"
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
        
        

#define rxFlag ((PIR3>>5) & 0x01) //RCIF==0 significa que el bufer esta vacio, aun no llegan datos
///declarar prototipos de funciones y variables
void serial_init(uint32_t baudios);

void uart_tx(uint8_t dato);
void uart_send_string(uint8_t *dato);
uint8_t uart_rx();


#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif

#endif	/* XC_HEADER_TEMPLATE_H */

