#include <stdio.h>
//arreglos (array)
//son un conjunto de variables de mismo tipo y que tienen el mismo nombre
//int, float, char, bool

//tipo_Dato   NombreVariable[tamañoDeArray]


int main(){
	char cal[5]={-4,5,8,6,8}, ivan[7]={1,2,3,4,5,6,7};
	float karen[7]={1.4,2,3,4,5,6,7.0};
	
	printf("califiacion[0] = %d, %p\n",cal[0],&cal[0]);
	printf("califiacion[1] = %d, %p\n",cal[1],&cal[1]);
	printf("califiacion[2] = %d, %p\n",cal[2],&cal[2]);	
	printf("califiacion[3] = %d, %p\n",cal[3],&cal[3]);	
	printf("califiacion[4] = %d, %p\n",cal[4],&cal[4]);	
	printf("ivan[0] = %d, %p\n",ivan[0],&ivan[0]);	
	printf("ivan[6] = %d, %p\n",ivan[6],&ivan[6]);	
	
	printf("karen[0] = %f, %p\n",karen[0],&karen[0]);	
	printf("karen[1] = %f, %p\n",karen[1],&karen[1]);
	printf("karen[2] = %f, %p\n",karen[2],&karen[2]);	
	
}