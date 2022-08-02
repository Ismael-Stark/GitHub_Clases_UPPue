#include "stdio.h"

int main(){
	int num1;
	int num2;
	printf("introduzca dos enteros y le dire\n");
	printf("la relaciones que satisfacen\n");
	
	scanf("%d%d",&num1,&num2);
	
	if ( num1 == num2){//1
		printf("%d es igual que el numero %d\n",num1,num2);
	}
	
	if ( num1 != num2){//2
		printf("%d no es igual que el numero %d\n",num1,num2);
	}
	
	if ( num1 > num2){//3
		printf("%d es mayor que el numero %d\n",num1,num2);
	}
	
	if ( num1 < num2){//4
		printf("%d es menor que el numero %d\n",num1,num2);
	}
	
	if ( num1 >= num2){//5
		printf("%d es mayor o igual que el numero %d\n",num1,num2);
	}
	
	if ( num1 <= num2){//6
		printf("%d es menor o igual que el numero %d\n",num1,num2);
	}
}