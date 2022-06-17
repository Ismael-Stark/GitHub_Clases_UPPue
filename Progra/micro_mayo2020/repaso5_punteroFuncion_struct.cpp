//Funciones como Arrays
#include <stdio.h>
#include "repaso5_punteroFuncion_struct.h"




typedef struct miestructura type;

type repaso5[3] =  {{funcion1,3},
					{funcion2,4},
					{funcion3,5},
					};


int main(){ 
    //Se pide al usuario que entre un numero
    int val;
    printf("\nIntroduce un numero entero: ");
    scanf("%d", &val);
     
    //Se recorre el vector para llamar las funciones
    for(int i = 0; i < 3; i++)
    {	
		repaso5[i].ptrvoid(val);
	}
	
	repaso5[0].y=5;
	
	printf("\nI %f",repaso5[0].y);
	
	
    return 0;
}
