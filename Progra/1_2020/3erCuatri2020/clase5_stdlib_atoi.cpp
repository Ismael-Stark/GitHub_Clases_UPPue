#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(){
	char txt[80] = "palabra clave", txt2[30];
	float numero;
	
	numero = atof( gets(txt2) );
	
	printf("\nel numero en el string es:\n%f",numero);
	
	numero *= 5;
	printf("\nel numero en el string es:\n%f",numero);
	
	
}
