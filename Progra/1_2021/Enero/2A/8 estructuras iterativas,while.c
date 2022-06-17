//programa que calcula todos los cuadrados hasta un limite
#include <stdio.h>
int main(int argc, char *argv[])
{
	int limite = 50;
	int i;
	
	i=1;
	while(i*i <= limite)
	{
		printf("i = %d, su cuadrado es: %d\n", i, i*i);
		i++;
	}
	exit(0);
}