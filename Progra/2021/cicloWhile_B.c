#include <stdio.h>
#include <string.h>

int main(){
	int opcionMenu;
	float num1, num2, resultado;
	
	/*while(condicional/contador){
		//preocesos
	}*/
	num1 = num1 + 1;//incrementamos en 1 la variable num
	num1++;			//incrementamos en 1 la variable num
	
	
	int i = 0;
	while(i<=100){
		printf("%d\n",i);
		
		/*if(i==50){
			break;	//hace que el ciclo while termine abrutamente auqnue la condicional dentro del while aun no se termine;
		}*/
		
		if(i==50){
			i = 101;//otra forma de terminar un while es haciendo que la condicional dentro de este, ya no se cumpla;
		}

		i++;
	}
}