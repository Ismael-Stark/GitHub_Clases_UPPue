 /* Figura 5.3: fig05_03.c
Creación y uso de una función definida por el usuario */
#include <stdio.h>

int cuadrado( int y ); /* prototipo de la función */

/* la función main comienza la ejecución del programa */
int main()
{
    int x; /* contador */

    /* repite 10 veces el ciclo y calcula e imprime el cuadrado de x */
    for ( x = 1; x <= 10; x++ ) {
        printf( "%d ", cuadrado( x ) ); /* llamada a la función */
    } /* fin de for */

    printf( "\n" );

    return 0; /* indica terminación exitosa */

}/* fin de main */

/* definición de la función cuadrado, devuelve el cuadrado del parámetro */
int cuadrado( int y ) /* y es una copia del argumento para la función */
{
    return y * y; /* devuelve el cuadrado de y como un int */

} /* fin de la función cuadrado */