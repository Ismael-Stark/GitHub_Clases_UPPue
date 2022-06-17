/* Figura 6.3: fig06_03.c
inicializar un arreglo */
#include <stdio.h>

/* la función main comienza la ejecución del programa */
int main()
{
	int n[ 10 ]; /* n es un arreglo de 10 enteros */
	int i; /* contador */

	/* inicializa los elementos del arreglo n a 0 del arreglo */
	for ( i = 0; i < 10; i++ ) {
		n[ i ] = 8; /* establece el elemento i a 0 */
	} /* fin de for */

	printf( "%s%13s\n", "Elemento", "Valor" );

	/* muestra el contenido del arreglo n en forma tabular */
	for ( i = 0; i < 10; i++ ) {
		printf( "%7d%13d\n", i, n[ i ] );
	} /* fin de for */

return 0; /* indica terminación exitosa */

} /* fin de main */