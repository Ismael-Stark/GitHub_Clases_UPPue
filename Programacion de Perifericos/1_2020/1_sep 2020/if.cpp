#include <stdio.h>
#include <time.h>
#include <windows.h>
#define PI 3.1416
#define PRINTF  printf

int n;

int main(){
	int a;
	a=1;
	//if (condicion){
	//si la condicion es verdadera entra aqui
	//} else{
	//si la condicion no es verdadera entra qui
	//}
	if(a<10){
		printf("a es menor que 10\n\n");
	}else if(a>10){
		printf("a es mayor que 10\n\n");
	}else {
		printf("a es igual a 10\n\n");
	}
	
	
	
	//switch(variable){
	 //case 1:	// no se pueden poner condicionales como en el if
	 	//si la caso es verdadero
	 	//break; para salir del caso
	//case 2:
	 	//si la caso es verdadero
	 	//break; para salir del caso
	//default: por si ninguno de los anteriores es aqui es el default
	
	//}
	
	switch (a){
		case 0:
			printf("a es 0");
			break;	// es forzoso poner el break
		case 1:
			printf("a es 1");
			break;
		case 2:
			printf("a es 2");
			break;
		case 3:
			printf("a es 3");
			break;
		case 4:
			printf("a es 4");
			break;
		case 5:
			printf("a es 5");
			break;
		default:
			printf("a no esta entre 0 y 5");
			break;		
	}
	
	
}
