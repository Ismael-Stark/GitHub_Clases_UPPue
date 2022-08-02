//estructuras iterativas
//ciclo while
/*programa que calcula todos los cuadrados de un numero hasta un limite*/

#include "stdio.h"

int main(){
	int limite = 53;
	int i;
	
	i=1;
	
	//while(expresion o condicional){
	//proposicion
	//}
	
	while( i*i <= limite){
		printf("i=%d, cuadrado = %d\n",i,i*i);
		//i=i+1;
		i++;
	}
	
}
