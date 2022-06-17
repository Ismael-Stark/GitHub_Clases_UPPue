#include "stdio.h"


int main(){
	int a = 11;
	
	//if (condicional_valor_logico){
	// si al condicion es verdadera entra aqui
	//}else{
	//si la condicional es falsa entra aqui
	//}
	scanf("%i",&a);
	
	if (a>10){
		printf("la condicional es verdadera");
	}else{
		printf("el numero no es mayor que 10");
	}
	
	if (a>10){
		printf("\n\nes mayor que 10");
	}else if (a==0){
		printf("\n\nescribiste un 0");
	}else if (a==1){
		printf("\n\nescribiste un 1");
	}else if (a==2){
		printf("\n\nescribiste un 2");
	}else if (a==3){
		printf("\n\nescribiste un 3");
	}else if (a==4){
		printf("\n\nescribiste un 4");
	}else if (a==5){
		printf("\n\nescribiste un 5");
	}else{
		printf("\n\nescribiste un numero diferente entre 0 y 5 y no mayor a 10");
	}
	
	//switch(Variariable){
	//case 0:
		//si el caso es verdadero entra aqui
		//break; es forzoso y hace salir del switch
	//case 1:
		//si el caso es verdadero entra aqui
		//break; es forzoso y hace salir del switch
	//defualt: entra por si no se cumple con alguna de las anteriores casos
	/////\
	//break;
	//}
	
	
	switch(a){
		case 0:
			printf("\n\nescribiste un 0");
			break;
		case 1:
			printf("\n\nescribiste un 1");
			break;
		case 2:
			printf("\n\nescribiste un 2");
			break;
		case 3:
			printf("\n\nescribiste un 3");
			break;
		case 4:
			printf("\n\nescribiste un 4");
			break;
		case 5:
			printf("\n\nescribiste un 5");
			break;
		default:
			printf("\n\nescribiste un numero diferente entre 0 y 5");
			break;

	}
	
}










