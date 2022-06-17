//incluir librerias
#include <stdio.h>//a fuerza debe estar includo


//hacer definiciones
//declarar varibles
//tipos de variables
//char  puede guardar numero de 0 a 255(sin signo), -128 a +127(con signo), 
//o puede guardar letras(solo una letra)(debe ser sin signo)

//long puede guardar numero mas grandes que char pero enteros
//int puede guardar numero mas grandes que long, pero enteros

//float puede guardar numero enteros y decimales
//Double puede guardar numeros con decimales mas grandes que float

//string puede guardar una cadena de caracteres(un parrafo)
//pero string no existe directamente en C

//declarar portotipos de funciones

//al finalizar una linea de codigo se debe terminar con un ; 
//aunque no en todas las lineas de codigo

//programa principal
int main(){ //forma 1
	unsigned char c, b; //para declar mas variables en una linea se separan por ,
	signed char e = -15;
	int x = 3500; //si no pongo nada antes de int, por defaul ya es: signed int
	long w = 5000;
	float f = 110.10 ;//aqui no puedo usar signed o unsigned
	double d = 1024.73;//aqui no puedo usar signed o unsigned
	char frase[20] = "Ya vamonos!";
	c = 'f';
	b = 164;	
	//printf("Hola Mundo \nSegunda linea\ntercera linea");
	printf("ma%cana\n",164);
	printf("%i,%d,%i,%c\n",x,w,e,c);
	printf("%.2f,%.3f\n",f,d);
	printf("%s",frase);
	
	/* 
		i para variables tipo int, char
		d para variables tipo int, char
		c solo variables tipo char
		s para imprimir una frase
		f para imprimir float y double
		LU para imprimir numero grandes sin signo
		LD	para imprimir numero grandes con signo
		X	para imprmir numero en hexadecimal
	*/
	
}

/*
void main(){ //forma 2
	
}*/