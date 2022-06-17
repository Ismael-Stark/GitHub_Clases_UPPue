#include <stdio.h>
#include <string.h>

struct datos
{
    int id; 
    char materia[20]; 
    float calificacion; 
};



int main(){
	datos carlos, juan;
	carlos.id= 80;
	strcpy(carlos.materia, "Progra");
	carlos.calificacion = 5.5;
	printf("\ncarlos tiene:%d\t%s\t%.2f",carlos.id,carlos.materia,carlos.calificacion);
	
	juan = carlos;
	juan.id=70;
	printf("\ny Juan tiene:%d\t%s\t%.2f",juan.id,juan.materia,juan.calificacion);
}
