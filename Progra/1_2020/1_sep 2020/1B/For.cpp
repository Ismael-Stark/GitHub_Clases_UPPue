//estructuras iterativas
//usando for (para)
/*programa que calcula todos los cuadrados de un numero hasta un limite*/

#include "stdio.h"

int main(){
	int limite = 53;
	int i;
	
	printf("Ciclo for\n");
	
	//for(inicio;final; incremeto){
	//proposicion
	//}
	
	for( i = 1; i*i <= limite; i++){
		printf("i = %i, cuadrado = %d\n",i, i*i);
	}
}
