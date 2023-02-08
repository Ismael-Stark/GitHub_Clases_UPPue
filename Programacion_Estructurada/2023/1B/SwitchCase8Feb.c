#include <stdio.h>

int main(){
	int dia;
	scanf("%i", &dia);
	
	switch(dia){
		case 1:
			printf("el dia es Lunes");
			break;
		case 2:
			printf("el dia es Martes");
			break;
		case 3:
			printf("el dia es Miercoles");
			break;
		case 4:
			printf("el dia es jueves");
			break;
		case 5:
			printf("el dia es Viernes");
			break;
		case 6:
			printf("el dia es sabado");
			break;
		case 7:
			printf("el dia es domingo");
			break;
		default:
			printf("ese dia no existe");
		
	}
	
}