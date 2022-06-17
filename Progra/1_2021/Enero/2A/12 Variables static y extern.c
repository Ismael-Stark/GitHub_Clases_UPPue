
#include <stdio.h>

//extern int myGlobal = 0;	//de forma predeterminada las variables globales son de tipo
							//extern, ya no es necesario escribir esa palabra
							//antes de la variable
int myGlobal = 0;	// variable global tiene de alcance de archivo

void f1(); //prototipo de la funcion

int main(){
	int local1 = 2;
	
	printf("La variable global vale: %d\nLa variable local1 vale: %d\n\n",myGlobal,local1);
	
	ciclo:	//etiqueta
	f1();
	f1();
	f1();
	f1();
	f1();
	
	goto fin;		//no utilizar goto, crea malas practicas de programacion y crea
					//lo que se le denomina codigo espagueti
	
	/*while(1){
	//......
	}*/
	
	printf("\n\nLa variable de tipo static se crea una vez(y no se destruyen) y cuando se llama la funcion solo se utiliza");
	printf("\ny si se sale de la funcion la variable static no se destruye y cuando se vuelve a llamar la funcion");
	printf("\nel valor que ya tenia la variable se puede volver a usar");
	
	printf("\n\nLa variable de tipo auto se crea y se destruye cada vez que entran a la funcion, por eso\nno retiene ningun valor como la static");
	
	fin:
		local1 = 3;
}

void f1(){
	static int local2 = 3;	//Todas las variables numricas de duración estática de almacenamiento se inicializan en cero,
							//si el programador no las inicializa de manera explícita.
	auto int local_2 = 3;
	
	local2 +=2;	//static
	
	local_2 +=1; 
	
	myGlobal = 4;
	//printf("La variable global vale: %d\nLa variable local2 vale: %d",myGlobal,local2);
	printf("\nLa variable static local2 vale: %d\t la variable auto local2 vale: %d",local2,local_2);
}


