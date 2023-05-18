 /* Figura 5.12: fig05_12.c		Ejemplo de alcance
 4 tipos de alcance: de funcion, de archivo, de bloque, y alcance de prototipo  */
#include <stdio.h>

int main(){
	int x = 30;//variable de alcance de bloque, o variable local
    printf("el valor de x local en main es: %i\n",x++);
	
	printf("el valor de x local en main es: %i\n",x++);
	
	//creamos un bloque dentro del bloque principal(main)
	{//inicio bloque 1
		int x = -10;//variable de alcance de bloque1, o variable local1
    	printf("\tel valor de x local en bloque 1 es: %i\n",x++);
    	printf("\tel valor de x local en bloque 1 es: %i\n",x++);
    	{////inicio bloque 2
    		int x = -1;//variable de alcance de bloque2, o variable local2
    		printf("\t\tel valor de x local en bloque 2 es: %i\n",x++);
    		printf("\t\tel valor de x local en bloque 2 es: %i\n",x++);
		}//fin bloque 2
		printf("\tel valor de x local en bloque 1 es: %i\n",x++);
		
	}//fin bloque 1	
	printf("el valor de x local en main es: %i\n",x++);
}