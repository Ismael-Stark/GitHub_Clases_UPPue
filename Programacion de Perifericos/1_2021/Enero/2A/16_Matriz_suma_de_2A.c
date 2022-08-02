#include <stdio.h>
//hacer la suma de matrices A + B de tamaño mxn
//el tamaño se debe de pedir y si coincidenpodran
//realizar la operacion
int main(){
	int i,j, m,n, contador = 1;
	
	int A[m][n],B[m][3],C[3][3];
	
	
	printf("matriz de 3x3\n");
	//matrizA
	for ( i = 0; i < 3; i++ ) { //filas
		for ( j = 0; j< 3; j++ ) { //columnas
			printf("Dame un numero de la matriz A: ");
			scanf("%d",&contador);
			A[ i ][j] = contador;
		}
	}
	
	for ( i = 0; i < 3; i++ ) { //filas
		for ( j = 0; j < 3; j++ ) { 
			printf("\t%i",A[ i ][j] );
		}
		printf("\n");
	}
	
	
	//matrizB
	for ( i = 0; i < 3; i++ ) { //filas
		for ( j = 0; j< 3; j++ ) { //columnas
			printf("Dame un numero de la matriz B: ");
			scanf("%d",&contador);
			B[ i ][j] = contador;
		}
	}
	
	for ( i = 0; i < 3; i++ ) { //filas
		for ( j = 0; j < 3; j++ ) { 
			printf("\t%i",B[ i ][j] );
		}
		printf("\n");
	}
	
	
	//matrizC
	for ( i = 0; i < 3; i++ ) { //filas
		for ( j = 0; j< 3; j++ ) { //columnas
			C[ i ][ j ] = A[ i ][ j ] + B[ i ][ j ];
		}
	}
	
	printf("\n La suma de A + B es:\n");
	for ( i = 0; i < 3; i++ ) { //filas
		for ( j = 0; j < 3; j++ ) { 
			printf("\t%i",C[ i ][j] );
		}
		printf("\n");
	}
}