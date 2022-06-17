#include <stdio.h>
#include <string.h>
#include <stdint.h> //para declarar variables tipo uint8_t....etc


struct reloj{				///Forma 1
	uint8_t unidades;
	uint8_t decenas;
};

struct alumno{				///Forma 2
	uint8_t nombre[30];
	int8_t edad;
	int8_t calificacion;
}juan, orlando, mayra ;

int main(){
	
	/*struct reloj{
		int unidades;
		int decenas;
	};*/
	struct reloj horas, minutos, segundos;				///Forma 1
	
	juan.calificacion = 10;								///Forma 2
	sprintf(juan.nombre,"Hola");
	//strcpy(juan.nombre,"Hola");
	
	//juan.nombre = {"Hola"};
	
	horas.unidades = 2;
	horas.decenas = 2;
	
	minutos.unidades = 3;
	minutos.decenas = 5;
	
	segundos.unidades = 2;
	segundos.unidades = 1;
	
	printf("son las %d%d:%d%d Hrs,",horas.decenas,horas.unidades,minutos.decenas,minutos.unidades);
	printf("%s",juan.nombre);
	
}