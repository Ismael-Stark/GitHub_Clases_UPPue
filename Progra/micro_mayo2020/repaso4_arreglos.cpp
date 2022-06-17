#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main(){
	char txt[80]= "hola",txt2[30];
	float num =50;
	
	num = atof(gets(txt2));// gets obtiene un string
							//atof convierte string a flotane
	
	printf("%s\n",txt);
	//sprintf(variablestring,"texto",variables);
	sprintf(txt,"esto es un string con un numero: %f",num);	//sprintf, guarda texto y variables
															//en un string
	printf("%s",txt);//imprime
	
	
	
	
	while(1){
		
	}
}
