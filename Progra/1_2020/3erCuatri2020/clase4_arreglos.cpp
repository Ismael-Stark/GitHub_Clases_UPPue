#include <stdio.h>
#include <string.h>

int main(){
	int c[11] = {-45,6,0,72,1543,-89,0,62,-3,1,6553};//vector int 
	
	char txt[40] = "texto 1";
	char txt2[30];
	char a[40] = {"hola"};
	char b[20] = {'H','O','L','A'};
	
	printf("\nTexto en a y b original \n%s, %s",a,b);
	
	a[1] = '0';//cero en lugar de letra o
	b[2] = '1';// uno en lugar de letra L
	printf("\n\nTexto en a y b modificado con numeros\n%s, %s",a,b);
	
	
	
	sprintf(a,"Clase 3 de programacion %d",30);	//sprintf, guarda texto y variables
															//en un string
	
	printf("\n\nVariable 'a' con texto modificado con funcion sprintf:\n%s",a);
	
	printf("\n\nlo que contienen las varibles:\ntxt:%s\ntxt2:%s",txt,txt2);
	
	strcpy(txt2,txt);		//strcpy guarda texto de la variable txt, en la variable txt2
							//de forma parecida a la funcion sprintf
	
	printf("\n\ntexto copiado de txt:%s\na txt2:%s \nusando funcion strcpy",txt,txt2);
	
	strcat(txt2,txt); //concatena dos cadenas de caracteres
	
	printf("\n\nconcatenar txt: %s\ntexto concatenado en txt2: %s\n\n",txt,txt2);
	
	//scanf("%s",&txt2);
	gets(txt2); //gets obtiene todo lo que se introduce en el teclado
				//como una cadena de caracteres y se sale de la funcion hasta dar enter en el teclado
				
	
	printf("Escribiste: '%s' usando la funcion gets",txt2);
	
	strcpy(txt,"clave");
	
	if (strcmp(txt,txt2) == 0){
		printf("\n\nfelicidades conoces la frase");
	}else {
		printf("\n\nintenta de nuevo, la frase no es correcta");
	}

	//un programa que tenga un menu el cual se pueda jugar a adivinar la frase, con opcion de cambiar
	//la palabra clave y con opcion de salir.
	//todo se ejecutara en un bucle infinito hasta adivinar la frase y una vez adivinada
	//se regresa al menu principal para empezar de nuevo


	printf("\n\n[1] jugar\n[2]cambiar clave\n[3]salir");
	
	
	
}

