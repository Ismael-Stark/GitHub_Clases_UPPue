#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"
#include "include\prototiposFunciones.h"
/*
****cuando incluimos una libreria usando
#include < >
lo que este dentro de < > (mayorque y menorque)  significa que el archivo lo buscara en las librerias
ya instaladas en el compilador

***cuando incluimos una libreria usando
#include " "
lo que este dentro de " " (comillas dobes) significa que el archivo lo buscara en una ruta enpecifico
o lo buscara junto donde esta el archivo main.c
y si no lo encuentra alli, lo ira a buscar en las librerias ya instaladas en el compilador
*/


int main(){
	float resultado=0;
	//dentro del programa principal se pueden llamar las funciones
	//de la siguiente manera
	//Nomre_de_la_funcion (lista deparametros);
	//cuidado a la hora de llamar las funciones, 
	//ya que se iran llamando en orden ascendente
/*	nada2();
	nada();
	linea();*/
	
	imprimir_mensaje();
	suma(5,6) ;//llamando una funcion a la cual le debo enviar parametros
	resultado = resta(8.2,4.3);
	printf("\nla resta = %.2f",resultado);
	

}



void nada(/*lista de parametros vacia, no recibe datos la funcion*/){
			///funcion del tipo void, significa que la funcion no regresa nada
	printf("hola ");
}

void nada2(){
	printf("mundo");
	return;
}

void linea(){
	printf("\n");
}

void imprimir_mensaje(){
	//las funciones pueden llamar a otras funciones
	nada();
	nada2();
	linea();
}

///las funciones pueden aceptar parametros y no regresar nada a la funcion que la llamo
void suma(float a, float b){
	float c;
	c = a+b;
	printf("la suma de %.2f + %.2f = %.2f",a,b, c);
}

///las funciones pueden aceptar y regresar valores a la funcion le le hizo el llamado

float resta(float d, float e){
	float f;
	f = d - e;
	return f;//regreso el resultado de la resta
}