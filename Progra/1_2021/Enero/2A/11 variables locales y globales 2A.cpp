/*Variables locales y Globales*/
#include <stdio.h>
#include <stdlib.h>

/*Una variable local funciona en el bloque ({   } o funciones) que fue declarada.
-Mentras que una variable global funciona en cualquier bloque del programa, auqnue
no este declarada alli dentro*/

/*una variable local se declara dentro del bloque a usar.

Una variable global se declara fuera de las funciones y fuera del programa principal*/

int global = 0;	// variable declarada fuera de cualquier funcion, cluso fuera del main()

void funcion1(){
	//local +=4;		//error porque es una variable "local" que fue declarada solo en el
					//programa principal
	printf("\nla variable 'local' en la funcion1 no se puede usar ya que es una");
	printf("\nvariable que solo fue declarada en el programa principal\n");
	
	//global += 5;
	printf("la variable 'global' en la funcion1 = %d\n\n", global);
}

void funcion2(){
	int local=0;
	local = 4;		//variable "local" dentro de funcion 2, no da error porque ya esta
					//declarada dentro de la funcion y aparte es una variable independiente
					//de la que esta declarada en el programa princpal, aunque ambas se llamen igual	
	printf("la variable 'local' en la funcion2 = %d\n", local);
	
	global += 5;
	printf("la variable 'global' en la funcion2 = %d\n\n", global);
}

void funcion3(){
	int global = 0;		//aunque se llame igual que la variable global
						//al estar declarada dentro de la funcion3 esta es una
						//nueva variable pero local, que se llama igual que la variable global
	global += 5;
	printf("la variable 'global'(no es la global) en la funcion3 = %d\n\n", global);
}

int global3;

void funcion4(){
	int global = 123;	//al hace esto, ya no es la variable global, ahora es una variable local
						//dentro de funcion 4, esta variable es independiente de la variable global que tiene el mismo nombre
	printf("variable 'global'(no es la global) en funcion4 = %d \n\n", global);
	
}

int global2;

int main(){
	int local = 0;
	
	local++;
	global++;
	printf("la variable 'local' en el programa principal = %d\n", local);
	printf("la variable 'global' en el programa principal = %d\n", global);
	
	funcion1();
	funcion2();
	funcion1();
	funcion3();
	funcion1();

	{
		//esto ya es un bloque, pero dentro del main();
	}
	
}

