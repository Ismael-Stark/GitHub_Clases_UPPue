#include "stdio.h"
#include "math.h"

//uso del Switch case
int main(){
	int x;
	printf("Escribe un numero\n");
	scanf("%i",&x);
	switch(x)
	{
		case 1:
			printf("lunes");
			break;
		case 2:
			printf("martes");
			break;
		case 3:
			printf("miercoles");
			break;
		case 4:
			printf("jueves");
			break;
		case 5:
			printf("viernes");
			break;
		case 6:
			printf("sabado");
			break;
		case 7:
			printf("domingo");
			break;
		default:
			printf("el numero %d no es un dia de la semana",x);
		
	}
		
}