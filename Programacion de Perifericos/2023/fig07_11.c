/* Figura 7.11: fig07_11.c
Impresión de una cadena carácter por carácter mediante
un apuntador no constante a un dato constante */

#include <stdio.h>
//mayus+alt+f = autoformato
void imprimeCaracteres(const char *ptrS);

int main()
{
	char datoc, dato_s[30];
	
	//scanf("%s",&dato);
	
	//datoc = getch();
	gets(dato_s);
	
	printf("%s\n\n\n",dato_s);
	
	
	
	
	
    /* inicializa el arreglo de caracteres */
    char cadena[] = "imprime los caracteres de una cadena";

    printf("La cadena es:\n");
    imprimeCaracteres(cadena);
    printf("\n");

    return 0; /* indica terminación exitosa */  

} /* fin de main */

/* ptrS no puede modificar el carácter al cual apunta,
es decir, ptrS es un apuntador de “solo lectura” */
void imprimeCaracteres(const char *ptrS)
{
    /* repite el ciclo para toda la cadena */
    while(*ptrS != '\0') //for ( ;*ptrS != '\0'; ptrS++)
    { /* sin inicialización */
        printf("%c", *ptrS);
        ptrS++;
    } /* fin de for */

} /* fin de la función imprimeCaracteres */