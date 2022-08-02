#include <stdio.h>


int main(){
	char A,B,C,D;

	printf("dame 4 numeros enteros\n");
	scanf("%d",&A);
	fflush(stdin);
	scanf("%i",&B);
	fflush(stdin);
	scanf("%d",&C);
	fflush(stdin);
	scanf("%i",&D);
	fflush(stdin);
	//scanf("%d%i%d",&B,&C,&D);
	
	printf("%i,%i,%i,%i\n",D,C,B,A);
}