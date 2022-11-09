#include <stdio.h> 
//#include "stdio.h"
#include "D:\PicTrance\Desktop\miLibreria.h"
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



/* tipos de variables
cacter:	para guardar letras que esten en el codigo ASCII

enteras: numeros enteros con signo y sin signo, no deben de llevar
numeros decimales

logicas:	verdadero/falso		true/false		1/0, no puede guardar
otra cosa que no sea valores logicos

reales:	 todos los numeros ya sea con signo y sin signo, asi como numeros
con o sin decimales

/////////////////////////////////////////////////////////////////////////////////////////

cacter:	char

enteras: char, int, long, short

logicas: como tal no hay uno para definir algo que guarde valores logicos
pero sepuede usar: char o int, aunque en realidad se usa bool, pero se debe de hacer
algo extra para poder usarlo dentro de C

reales:	float, double

*/

//unsiged y signed solo debe usarse con int(short,long) y char
int main(){
	//tipo_de_variable NombreVariable;
	char letra = 'w';//comilla ' ' simple es para guardar o de clarar
						//una variable que guarda solamente una letra
						//" " esto es comilla doble, o simplemnte comillas, no se usa para una sola letra
	char numero = 84;
	unsigned int entero = 4294967295;
	long a = 321432;
	short s = 10000;
	//bool logica;
	float flotante = 3211.123;
	double doble = 567.321;

	//printf("AgunTexto %tipoVariable %tipoVariable2 %tipoVariable3\n",mi_varAimprimir1, mi_varAimprimir2, mi_varAimprimir3.... );
	printf("Mi varible \"letra\" contiene: %c y en decimal vale: %d\n",letra,letra);
	printf("Mi varible \"numero\" contiene: %c y en decimal vale: %d\n",numero,numero);
	printf("entero vale: %u\n",entero);
	printf("long a vale: %i\n",a);
	printf("short s vale: %i\n",s);
	printf("float vale: %f\n",flotante);
	printf("doble vale: %f\n",doble);
	/*formas de imprimir tipos de vaiables:
	//https://learn.microsoft.com/es-es/cpp/c-runtime-library/format-specification-syntax-printf-and-wprintf-functions?view=msvc-170
	//https://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_es.html#:~:text=Por%20ejemplo%20printf(%22%25*d,en%20blanco%20a%20la%20izquierda).&text=*-,Igual%20que%20el%20caso%20anterior%2C%20pero%20el%20n%C3%BAmero%20a%20utilizar,%22)%20imprime%20%E2%80%9Cabc%E2%80%9D.
		%d para imprimir numeros enteros en decimal
		%i para imprimir numeros enteros en decimal
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