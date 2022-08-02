/*Factorial de un numero usando recursividad*/

//recursividad son funciones que se llaman a si mismas
//tarea:
#include <stdio.h>

double factorial (int numero){
	if (numero == 1){
		return 1;
	}else{
		numero = numero * factorial(numero-1);
		return numero;
	}
}


int main(){
	int numero;
	double resultado;
	
	numero = 5;	//el numero del cual queremos obtener el factorial
	
	resultado = factorial(numero);
	printf("el factorial de %d! usando Recursividad es: %.0f\n",numero, resultado);
	
}