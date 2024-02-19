/*PARA llamar/declara librerias hay dos opciones usando 
1.  < aquiMiLibreria >
2.	" aquiMiLibreria"

la primera opcion se usa cuando se llama una libreria propia de
compilador o del lenguaje, ya que esta se busca donde esta instalado el
compilador de C

la segunda opcion es cuando se hacen librerias pesonalizadas
primero se busca en la carpeta donde esta guardado el proyecto
si no se encuentra entonces busca donde esta instalado 
el compilador de C

*/

#include "stdio.h"

int main(){
	int n;
	float serie = 0;	
	scanf("%i",&n);
	
	for(int i = 1; i<=n;i++){
		serie += 1.0/i;
	}
	printf("el resultado es: %.3f",serie);
}

