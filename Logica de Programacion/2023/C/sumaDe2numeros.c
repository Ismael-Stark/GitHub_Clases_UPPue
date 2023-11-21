//DECLARO LIBRERIAS
#include <stdio.h>//libreria obligatoria

int main(){
	int x,y,z;	
	printf("Hola mundo\n");// \n sirve para escribir un enter
	printf("dame dos numero a sumar\n");
	scanf("%d",&x);// se lee e teclado y esperamos un dato de tipo entero
	scanf("%d",&y);// se lee e teclado y esperamos un dato de tipo entero
	//scanf("%d%d",&x,&y);// se lee dos variables
	z =  x+y;
	
	printf("la suma es: %d",z );
	
	/*  para imprimir variables usando printf se usa
		%d numeros enteros (pos y neg)
		%i numeros enteros (pos y neg)
		%f numeros flotantes o doubles
		%u numeros unsigned, numeros sin signo (solo pos )
		%x imprimir numero en hexadecimal
		%c imprime caracteres
		%s imprimir cadena de caracteres, string
		... los demas se le queda como ejercicio al lector
	*/	
}



