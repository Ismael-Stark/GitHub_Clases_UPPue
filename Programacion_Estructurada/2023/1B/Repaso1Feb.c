#include <stdio.h>

int main(){
	int x = 8;
	
	// ejemplo if
	if(x > 7){
		printf("if: x(%i) es mayor que 7\n",x);
	}
	printf("fin if\n\n");
	
	//ejemplo if else
	printf("inicia if-else\n");
	if(x > 10){
		printf("if: x(%i) es mayor que 10\n",x);
	}else{
		printf("else: x(%i) es menor que 10\n",x);
	}
	printf("fin if-else\n\n");
	
	printf("inicia while\n");
	while(x<10){
		printf("while: x vale: %i\n",x);
		x = x + 1;
		//en el ciclo while y en el do-while es necesario tener una
		//variable tipo contador para saber cuando se debe terminar
		//el ciclo while/do-while, de lo contrario se quedara dentro
		//del ciclo infinamente	
	}
	printf("fin while %i\n\n",x);
	
	
	x = 8;
	printf("inicia do-while\n");
	do{
		printf("do: x vale: %i\n",x);
		x = x - 1;
		
	}while(x>5);
	printf("fin do-while %i\n\n",x);
	

	
}



