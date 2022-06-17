#include "stdio.h"
int main(){
	int i,j,n,m;

	printf("dame n \n ");
	scanf("%i", &n);
	printf("dame m \n ");
	scanf("%i", &m);
	
	int D[n][m],A[n][m],B[n][m],C[n][m];
	
	//Pido valores de la matriz A
 	for (i=0; i<=n-1;i++){
 		for (j=0;j<=m-1;j++){
 			printf("dame la posicion a[%i][%i]:\n ", i+1,j+1);
 			scanf("%i", &A[i][j]);
		}
	}
	//muestro matriz A
	for (i=0; i<=n-1;i++){
 		for (j=0;j<=m-1;j++){
 			printf("%i\t",A[i][j]);
		}
		printf("\n");
	}
	
	//Pido matriz B
	for (i=0; i<=n-1;i++){
 		for (j=0;j<=m-1;j++){
 			printf("dame la posicion b[%i][%i]:\n ", i+1,j+1);
 			scanf("%i", &B[i][j]);
		}
	}
	//muestro matriz B
	for (i=0; i<=n-1;i++){
 		for (j=0;j<=m-1;j++){
 			printf("%i\t",B[i][j]);
		}
		printf("\n");
	}
	
	//Suma de C = A+B
	for (i=0; i<=n-1;i++){
 		for (j=0;j<=m-1;j++){
 			C[i][j]=A[i][j]+B[i][j];
		}
	}
	//muestro matriz C
	printf("\n\nLa suma de A + B es:\n");
	for (i=0; i<=n-1;i++){
 		for (j=0;j<=m-1;j++){
 			printf("%i\t",C[i][j]);
		}
		printf("\n");
	}
	
	//Suma de D = A-B
	for (i=0; i<=n-1;i++){
 		for (j=0;j<=m-1;j++){
 			D[i][j]=A[i][j]-B[i][j];
		}
	}
	//muestro matriz D
	printf("\n\nLa resta de A - B es:\n");
	for (i=0; i<=n-1;i++){
 		for (j=0;j<=m-1;j++){
 			printf("%i\t",D[i][j]);
		}
		printf("\n");
	}

}
