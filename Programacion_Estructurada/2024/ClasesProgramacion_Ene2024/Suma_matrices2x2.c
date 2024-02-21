#include "stdio.h"


void main(){
	char M1[3][3], M2[3][3], suma[3][3];
	
	
	printf("Dame los datos de la matriz1 \n");
	scanf("%d",&M1[0][0]);
	scanf("%d",&M1[0][1]);
	scanf("%d",&M1[1][0]);
	scanf("%d",&M1[1][1]);
	
	printf("Dame los datos de la matriz2 \n");
	scanf("%d",&M2[0][0]);
	scanf("%d",&M2[0][1]);
	scanf("%d",&M2[1][0]);
	scanf("%d",&M2[1][1]);

	
	printf("la matriz1: \n");
	printf("\t%d\t%d\n",M1[0][0],M1[0][1]);
	printf("\t%d\t%d\n",M1[1][0],M1[1][1]);
	
	printf("la matriz2: \n");
	printf("\t%d\t%d\n",M2[0][0],M2[0][1]);
	printf("\t%d\t%d\n",M2[1][0],M2[1][1]);
	
	suma[0][0] = M1[0][0] + M2[0][0];
	suma[0][1] = M1[0][1] + M2[0][1];
	suma[1][0] = M1[1][0] + M2[1][0];
	suma[1][1] = M1[1][1] + M2[1][1];
	
	printf("la suma: \n");
	printf("\t%d\t%d\n",suma[0][0],suma[0][1]);
	printf("\t%d\t%d\n",suma[1][0],suma[1][1]);
	
}
	