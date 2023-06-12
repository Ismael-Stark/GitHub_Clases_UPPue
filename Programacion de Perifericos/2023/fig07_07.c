 /* Figura 7.7: fig07_07.c
02 Eleva  al  cubo  una  variable  mediante  una  llamada  por  referencia,  con  un
apuntador como argumento */

#include <stdio.h>

void cuboPorReferencia( int *ptrN ); /* prototipo */

int main()
{
int numero = 5; /* inicializa numero */

printf( "El valor original de numero es %d", numero );

/* pasa la dirección de numero a cuboPorReferencia */
cuboPorReferencia( &numero );

printf( "\nEl nuevo valor de numero es %d\n", numero );

return 0; /* indica terminación exitosa */

 } /* fin de main */
 /* calcula el cubo de *ptrN; modifica la variable numero en main */
 void cuboPorReferencia( int *ptrN )
 {
 *ptrN = *ptrN * *ptrN * *ptrN;  /* cubo de *ptrN */
 } /* fin de la función cuboPorReferencia */