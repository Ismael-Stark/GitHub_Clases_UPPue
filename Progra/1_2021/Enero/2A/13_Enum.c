#include <stdio.h>


/*
enum identicador
{
    // lista a enumerar
    //si no se incializa, 
    //el primero en la lista vale 0
    //el segundo vale 1... asi sucesivamente
}

*/

//con el ENUM crean una lista enumerada, que comienza desde cero si no le dicen de que numero comenzar

enum diaSemama { lunes=1,  	martes, 	miercoles,	jueves =80,	viernes,	sabado,	domingo};

int main(){
	
	printf("%d\n", lunes);
	printf("%d\n", martes);
	printf("%d\n", miercoles);
	printf("%d\n", jueves);
	printf("%d\n", viernes);
	printf("%d\n", sabado);
	printf("%d\n", domingo);
	
	
}