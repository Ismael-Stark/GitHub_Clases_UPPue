#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

//tarea, hacer un programa que al mandar una oracion y 
//que dentro de ella el programa reconozca una palabra para que imprima el texto, 
//excepto la palabra encontrada
//si no hay la palabra requerida, mandar un mensaje de error
//ejemplo;
// "esto es un string, hola", reconocer la palabra hola e imprimir lo demas
//I34.5F

int main(){
	char txt[80]= "hola",txt2[30];
	
	
	gets(txt2);// gets obtiene un string
							//atof convierte string a flotane
	if (strcmp(txt,txt2) ==0){
		//sprintf(variablestring,"texto",variables);
		sprintf(txt,"La palabra introducida es correcta");	//sprintf, guarda texto y variables
															//en un string
		printf("%s",txt);//imprime
	
	} else{
		
		sprintf(txt,"La palabra introducida es incorrecta");	//sprintf, guarda texto y variables
															//en un string
		printf("%s",txt);//imprime
	}
	
	
	
}
		

