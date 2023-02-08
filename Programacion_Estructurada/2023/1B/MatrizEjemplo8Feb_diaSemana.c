#include <stdio.h>


int main(){
	char nombreDia[7][10] = {"Lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
	int dia;
	//printf("el  dia semana(0) es: %s \n",  nombreDia[2]);
	
	printf("Dia de la semana usando IF, dame el dia: ");
	scanf("%i", &dia);
	
	if(dia >0 && dia<8){
		printf("el dia es %s",nombreDia[  dia-1 ]);
	}else{
		printf("ese dia no existe");
	}

	

}