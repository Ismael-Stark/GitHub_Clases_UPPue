//programa que imprime una tabla de multiplicar
#include <stdio.h>
int main(int argc, char *argv[])
{
	int limite = 10;
	int i, t;
	i = 1;	//contador del 1 al 10
	t = 2;	// t es para introducir que tabla quiere uno
	while(i <= limite)
	{
		printf("%d x %d = %d\n", t, i, t*i);
		i++;
	}
	//exit(0);
}