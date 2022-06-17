//programa que imprime una tabla de multiplicar
#include <stdio.h>
int main(int argc, char *argv[])
{
	int limite = 20;
	int i, t;
	t = 4;	// t es para introducir que tabla quiere uno
	printf("tabla de multiplicar usando FOR\n");
	for(i=1;i <= limite; i++ )
	{
		printf("%d x %d = %d\n", t, i, t*i);
	}
	//exit(0);
}