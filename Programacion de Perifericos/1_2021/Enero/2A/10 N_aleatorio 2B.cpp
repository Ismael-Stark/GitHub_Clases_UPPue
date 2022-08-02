#include <stdio.h>
#include <stdlib.h>

int main(){
	//volatile int aleatorio, x;
	
	//aleatorio =  1 + ( rand() % 6 );
	//printf("%10d",aleatorio);
	//srand( 500 ); //semilla
	
	for ( int i = 1; i <= 20; i++ ) {
		/* obtiene y despliega un número aleatorio entre 1 y 6 */
		//%10d genera un tabulador antes de imprimir el numero
		//printf( "%10d",  ( 1 + rand() % 6 ) );// genera numeros aleatorios entre 1 y 6
		//printf( "%10d",  ( 1 + rand()%100) );	// genera numeros aleatorios entre 1 y 100
		printf( "%10d",  ( 50 + rand()%50) );	// genera numeros aleatorios entre 50 y 100
		//printf( "%d\t",  ( 1 + rand()%35) );	// genera numeros aleatorios entre 1 y 35
		/* si el contador es divisible entre 5, comienza una nueva línea de salida */
		if ( i % 5 == 0 ) {
			printf( "\n" );
		} /* fin de if */
	} /* fin de for */
}