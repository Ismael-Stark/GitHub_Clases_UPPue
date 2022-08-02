#include "stdio.h"
int main(){
	int A[3][3],B[3][3], C[3][3],D[3][3];
	printf("\nPrimera fila\n");
	scanf("%i%i",&A[0][0],&A[0][1]);	
	printf("\nSegunda fila\n");
	scanf("%i%i",&A[1][0],&A[1][1]);
	
	printf("en b es\n");
	printf("\nPrimera fila\n");
	scanf("%i%i",&B[0][0],&B[0][1]);	
	printf("\nSegunda fila\n");
	scanf("%i%i",&B[1][0],&B[1][1]);
	printf("la matriz A es \n");
	printf("\n%i\t%i\n",A[0][0],A[0][1]);
	printf("\n%i\t%i\n",A[1][0],A[1][1]);
	printf("la matriz B es \n");
	printf("\n%i\t%i\n",B[0][0],B[0][1]);
	printf("\n%i\t%i\n",B[1][0],B[1][1]);
		
		C[0][0]=A[0][0]+B[0][0];
		C[0][1]=A[0][1]+B[0][1];
		C[1][0]=A[1][0]+B[1][0];
	C[1][1]=A[1][1]+B[1][1];
	
		D[0][0]=A[0][0]-B[0][0];
	D[0][1]=A[0][1]-B[0][1];
		D[1][0]=A[1][0]-B[1][0];
	D[1][1]=A[1][1]-B[1][1];
    printf("El resultado de la suma de A y B es\n");
		printf("\n%i\t%i\n",C[0][0],C[0][1]);
	printf("\n%i\t%i\n",C[1][0],C[1][1]);
	 printf("El resultado de la resta de A y B es\n");
		printf("\n%i\t%i\n",D[0][0],D[0][1]);
	printf("\n%i\t%i\n",D[1][0],D[1][1]);
}
