#include <stdio.h>

void imprimeDia(char *nombreDia){
    int dia;
    printf("Dia de la semana usando IF, dame el dia: ");
	scanf("%i", &dia);
	
	//if(dia >0 && dia<8){
		//printf("el dia es %s",&nombreDia[ dia ]);
		
		while(nombreDia[dia]){
			printf("%c",nombreDia[dia++]);
		}
	//}else{
	//	printf("ese dia no existe");
	//}
}

int main(){
	char nombresDias[7][10] = {"Lunes","martes","miercoles","jueves","viernes","sabado","domingo"};

	imprimeDia(&nombresDias[0][0]);

}