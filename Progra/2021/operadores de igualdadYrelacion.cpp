#include <stdio.h>
#include <math.h>

//esto es un comentario
//mas comentarios
//mas comentarios


/* esto es uin comentario */ 

/*
aqui esta
mis comentarios
en forma de 
un bloque
*/

int main(){
	int num1, num2;
	
	printf("intruce dos enteros y te dire\n");//para imprimr texto en pantalla
	printf("las relaciones que satisfacen\n");
	
	scanf("%i",&num1);
	scanf("%i",&num2);
	
	if(num1 == num2){//1
		printf("los numeros son iguales\n");
	}
	
	if(num1 != num2){//2
		printf("los numeros no son iguales\n");
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