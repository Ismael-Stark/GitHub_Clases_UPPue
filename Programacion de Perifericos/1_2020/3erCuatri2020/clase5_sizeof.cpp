#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int str_largo(char *c){
	int i = 0;
	while(*c != '\0'){
		c++;
		i++;
	}
	return i;
}


int main(){
	char txt[80]= "palabra clave",txt2[30];
	int a,b;
	
	//char f[20] = {'H','O','L','A',' ',' ','H','O','L','A'};
	char f[20] = {'\0'};
	
	//gets(txt2); //obtiene un string
	
	//a = sizeof(txt);//obtiene el tamano total del vector txt
	b = sizeof(txt2);
	
	a = strlen(txt);
	b = str_largo(f);
	
	printf("el tamano de txt es:%d\nel tamano de f es:%d",a,b);//imprime
	printf("\n\n%s",f);
	
}
