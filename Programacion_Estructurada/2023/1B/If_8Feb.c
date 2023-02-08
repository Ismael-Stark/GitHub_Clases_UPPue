#include <stdio.h>

int main(){
	int dia;
	printf("Dia de la semana usando IF, dame el dia: ");
	scanf("%i", &dia);
	if(dia == 1){
		printf("el dia es Lunes");
	}
	if(dia == 2){
		printf("el dia es Martes");
	}
	if(dia == 3){
		printf("el dia es Miercoles");
	}
	if(dia == 4){
		printf("el dia es jueves");
	}
	if(dia == 5){
		printf("el dia es Viernes");
	}
	if(dia == 6){
		printf("el dia es sabado");
	}
	if(dia == 7){
		printf("el dia es domingo");
	}
	if(dia>7 || dia<1 ){
		printf("ese dia no existe");
	}
	
}