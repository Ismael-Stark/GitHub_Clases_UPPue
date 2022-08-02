#include "prototiposFunciones.h"

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