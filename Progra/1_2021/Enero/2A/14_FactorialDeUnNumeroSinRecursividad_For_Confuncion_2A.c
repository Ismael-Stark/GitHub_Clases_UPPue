/*Factorial de un numero usando ciclo for usando funciones*/

/*Una función recursiva es una función que se llama a sí misma,
e manera directa o indirecta a través de otra función
*/

#include <stdio.h>
int contador, numero;
double resultado;

void imprimir(){
	printf("el factorial de %d! es: %.0f\n", numero, resultado);
}

void factorial(int numero){
	/* for(contador = 1; contador <= numero; contador++){
		resultado = resultado * contador;
	} */
	
	for(contador = numero; contador >= 1; contador--){
		resultado = resultado * contador;
	}
	
	imprimir();
}

int main(){
	resultado = 1;
	numero = 7;
	
	factorial(numero);
	imprimir();	
	
	
}