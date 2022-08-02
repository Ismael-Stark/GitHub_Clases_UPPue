#include <stdio.h>
#include <string.h>

int main()
{
	char a[10] = "hola mundo";
	char b[10] = "holaaaaaa";
	char c[10];
	
	if ( strcmp (a ,b) == 0){
		printf("son iguales\n");
	}
	
	printf ("Que led quieres encender/apagar? ");
    fflush (stdout);
    scanf ("%s",c);
     
     if ( strcmp (c ,"led1on") == 0 ){
     	printf ("Led 1 encendido");
	 }
	 
	 if ( strcmp ("led1off", c) == 0 ){
     	printf ("Led 1 apagado");
	 }
}