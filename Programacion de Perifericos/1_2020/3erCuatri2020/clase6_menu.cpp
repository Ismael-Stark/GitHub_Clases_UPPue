#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

void f1(){
	printf("\nentraste a la funcion 1\n\n");//imprime
}

void f2(){
	char txt[50];
	do {
		printf("\nentraste a la funcion 2\n\n");//imprime
		gets(txt);
	}while( txt[0] != 'c');
	
}



int main(){
	char txt[50];
	
	do{
		printf("Menu principal\n[a] funcion 1\n[b] funcion 2\n[c] salir\n");//imprime
		
		gets(txt); //obtiene un string

		
		switch(txt[0]){
			case  'a':
				f1();
				break;
				
			case 'b':
				f2();
				break;
				
			default:
				break;
		}
		//if (strcmp(txt,txt2) ==0){
		//printf("La palabra introducida es correcta");	//sprintf, guarda texto y variables
																//en un string
			//printf("%s",txt);//imprime
		//}
		
	}while( txt[0] != 'c');
	
	printf("\nSaliste del Menu\n\n");//imprime
		
}
