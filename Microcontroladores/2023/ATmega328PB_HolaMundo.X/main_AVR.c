

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#define x 750

int main(void) {
    /* Replace with your application code */
    DDRB |= (1<<DDRB5);//COMO UNA SALIDA
    PORTB &= ~(1<<PORTB5);
    while (1) {
        PORTB |= (1<<PORTB5);
        _delay_ms(x);
        PORTB &= ~(1<<PORTB5);
        _delay_ms(x);        
    }
}

//Pasos para dar de alta el progrmadior de la tarjeta
//file->projetc properties
//conf:[default] -> seleccionar "Atmega 328pb...." como programador
//****aparecera "mDEBUG"
//mDEBUG -> option categories-> Communication.
//interface->ISP