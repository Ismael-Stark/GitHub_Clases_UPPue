//incluir librerias
#include <stdio.h> //es la libreria basica y siempren debe ir
#include <math.h>
#include <string.h>


//hacer definiciones

//declarar variables globales
//char: sirve para guardar letras o numeros de 0 a 255, o de -128 a 127
//long: guarda numeros enteros pero mas grandes que los que puede guardar el char
//int: guarda numeros mas grandes que long
//float: para variables que tengan numeros decimales.
//double: tambien guarda numeros con decimales pero es mas preciso que float

//declarar prototipos de funciones


//programa principal
/*void main(){//forma 1
	
}*/


int main(){ //forma 2
	// aqui se hace el programa
	float pi, radio, area;
	pi = 3.1416;
	printf("Programa que calcula el area de un circulo\nDame el radio del circulo:");
	scanf("%f",&radio);//aqui se pide el dato tipo float
	//radio = 970; //cm
	area = pi * radio * radio;
	printf("El area del circulo es: %fcm\n\n",area);// %f es para imprimir un dato float
	
	int a = 23;
	char c = 'h';
	float f = 15.3;
	char s[20] = "Esto es un string";
	printf("%i, %d ,%.2f, %c, %s",a,a,f,c,s);
	/*
	%f  floatr
	%d  int
	%i  int
	%c  char
	%s  string (cadena de caracteres)	
	*/	
}