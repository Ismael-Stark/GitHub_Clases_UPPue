//estructura de un programa en C
//directivas por el procesador
//comentarios
//declarciones de variables o de funciones
//bloques de definicion de funciones

//directivas por el procesador/////////////////////////////
//#include
//#define

#include <stdio.h>
#define pi 3.141516

//declarar variable
// tipo de variable nombre = valor(opcional)		variables globales(fuera del main), variables locales(dentro de funciones)
int x;

//declaro una funcion
// tipo de funcion, nombre funcion (directivas de la funcion, opcional)
int suma(int a, int b);		//regresa un valor de tipo entero
								//la funcion tipo void no regresa ningun valor
void suma2(int a, int b, int &z);//void con puntero en &z

int main(){
	//variable local
	int y, r;
	printf("hola\n");//  \n		\r	\t
	printf("repaso programacion basica en C,\n suma de dos numeros, dame numero A y B\n");
	scanf("%i",&y);
	scanf("%i",&x);
	//r= x+y;
	r = suma(x,y);
	
	printf("\nla suma de A y B es: %d",r);
	
	suma2(x,y,r);
	printf("\nla multiplicacion de A y B con void es: %d",r);
	printf("\nA: %d, B: %d",x,y);
	
}

int suma(int a, int b){
	return a+b;
}

void suma2(int a, int b, int &z){//void con puntero en &z
	
	z = a*b;
	a=b=0;
}

