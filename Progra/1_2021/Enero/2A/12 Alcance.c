
#include <stdio.h>

//extern int myGlobal = 0;	//de forma predeterminada las variables globales son de tipo
							//extern, ya no es necesario escribir esa palabra
							//antes de la variable
int myGlobal = 0;	// variable global tiene de alcance de archivo

void f1(); //prototipo de la funcion
void f2(int v1, int v2, float v3);	//las variables v1, v2, v3, son variables de alcance de prototipo de funcion

int main(){
	int local1 = 2;//variable de alcance de funcion
	
	printf("La variable local1 dentro de main vale: %d\n\n",local1);
	//printf("La variable global vale: %d\nLa variable local1 vale: %d\n\n",myGlobal,local1);
	
	{///aqui comienza el bloque1
	
		int local1 = 10;	//variables de alcance de bloque
		int local2 = 4; //solo funciona en el bloque1
		printf("La variable local1 dentro del bloque1 vale: %d\n",local1);
		//printf("La variable local2 dentro del bloque1 vale: %d\n\n",local2);
		
		local1 += 2;	//esta variable local1, aunque se llama igual que la declarada fuera del bloque
		//se comporta como una variable aparte y no afecta a la variable que esta fuera del bloque
		printf("La variable local1 dentro del bloque1 vale: %d\n",local1);
		
		{//inicia un bloque dentro del blqoue1
			printf("La variable local1 dentro del blqoue que esta dentro del bloque1 vale: %d\n",local1);
		}//termina elbloque dentro del blqoue1
		
	}///hasta aqui termina mi bloque1
	
	printf("\nLa variable local1 dentro del main vale: %d\n\n",local1);
	//printf("La variable local2 dentro del bloque1 vale: %d\n\n",local2);
	
	
	
	//f1();


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