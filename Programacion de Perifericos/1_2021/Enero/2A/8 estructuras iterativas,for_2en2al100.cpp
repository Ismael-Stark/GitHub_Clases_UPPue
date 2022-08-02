#include <stdio.h>
int main(int argc, char *argv[])
{
	int i = 0, limite = 100;
	
	/*for (i=0;i <= limite; i += 2)
	{
		printf("%d\n", i);
	}*/
	
	limite = 0;
	for (i=100;i >= limite; i -= 2)
	{
		printf("%d\n", i);
	}
}