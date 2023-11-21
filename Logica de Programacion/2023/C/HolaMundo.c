/*
1. se claran librerias #include(obligatorio)
2. se definen macros(#define) y variables globales(int,char,float,double...)
3. se declaran/definen .....funciones (opcional si no se usan, obligatorio si se van usar)
4. se empieza el programa con en main(), el main es obligatorio

NOTA: DESPUES DE CADA LINEA DE CODIGO SE DEBE PONER UN ;
EXCEPTO EN LOS #INCLUDE Y EN LOS #DEFINE....
*/

/*  con / *  y * /   se decrara un bloque de comentarios */
/// con dos // se declara un comentario de una sola linea

//DECLARO LIBRERIAS
#include <stdio.h>//libreria obligatoria
#include <math.h>//operaciones avanzadas de matematicas
#include <stdint.h>//.....
//.... y mas libreias que requieran usar

//2. DECLARO DEFINICIONES, macros Y VARIABLES
#define PI 3.1416 //pi es una constante
const float EULER = 2.71828; //otra constante usando Const
int x;

//4. inicia mi programa, hay dos formas de incialiar en main()
//usando void
//o usando int, su uso ya dependera del compilador que esten usando
/*
int main(){
	
}
void main(){
	
}
*/

int main(){
	int x;
	
	printf("Hola mundo\n");// \n sirve para escribir un enter
	printf("dime tu edad\n");
	scanf("%d",&x);// se lee e teclado y esperamos un dato de tipo entero
	//x = getch();// este comando solo lee datos de tipo caracter
	printf("tienes %d a%cos de edad",x,164 );// para imprimir la ñ se usa %c y el num 164
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



