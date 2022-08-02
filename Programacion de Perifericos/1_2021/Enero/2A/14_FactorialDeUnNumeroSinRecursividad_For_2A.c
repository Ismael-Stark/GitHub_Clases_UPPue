/*Factorial de un numero usando ciclo for*/

/*Tarea obtener el factorial de un numero usando ciclo while
deberan pedir el numero usando gets,
verificar que el numero sea cero o mayor que cero 
en dado caso de que sea un numero negativo, dar un error y terminar el programa
*/

#include <stdio.h>


int main(){
	int contador, numero;
	double resultado;
	
	resultado = 1;
	numero = 20;
	
	/* for(contador = 1; contador <= numero; contador++){
		resultado = resultado * contador;
	} */
	
	for(contador = numero; contador >= 1; contador--){
		resultado = resultado * contador;
	}
	
	printf("el factorial de %d! es: %.0f", numero, resultado);
}



