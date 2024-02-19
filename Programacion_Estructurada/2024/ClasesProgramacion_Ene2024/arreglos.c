#include <stdio.h>
//arreglos (array)
//son un conjunto de variables de mismo tipo y que tienen el mismo nombre
//int, float, char, bool

//tipo_Dato   NombreVariable[tamañoDeArray]


int main(){
	int cal[3];
	cal[0] = 8;//forma de inicializar un array
	cal[1] = 9;
	cal[2] = 7;
	
	float proga[22], algebra[22], manteniento[22], EyM[22];
	float promedio[22];
	
	float calf_Ivan[7] = {7.8, 6.7, 8, 8.8, 5.0, 7.9, 9.8};//forma 1
									//de inicializar un array	
	/*calf_Ivan[0] = 6.7; //forma 2 de inicializar un array
	calf_Ivan[1] = 7;
	calf_Ivan[2] = 8.7;*/
	
	proga[2-1] = 9;
	algebra[1] = 8.5;
	manteniento[1] = 8.8;
	EyM[1] = 7.8;
	promedio[1] = (proga[1] + algebra[1] + manteniento[1] + EyM[1])/4;
	
	
	printf("califiacion[0] = %f\n",proga[1]);
	printf("califiacion[1] = %f\n",algebra[1]);
	printf("califiacion[2] = %f\n",manteniento[1]);	
	printf("el pomedio de [1] es : %f\n",promedio[1]);
	
	printf("\ncalificaciones de ivan[0] %.2f\n", calf_Ivan[0]);
	printf("calificaciones de ivan[1] %.2f\n", calf_Ivan[1]);
	printf("calificaciones de ivan[2] %.2f\n", calf_Ivan[2]);
	printf("calificaciones de ivan[3] %.2f\n", calf_Ivan[3]);
	printf("calificaciones de ivan[4] %.2f\n", calf_Ivan[4]);
	printf("calificaciones de ivan[5] %.2f\n", calf_Ivan[5]);
	printf("calificaciones de ivan[6] %.2f\n", calf_Ivan[6]);
	
	float promedio_ivan = 0;
	
	//promedio_ivan = calf_Ivan[0] + calf_Ivan[1] + calf_Ivan[2] + calf_Ivan[3] + calf_Ivan[4] +calf_Ivan[5] +calf_Ivan[6];
	
	for(int i = 0 ; i<7; i++){
		promedio_ivan += calf_Ivan[i];
	}
	promedio_ivan /=7.0;
	printf("el promedio de ivan es: %.2f\n", promedio_ivan);
	
	
	
	for(int i = 0 ; i<7; i++){
		scanf("%f",&calf_Ivan[i]);
	}
	
	for(int i = 0 ; i<7; i++){
		printf("calificaciones de ivan[%d] %.2f\n", i, calf_Ivan[i]);
	}
	
	
}