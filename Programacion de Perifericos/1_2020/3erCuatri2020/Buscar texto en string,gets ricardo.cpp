#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	
	printf("Escribe algo:\r\n");
	
	char txt[50];

	gets (txt); // gets obtine un string
	
	char * pch; //apuntador
	
	if(strstr (txt,"rsr")){
		
		//strstr (variable, texto a buscar)
		pch = strstr (txt,"rsr"); //strstr busca un texto para reemplazarlo
		printf("Palabra clave encontrada \r\n");
		
		//strncpy (variable,texto,no.caracteres)
		strncpy (pch,"\b  \b",4); //strncpy copia cadena para pegarla en un texto
		puts (txt); //imprime el texto sin la palabra
		
	}else{
		
		printf("Palabra clave no encontrada \r\n");
		//sprintf(variable string,"texto", variable)
		sprintf(txt,"La oracion introducida es incorrecta"); //sprintf guarda texto y variables en un string
		printf("%s",txt);// imprime
	}
	
}
