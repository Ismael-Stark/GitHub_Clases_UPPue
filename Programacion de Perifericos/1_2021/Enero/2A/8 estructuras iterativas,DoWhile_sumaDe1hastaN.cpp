//calculo de la sumatoria de i = 1 hasta n
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i, n ,suma;
	n = 10;
	i= 1;
	suma = 0;
	
	do{
		suma += i;
		i++;
	}while( i<=n);
	
	printf("la suma hasta %d es: %d",n, suma);
	//exit(0)
}