/*Variables locales y Globales*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*una variable local funciona en el bloque({ } o funciones) que fue declarada,
-Mientras una variable global funciona en cualquier bloque del programa aunque 
no este declarada alli dentro*/

/*una variable local se declara dentro del bloque a usar.

una variable global se declara fuera de las funciones y fuera del programa principal
*/

int global = 0;	// declarada fuera de cualquier funcion, incluso fuera del main()


void funcion1(){
	//local += 4;		//error porque es una variable "local" que fue declarada solo en el
						//programa principal
	printf("variable local dentro de funcion1\nerror porque no esta declarada, solo en programa principal\n");
	
	
	printf("variable 'global' en funcion1 = %d \n\n", global);
}

void funcion2(){
	int local = 0;
	local = 4;		//variable "local" dentro de funcion 2, no da error porque ya esta
					//declarada dentro de la funcion y aparte es una variable independiente
					//de la que esta declarada en el programa princpal, aunque ambas se llamen igual
	printf("variable local dentro de funcion2 = %d \n", local);
	global += 5;
	printf("variable 'global' en funcion2 = %d \n\n", global);
	
}

void funcion3(){
	//al hace esto, ya no es la variable global, ahora es una variable local
						//dentro de funcion 4
						
	int global = 4;	//aunque se llame igual que la variable global
						//al estar declarada dentro de la funcion3 esta es una
						//nueva variable pero local que se llama igual que la variable global
	printf("variable 'global'(no es la global) en funcion3 = %d \n\n", global);
	
}

void funcion4(){
	int global = 123;	//al hace esto, ya no es la variable global, ahora es una variable local
						//dentro de funcion 4
	printf("variable 'global'(no es la global) en funcion4 = %d \n\n", global);
	
}

int main(){
	int local = 0 ;
	local++;
	global++;
	
	printf("variable 'local' en programa principal = %d \n", local);
	printf("variable 'global' en programa principal = %d \n\n", global);
	
	funcion1();
	funcion2();
	
	funcion3();
	
	funcion4();
	
	funcion1();
	
}