//estructuras iterativas
//Do while

#include "stdio.h"

int main(){
	int limite = 53;
	int i;
	
	i=1;
	
	//do{
	//proposicion
	//}while(expresion o condicional);
	
	// el do-while a diferencia del while no verifica primero si la condicion se cumple
	//sino entra primero en el ciclo y al final verifica si la condicion realmente se cumple
	//si la condicion se cumple, sigue dentro del do-while
	//de lo contrario sale de ciclo
	
	do{
		printf("i=%d, cuadrado = %d\n",i,i*i);
		//i=i+1;
		i++;
	}while( i*i <= limite);
	
}
