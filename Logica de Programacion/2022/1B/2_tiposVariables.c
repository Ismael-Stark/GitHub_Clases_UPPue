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


int main(){
	
	printf("Hola mundo\n");
	printf("segunda \"linea\"\n\t\tEj_Tabulador");
}