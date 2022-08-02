#include <stdio.h>

//extern int global = 0; 		//de forma predeterminada las variables globales son de tipo
							//extern, ya no es necesario escribir esa palabra
							//antes de la variable
int global = 0;		//variable global, son variables que tienen 'alcance de archivo'

void f1();	//prototipo de funcion

void f2(int v1, int v2, int v3);	//v1, v2 y v3 son variables con alcance de prototipo de función

int main(){
	int local1 = 4;
	
	global += 3;
	local1 += 1;
	
	//printf("la variable global dentro de main vale: %d\n", global);
	printf("la variable local dentro de main vale: %d\n\n", local1);
	
	{//inicio del bloque1 dentro de main
		int local1 = 7;		//variables de alcance de bloque
		int local2 = 10;	//solo funciona en el bloque1 y los bloques dentro de este bloque1
		printf("la variable local1 dentro del bloque1 que esta dentro de main vale: %d\n", local1);
		printf("la variable local2 dentro del bloque1 que esta dentro de main vale: %d\n", local2);
		
		local1 += 23; 	//esta variable local1, aunque se llama igual que la declarada fuera del bloque
		//se comporta como una variable aparte y no afecta a la variable que esta fuera del bloque
		printf("la variable local1 dentro del bloque1 que esta dentro de main vale: %d\n\n", local1);
		
		{//inicio de bloque2 que esta dentro del bloque1
			printf("la variable local1 dentro del bloque2 que esta dentro del bloque1 dentro de main vale: %d\n\n", local1);
		}
		
	}//fin del bloque1
	
	printf("la variable local dentro de main vale: %d\n\n", local1);
	//printf("la variable local2 fuera del bloque1 que esta dentro de main vale: %d\n\n", local2);
	//f1();
	
}

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