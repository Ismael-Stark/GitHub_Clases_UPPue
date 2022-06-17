#include <stdio.h>

int main(){
	int A[3][3];
	int i,j, contador = 1;
	
	printf("matriz de 3x3\n");
	
	for ( i = 0; i < 3; i++ ) { //filas
		for ( j = 0; j< 3; j++ ) { //columnas
			printf("Dame un numero: ");
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
}