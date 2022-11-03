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

int main(){
	printf("hola mundo \\ \ttexto \n");
}