//pedir 2 numeros e imprimir los numeros pares que hay entre ellos
//ej n1 = 20, n2 = 30
//respuesta: 22, 24, 26, 28
//verificar n1 < n2
#include <stdio.h>
int main(int argc, char *argv[])
{
	int n1, n2, i;
	n1 = 55;
	n2 = 40;
	
	if (n1 > n2){
		printf("el numero2 debe ser mayor que n1\n");
		return 0;
	}

	for (i = n1; i <= n2; i++)
	{
		if(i % 2 == 0){
			printf("%d\n",i);
		}
	}
}