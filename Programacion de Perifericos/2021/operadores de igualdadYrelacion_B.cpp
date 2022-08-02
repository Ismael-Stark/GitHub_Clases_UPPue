#include <stdio.h>
#include <math.h>


int main(){
	int num1,num2;
	printf("introduzca dos enteros y te dire\n");
	printf("las relaciones que satisfacen\n");
	scanf("%i",&num1);
	scanf("%i",&num2);
	
	if(num1 == num2){//1
		printf("num1 es igual a num2\n");
	}
	
	if(num1 != num2){//2
		printf("num1 no es igual a num2\n");
	}
	
	if(num1 > num2){//3
		printf("num1 es mayor que num2\n");
	}
	
	if(num1 < num2){//4
		printf("num1 es menor que num2\n");
	}
	
	if(num1 >= num2){//5
		printf("num1 es mayor o igual que num2\n");
	}
	
	if(num1 <= num2){//6
		printf("num1 es menor o igual que num2\n");
	}
	
}
