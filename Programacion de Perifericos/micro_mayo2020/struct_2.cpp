
#include <stdio.h>

struct estructura_amigo {	/* Definimos la estructura estructura_amigo */
	char nombre[30];
	char apellido[40];
	char telefono[10];
	int edad;
	};

struct estructura_amigo amigo;	/* Declaramos la variable amigo con esa estructura */

main()
{
	printf( "Escribe el nombre del amigo: " );
	scanf( "%s", &amigo.nombre );
	printf( "Escribe el apellido del amigo: " );
	scanf( "%s", &amigo.apellido );
	printf( "Escribe el número de teléfono del amigo: " );
	scanf( "%s", &amigo.telefono );
	printf( "Mi amigo %s %s tiene el número: %s.\n", amigo.nombre,
		amigo.apellido, amigo.telefono );
}
