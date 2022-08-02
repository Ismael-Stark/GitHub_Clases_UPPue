#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h> //para declarar variables tipo uint8_t....etc

//una libreria en un pedazo de codigo que se puede reutizar en diferentes proyectos.
//una libreria sirve para que el codigo repetitivo no se tenga que estar escribiendo a cada rato
//una libreria consta de 2 archivos, uno .h y el otro .c
//el .h es el archivo cabecera (header) y es donde se declaran los prototipos de las funciones a usar
//el .c es donde se escribe el codigo completo con las funciones que se declararon en el archivo .h

#include "miprimeralibreria.h"




int main(){
	uint8_t x;
	saludar();
	bienvenida();
	
	x = sumarnumeros(4,6);
	
	printf("la suma es: %d", x);
	
}