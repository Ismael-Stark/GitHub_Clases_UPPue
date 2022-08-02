#include "stdio.h"
int main(){
	int i,j,n,m;

	printf("Que tamaño será la matriz nxn?\n ");
	scanf("%i", &n);
	//printf("dame m \n "); 
	//scanf("%i", &m);
	m=n;
	int D[n][m],A[n][m],B[n][m],C[n][m];
	
	//Pido valores de la matriz A
 	for (i=0; i<=n-1;i++){
 		for (j=0;j<=m-1;j++){
 			printf("dame la posicion a[%i][%i]:\n ", i+1,j+1);
 			scanf("%i", &A[i][j]);
		}
	}
	
	printf("\n");
	//Pido matriz B
	for (i=0; i<=n-1;i++){
 		for (j=0;j<=m-1;j++){
 			printf("dame la posicion b[%i][%i]:\n ", i+1,j+1);
 			scanf("%i", &B[i][j]);
		}
	}
	//muestro matriz A
	printf("\nA=\n");
	for (i=0; i<=n-1;i++){
 		for (j=0;j<=m-1;j++){
 			printf("%i\t",A[i][j]);
		}
		printf("\n");
	}
	//muestro matriz B
	printf("\nB=\n");
	for (i=0; i<=n-1;i++){
 		for (j=0;j<=m-1;j++){
 			printf("%i\t",B[i][j]);
		}
		printf("\n");
	}
	
	for (i=0; i<=n-1;i++){
 		for (j=0;j<=m-1;j++){
 			C[i][j] = 0;
		}
	}
	
	//Suma de C = A*B
	int x=0;
	for (i=0; i<=n-1;i++){//fila
 		for (j=0;j<=m-1;j++){//columna
 			if (j%2==0){
 				for (int y=0;y<=n-1;y++){
					C[i][j] += (A[i][y]*B[y][x]);
				}
			}else{
				
				for (int y=0;y<=n-1;y++){
					C[i][j] += (A[i][y]*B[y][x]);
				}
			}
			x++;			
		}
		x=0;
	}
	
	
	
	//muestro matriz C
	printf("\n\nLa multiplicacion de A * B es:\n");
	for (i=0; i<=n-1;i++){
 		for (j=0;j<=m-1;j++){
 			printf("%i\t",C[i][j]);
		}
		printf("\n");
	}
	
}






