#include <stdio.h>

int main(){
	int tabla = 5;
	//tabla usando FOR
	for (int j = 1; j<=10; j++){
		printf("%i X %i = %i\n",tabla,j, tabla*j);
	}
	
	printf("\n\n\n");
	//tabla usando while
	tabla = 8;
	int i = 1;//es mi contador de 1 al 10
	while(i <= 10){
		printf("%i X %i = %i\n",tabla,i, tabla*i);
		i++;
	}
	
	printf("\n\n\n");
	//tabla usando Do-while
	tabla = 40;
	i = 1;//es mi contador de 1 al 10
	do{
		printf("%i X %i = %i\n",tabla,i, tabla*i);
		i++;
	}while(i <= 10);
	
}
