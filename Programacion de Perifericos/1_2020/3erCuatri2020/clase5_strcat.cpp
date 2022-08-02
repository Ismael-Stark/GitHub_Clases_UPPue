#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(){
	char txt[80] = "palabra clave", txt2[30] = " texto 2 ";
	strcat(txt2,txt); //concatena dos cadenas de caracteres
	
	printf("\n\n%s",txt2);
	
	
}
