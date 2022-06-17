//Funciones, que son, tipos y como se declaran
#include <stdio.h>

//TIPO  nombreFuncion(parametros);

//donde:
//parametros: TIPO var, TIPO2 var2, TIPO3 var3.........
//TIPO void pueden recibir parametros o no, pero no regresa ningun valor
//TIPO: int, float, double, char, ellas regresan parametros del tipo que se haya declarado

///hay dos formas de declarar una funcion en el main,
//1. declarar una funcion hasta el inicio y solo escribir el protipo de la funcion
// se escribe de la siguiente forma(se debe terminar con un punto y coma) :

void funcion1();	//prototipo de una funcion

//significa que esta funcion se va a escribir completa con codigo abajo del main

void funcion3();


///2. se escribe la funcion completa con codigo(sin el punto y coma, como en la anterior);
//ya que si se escribe debajo del main sin declarar antes, esta nos dara un error
void funcion2(){//funcion2 esta antes de main() escrita completa, no se le llama: prototipo de una funcion
	printf("hola mundo desde la funcion 2\n");
}

int main(){
	
	//las funciones se llaman desde el prorama principal, simplemente
	//escribiendo el nombre(sin el TIPO) y dentro de los parentesis los parametros
	//si es que los requiere
	
	//void funcion1(); ///no funciona asi
	funcion1();		//forma correcta	//llamada a funcion
	
	funcion2();
	funcion3();		//[Warning] implicit declaration of function 'funcion3'; 
					//[Warning] conflicting types for 'funcion3'
					//por no hacer el prototipo de la funcion antes
}

void funcion1(){
	printf("hola mundo desde la funcion 1\n");
}

void funcion3(){
	printf("hola mundo desde la funcion 3\n");
}