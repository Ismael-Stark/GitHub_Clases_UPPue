#include <stdio.h>

int main()
{
	int A[3][3],B[3][3], C[3][3]; 
	int i,j, contador = 1; /* contador */
	
	printf("progrma que suma dos matrices de 3x3\n");
	for ( i = 0; i < 3; i++ ) { //filas
		for( j = 0; j < 3; j++ ){ //columnas
			printf("Dame elemento de la matriz A: ");
			scanf("%i",&contador);
			A[ i ][ j ] = contador; /* establece el elemento i a 0 */
		}
	}
	for ( i = 0; i < 3; i++ ) { //filas
		for( j = 0; j < 3; j++ ){ //columnas
			printf("\t%i",A[ i ][ j ]);
		}
		printf("\n");
	}
	
	
	
	for ( i = 0; i < 3; i++ ) { //filas
		for( j = 0; j < 3; j++ ){ //columnas
			printf("Dame elemento de la matriz B: ");
			scanf("%i",&contador);
			B[ i ][ j ] = contador; /* establece el elemento i a 0 */
		}
	}
	for ( i = 0; i < 3; i++ ) { //filas
		for( j = 0; j < 3; j++ ){ //columnas
			printf("\t%i",B[ i ][ j ]);
		}
		printf("\n");
	}
	
	//SUMA DE MATRICES
	for ( i = 0; i < 3; i++ ) { //filas
		for( j = 0; j < 3; j++ ){ //columnas
			C[ i ][ j ] = A[ i ][ j ] + B[ i ][ j ];
		}
	}
	
	printf("\nLa suma de A + B es: \n");
	for ( i = 0; i < 3; i++ ) { //filas
		for( j = 0; j < 3; j++ ){ //columnas
			printf("\t%i",C[ i ][ j ]);
		}
		printf("\n");
	}

return 0; 

} /* fin de main */