#include <stdio.h>
int main(int argc, char *argv[])
{
	int limite = 25;
	int i;
	
	for (i = 1; i*i <= limite; i++)	
	{
		printf("i = %d, su cuadrado es: %d\n", i, i*i);
	}
	//exit(0);
}