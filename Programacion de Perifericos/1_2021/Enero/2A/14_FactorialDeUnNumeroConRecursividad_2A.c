/*Factorial de un numero usando ciclo for usando funciones*/

/*Tarea obtener el factorial de un numero usando ciclo while
deberan pedir el numero usando gets,
verificar que el numero sea cero o mayor que cero 
en dado caso de que sea un numero negativo, dar un error y terminar el programa
*/

#include <stdio.h>



double factorial(int numero){
	if (numero == 1){
		return 1;
	}else{
		numero = numero * factorial(numero - 1);
		return numero;
	}
	
}

int main(){
	int contador, numero;
	double resultado;
	numero = 10;
	
	resultado = factorial(numero);
	printf("el factorial de %d! usando recursividad es: %.0f\n", numero, resultado);	
	
}