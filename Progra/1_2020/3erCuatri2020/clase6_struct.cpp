//Estructuras

//tarea, investigar que es POO(programacion orientada a objetos) miercoles

//tarea2 hacer el mismo progrma de examen del cuatri pasado sobre los productos producidos
//y vendidos en el año en una granja, usando estructuras-- viernes

#include <stdio.h> 

struct dispositivo{
	char color[10];
	float cable;
	char marca[10];
};

struct F{
	char nombre[20];
	float calificacion;
	char materia[20];
};

struct verdura{
	int producido[13];
	int vendido[13];
	int ganancia[14];
};

int main(){
	dispositivo mouse,monitor;
	F alumno;
	
	verdura tomates,lechuga;
	
	tomates.producido[1]=20;
	tomates.vendido[1]=10;
	tomates.ganancia[1]=1000;
	
	lechuga.producido[1]=100;
	
	
	sprintf(alumno.nombre,"samuel");
	sprintf(alumno.materia,"programacion");
	alumno.calificacion = 5;
	
	
	
	mouse.cable = 1.5;
	sprintf(mouse.color,"negro");
	sprintf(mouse.marca,"Genius");
	
	monitor.cable=2.5;
	sprintf(monitor.color,"negro");
	sprintf(monitor.marca,"Samsung");
	
	printf("\nel mouse que tienes en marca %s de color %s "
			"con un largo de cable de %.2fm\n",mouse.marca,mouse.color,mouse.cable);
			
	printf("\nel monitor que tienes en marca %s de color %s "
			"con un largo de cable de %.2fm\n",monitor.marca,monitor.color,monitor.cable);
	
	printf("\nEl alumno %s obtuvo %.0f "
			"en la materia de %s\n",alumno.nombre,alumno.calificacion,alumno.materia);
}
