#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

struct alumno{
	char materia[20];
	int edad;
	int calificacion;
};


struct mouse{
	float largocable;
	char color[30];
	int botones;
	int rueda;
	char modeo[30];
};

int main(){
	alumno uriel[20]; //struct con vector
	alumno damian;
	
	mouse genius;
	genius.largocable= 1.5;
	//genius.color="negro";
	strcpy(genius.color,"negro");
	genius.botones=3;
	genius.rueda=1;

	//genius.modeo="om3400u";
	sprintf(genius.modeo,"om3400u");
	
	
	
	printf("\n\nel mouse genius modeo %s es de color %s tiene %i botones",
			genius.modeo,genius.color,genius.botones);
		
	char txt[20];
	printf("dame la edad\n");
	uriel[0].edad = atoi(gets(txt));
	printf("dame la calificacion\n");
	uriel[0].calificacion = atoi(gets(txt));
	printf("dame la materia\n");
	gets(uriel[0].materia);
	
	printf("uriel tiene %i years, obtubo un %i en %s",uriel[0].edad, uriel[0].calificacion,uriel[0].materia);
	

	printf("\n\ndame la edad\n");
	damian.edad = atoi(gets(txt));
	printf("dame la calificacion\n");
	damian.calificacion = atoi(gets(txt));
	printf("dame la materia\n");
	gets(damian.materia);
	
	printf("damian tiene %i years, obtubo un %i en %s",damian.edad, damian.calificacion,damian.materia);
	
	
	
}
