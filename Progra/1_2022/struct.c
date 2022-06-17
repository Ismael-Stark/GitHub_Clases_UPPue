//Struct
#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

//struct nombre{
//variables y tipos de datos
///
//};

//struct {
//variables y tipos de datos
///
//}nombre;

//struct nombre{
//variables y tipos de datos
///
//}var1,var1,var3.....;

struct materias1{
	float programacion;
	float algebra;
	float calculo;
	float ingles;
	float mantenimiento;
	float electricidad;
	float inteligencia;
}israel,franco;

struct materias{
	float programacion;
	float algebra;
	float calculo;
	float ingles;
	float mantenimiento;
	float electricidad;
	float inteligencia;
};

struct alumno{
	char nombre[30];
	char direccion[30];
	int matricula;
	float edad;
	struct materias materia;
};


int main(){
	/*declaracion de varaibales por materia y para cada alumno, 7 materias y 7 alumnos, alfina 49 variables
	float ivan_progra, ivan_algebra, ivan_calculo.......
	char nombre_ivan[30]; char direccion_ivan[30];int matricula_ivan; 	float edad_ivan;

	float franco_progra, franco_algebra, franco_calculo.......
	float isra_progra, isra_algebra, isra_calculo.......
	*/
	
	struct materias marco,emanuel;
	struct  alumno luis,david,jesus;
	
	israel.algebra = 6.9;
	franco.algebra = 5.8;
	marco.ingles = 0;
	
	luis.materia.mantenimiento = 9;
	luis.matricula = 211203008;
	
	printf("Programa para entener que es un \"struct\"\n\n");
	printf("israel tiene de calificacion en algebra: %.2f \n", israel.algebra);
	printf("franco tiene de calificacion en algebra: %.2f \n", franco.algebra);
	printf("marco tiene de calificacion en ingles: %.2f \n", marco.ingles);
	printf("luis con matricula %i tiene de calificacion en mantenimiento: %.2f \n",luis.matricula, luis.materia.mantenimiento);
	

	
	
	
}