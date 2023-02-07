#include <stdio.h>

int main(){
	int inicio, fin = 10;
	
	for(inicio = 0; inicio < fin; inicio++){
		printf("For: %i\n",inicio);
	}
	printf("\n\n\n");
	
	inicio = 0;
	while(inicio < fin){
		printf("while: %i\n",inicio);
		inicio++;
	}
	
	printf("\n\n\n");
	
	inicio = 0;
	do{
		printf("do: %i\n",inicio);
		inicio++;
	}while(inicio < fin);
	
	
}