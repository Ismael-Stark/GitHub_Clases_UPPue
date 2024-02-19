#include "stdio.h"
//TODO LO QUE ESTA FUERA DEL MAIN
//ES VARIABLE  global

//funciones
//tipo_deFuncion NombreFuncion(Argumentos);
// en tipo funcion puede ser int, float, doble, char
//pero si no regresa nada se usa void
//diferentes tipos de funciones
//la que no recibe datos y no regresa nada
//la que recibe datos y no regresa nada
//la que no recibe datos pero regresa datos
//recibe datos y regresa datos

//antes main se declaran los prototipos de funciones

void saludo(void);//la que no recibe datos y no regresa nada
void suma(int a, int b);//la que recibe datos y no regresa nada
int suma2(int a, int b);//recibe datos y regresa datos

int main(){
	//las variables dentro main son del tipo local
	int n,numeros, P=0,N=0,NN=0;
	//se manda a llamar la funcion saludo
	saludo();
	
	suma(4,9);
	
	n = suma2(5,9);	
	printf("\nel dato que regresa la funcion suma2 es: %d",n);
	
}

//despues main se escribe la funcion completa
void saludo(void){
	printf("hola soy una funcion que no");
	printf("\nrecibe datos ni regresa datos\n");
}

void suma(int a, int b){
	printf("\nla suma de a+b es: %d",a+b);
}

int suma2(int a, int b){
	int suma;
	suma = a+b;
	return suma;	
}

