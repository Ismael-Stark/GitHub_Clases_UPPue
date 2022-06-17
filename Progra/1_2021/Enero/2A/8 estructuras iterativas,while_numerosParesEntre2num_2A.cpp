//Realiza un programa en C que pida 2 numeros enteros,
//e imprima los numeros pares que existen entre los 2.
//Nota: Se debe validar que el segundo numero sea mayor que el primero.

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int n1, n2, i;
	
	n1 = 4;
	n2 = 20;
	
	if (n1 > n2){
		printf("Error n2 debe ser mayoy que n1\n");
		system("pause");
		return 0;
	}
		
	i = n1;
	while(i <= n2){
		if(i % 2 == 0){
			printf("%d\n",i);
		}
		i++;
	}
	system("pause");
}