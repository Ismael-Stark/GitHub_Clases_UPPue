#include <stdio.h>
//#include "stdio.h"
#include "otrosEjemplos\miLibreria.h"
/* para llamar a una libreria se puede usar < > y " "

si ponemos el nombre de la libreria dentro de < >
la libreria se va a llamar desde los archivos instalados locamente
con el compilador.

si ponemos el nombre de la libreria dentro de "" 
la libreria se va a llamar localmete, osea se va a llamar 
desde donde este guardado el proyecto, pero si no se encuentra en 
dicha carpeta, se va a buscar a los archivos instalados locamente
con el compilador.

tambien dentro de " " podemos poner la ruta completa donde este 
el archivo llamar
*/

#define pi 3.1416
/* tipos de variables
cacter:	para guardar letras que esten en el codigo ASCII

enteras: numeros enteros con signo y sin signo, no deben de llevar
numeros decimales

logicas:	verdadero/falso		true/false		1/0, no puede guardar
otra cosa que no sea valores logicos

reales:	 todos los numeros ya sea con signo y sin signo, asi como numeros
con o sin decimales

cacter:	char

enteras: char, int, long, short

logicas: como tal no hay uno para definir algo que guarde valores logicos
pero sepuede usar: char o int, pero se puede bool

reales:	float, double
*/
//long y short, deben ocuparse en combinacion con int
//unsiged y signned solo debe usarse con int(short,long) y char
int main(){
	char a = 'Y';//comilla '' simple para guardar o de clarar una variable que guarda solamente una letra
	unsigned char b = 88;
	int q  = 1187124682;//32bits
	int hex  = 0xde45;//numero en hexadecimal directamente
	int bin  = 0b101010111;//numero en binario directamente
	long w  = 321863721;//32bits
	long long int r  = -321321863721;//64 bits con signo
	short e = 10000;//16bits
	//bool z = 1; //hay que hacer algo para que C reconozca bool para poder declarar valiables logicas
	float g = 34.3232;
	double h = -322.4324;
	
	//printf(" aqui va el texto a impmir %paraImprimirvariable %otraVar %masVar", miVariable, otraVar, masVar,.....);
	printf("a guarda el numero %d, y convertido en ascci es: %c\n",a,a);
	printf("la var b guarda el num: %d, y su ascii es: %c \n",b,b);
	printf("la var b guarda el num: %d, y su hex es: 0x%x \n",b,b);
	printf("int q = %d\n",q);
	printf("long w = %d\n",w);
	printf("long long int r = %lld\n",r);
	printf("long long int q = %E\n",q);
	
	printf("short e = %d\n",e);
	printf("float g = %.2f\n",g);
	printf("double h = %.2f\n",h);
	
	
	printf("la var hex guar el num: %d y en hex= 0x%x\n",hex,hex);
	printf("la var bin guar el num: %d\n",bin);
	/*formas de imprimir tipos de vaiables:
	//https://learn.microsoft.com/es-es/cpp/c-runtime-library/format-specification-syntax-printf-and-wprintf-functions?view=msvc-170
		%d para imprimir numeros enteros
		%i para imprimir numeros enteros
		%u para imprimir numeros sin signo
		%f para imprimir float
		%c para imprimir caracteres
		%s para imprimir cadena de caracteres (string)
		%ld, lf  para imprimir numeros decimales o flotantes del tipo long
		%lu
		%lld para un numero long long int, osea un numero int de 64bits
		%x hexadecimal
	*/
}