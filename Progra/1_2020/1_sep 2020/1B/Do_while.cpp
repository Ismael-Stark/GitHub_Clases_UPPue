//estructuras iterativas
//Do while
/*programa que calcula todos los cuadrados de un numero hasta un limite*/

#include "stdio.h"

int main(){
	int limite = 53;
	int i;
	
	i=5;
	
	//do{
	//proposicion
	//}while(expresion o condicional);
	
	//El do-while a diferencia del while no verifica primero si la condicion se cumple
	//sino entra primero en el ciclo y al final verifica si la condicion realmente se cumple
	//si la condicion se cumple, sigue dentro del do-while
	//de lo contrario sale de ciclo
	
	printf("Ciclo Do while\n");
	do{
		printf("i = %i, cuadrado = %d\n",i, i*i);
		//i = i+1;
		i++;
	}while (i*i <= limite);
}

