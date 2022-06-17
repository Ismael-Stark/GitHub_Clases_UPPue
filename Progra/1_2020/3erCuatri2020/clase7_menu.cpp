#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

#include "clase7_menu.h" 	//< > esto busca el archivo donde esta instalado el programa (dev c)
							// " "  comilla doble, busca el archivo donde ese encuentra
							//el archivo principal (*.c, *.cpp), o tambien se puede poner la ruta
							//donde esta ubicado el archivo(sino esta junto a mi archivo principal)
							







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
