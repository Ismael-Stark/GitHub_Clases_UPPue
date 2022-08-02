#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
// leer una cadena de caracteres e introducir en ella una palabra clave
// si existe esa palabra clave, que el programa mande un mesaje de que se encontro esa clave
//e imprimir el texto que acompana a esa plabra pero sin la palabra clave
//si no se encuentra la clave en el texto, mandar un error

//ejemplo, la clave es: ffffa

//	hola saludos clase ffffa como estan

// como se encontro la plabra "ffffa", mandar un mensaje de que se encotnro la clave e imprimier el texto
//palabra clave encontrada, felicidades,
//	hola saludos clase  como estan



int main(){
	char txt[80]= "palabra clave",txt2[30];
	


	gets(txt2); //obtiene un string
	//printf("%s",txt2);//imprime
	
	//strcmp(txt,txt2) compara dos string y devuelve un 0 si son iguales
	if (strcmp(txt,txt2) ==0){
		sprintf(txt,"La palabra introducida es correcta");	//sprintf, guarda texto y variables
															//en un string
		printf("%s",txt);//imprime
	} else{
		sprintf(txt,"La palabra introducida es incorrecta");	//sprintf, guarda texto y variables
															//en un string
		printf("%s",txt);//imprime
	}
	
}
