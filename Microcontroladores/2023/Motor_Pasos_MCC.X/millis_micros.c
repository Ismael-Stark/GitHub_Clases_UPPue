/*
 * File:   millis_micros.c
 * Author: Edicion
 *
 * Created on 11 de noviembre de 2023, 10:25 AM
 */

#include"millis_micros.h"
#include <xc.h>


uint32_t micros() {
    return ticks_us;
}

uint32_t millis() {    
    return ticks_ms;
}
