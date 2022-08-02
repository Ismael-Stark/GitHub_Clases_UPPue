//estructuras iterativas
//ciclo while
/*programa que calcula todos los cuadrados de un numero hasta un limite*/

#include "stdio.h"

int main(){
	int limite = 50;
	int i;
	
	i=5;
	
	//while(expresion o condicional){
	//proposicion
	//}
	printf("Ciclo while\n");
	
	while (i*i <= limite){
		printf("i = %i, cuadrado = %d\n",i, i*i);
		//i = i+1;
		i++;
	}
	
}
	
