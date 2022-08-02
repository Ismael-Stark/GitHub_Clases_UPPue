#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	printf("Escribe algo x2:\r\n");
	
	char txt[50];
	char clave[30]="rsr";
	int rl = strlen(clave);

	gets (txt); // gets obtine un string
	
	char * pch; //apuntador
	
	if(strstr(txt,clave)){
		
		//strstr (variable, texto a buscar)
		pch = strstr (txt,clave); //strstr busca un texto para reemplazarlo
		printf("Palabra clave encontrada \r\n");
		
		//strncpy (variable,texto,no.caracteres)
		strncpy (pch,"\b  \b",rl); //strncpy copia cadena para pegarla en un texto
		puts (txt); //imprime el texto sin la palabra
		
	}else{
		
		printf("Palabra clave no encontrada \r\n");
		//sprintf(variable string,"texto", variable)
		sprintf(txt,"La oracion introducida es incorrecta"); //sprintf guarda texto y variables en un string
		printf("%s",txt);// imprime
	}
	
}
