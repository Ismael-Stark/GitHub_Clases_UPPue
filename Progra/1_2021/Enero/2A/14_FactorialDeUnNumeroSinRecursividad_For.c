/*Factorial de un numero usando ciclo FOR*/

//Tarea hacer el factorial usando ciclo while,
//uds deben pedir el numero al usuario, deben usar gets()
//verificar que el programa no se le ingresen numeros negativos
//en tal caso dar un mensaje de error y terminal el programa


#include <stdio.h>

int main(){
	int contador, numero;
	double factorial;
	
	factorial = 1; //incializar variable donde se guarda factorial
	
	numero = 3;	//el numero del cual queremos obtener el factorial
	
	for(contador = 1; contador <= numero; contador++){
		factorial = factorial * contador;
	}
	//printf("el factorial de %d!, es: %Lu",limite, factorial);
	printf("el factorial de %d!, es: %.0f",numero, factorial);
}