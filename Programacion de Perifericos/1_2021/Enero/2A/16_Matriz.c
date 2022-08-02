#include <stdio.h>

int main()
{
	int n[3][3]; 
	int i,j, contador = 1; /* contador */

	for ( i = 0; i < 3; i++ ) { //filas
		for( j = 0; j < 3; j++ ){ //columnas
			n[ i ][ j ] = contador++; /* establece el elemento i a 0 */
		}
	}


	for ( i = 0; i < 3; i++ ) { //filas
		for( j = 0; j < 3; j++ ){ //columnas
			printf("\t%i",n[ i ][ j ]);
		}
		printf("\n");
	}

return 0; 

} /* fin de main */