#include <stdio.h>

//extern int global = 0; 		//de forma predeterminada las variables globales son de tipo
							//extern, ya no es necesario escribir esa palabra
							//antes de la variable
int global = 0;		//variable global

void f1(){
	static int local2 = 3;	//Todas las variables numericas de duración estática de almacenamiento se inicializan en cero,
							//si el programador no las inicializa de manera explícita.
	auto int local3 = 1;
	
	local2 += 2;		//las variables locales static retienen su valor, incluso cuando se sale de la función.
						//La siguiente vez que se invoca a la función, la variable local static 
						//contiene el valor que tenía cuando la función terminó por última vez
	
	local3 += 1;
	//global += 2;
	//printf("la variable global dentro de f1() vale: %d\n", global);
	printf("\nla variable local static dentro de f1() vale: %d \t la variable auto dentro de f1() vale: %d", local2,local3);
}

int main(){
	int local1 = 4;
	
	global += 3;
	local1 += 1;
	
	printf("la variable global dentro de main vale: %d\n", global);
	printf("la variable local dentro de main vale: %d\n\n", local1);
	
	//ciclo:	//etiqueta
	
	f1();
	f1();
	f1();
	f1();
	
	//goto fin;		//nunca utilizar el goto, crea malas practicas de programacion
					// y crea lo que se denomina codigo espagueti
				
	/*while(1)	// solo usar en micrcocontroladores
	{
		///...................
	}*/
	
	
	printf("\n\nLa variable de tipo static se crea una vez(y no se destruyen) y cuando se llama la funcion solo se utiliza");
	printf("\ny si se sale de la funcion la variable static no se destruye y cuando se vuelve a llamar la funcion");
	printf("\nel valor que ya tenia la variable se puede volver a usar");
	
	printf("\n\nLa variable de tipo auto se crea y se destruye cada vez que entran a la funcion, por eso\nno retiene ningun valor como la static");
	
	
	/* fin:
		local1 +=3;	
		printf("\n\nFin usando goto");*/
			
	
}