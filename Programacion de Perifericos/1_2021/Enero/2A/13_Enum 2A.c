#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/*
enum identicador
{
    // lista a enumerar
    //si no se incializa, 
    //el primero en la lista vale 0
    //el segundo vale 1... asi sucesivamente
}

*/

enum DAY            /* Defines an enumeration type    */
{
    saturday,       /* Names day and declares a       */
    sunday = 0,     /* variable named workday with    */
    monday,         /* that type                      */
    tuesday,
    wednesday,      /* wednesday is associated with 3 */
    thursday,
    friday
} workday;


enum diaSenama { lunes=1,  	martes, 	miercoles,	jueves,	viernes,	sabado,	domingo};


int main(){
	
	enum diaSenama dia;
	enum DAY x;
	
	x = domingo;
	dia = martes;
	
	printf("%d\n", lunes);
	printf("%d\n", martes);
	printf("%d\n", miercoles);
	printf("%d\n", jueves);
	printf("%d\n", viernes);
	printf("%d\n", sabado);
	printf("%d\n", domingo);
	
	printf("%d\n", dia);
	printf("x%d\n", x);
	
}






