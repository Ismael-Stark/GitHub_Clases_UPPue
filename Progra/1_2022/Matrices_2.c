//comentario agregado a las 3:53

#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"




//fila/columna
int M2_2[2][2]= {1,2,3,4};
int M2[2][2]= {5,6,7,8};
int M2_suma[2][2];
int M3_3[3][3]={1,2,3,4,5,6,7,8,9};


int main(){
	int f,c, suma;
	
	for (int f=0; f<2;f++){
		for (int c=0; c<2;c++){
			printf("%d\t",M2_2[f][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	for (f=0; f<3;f++){
		for (int c=0; c<3;c++){
			printf("%d\t",M3_3[f][c]);
		}
		printf("\n");
	}
	
	//suma de matrices
	suma =M2_2[0][1] + M2[0][1];
	printf("%d",suma);
	for (f=0; f<2;f++){
		for (int c=0; c<2;c++){
			M2_suma[f][c] = M2[f][c] + M2_2[f][c];
		}
	}
	
	/// tarea, hace suma y resta de matrices de tamaño 4
	// los datos se deben pedir al usuario de la matriz 2
	// la matriz 1 se debe definir desde que crean la variable
	
	/*enviar .c
	y grabar un video de max 3min(subir a youtube)
	explicando el codigo y que se vea funcionando*/
}