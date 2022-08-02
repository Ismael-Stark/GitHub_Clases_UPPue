#include <stdio.h>
int main(int argc, char *argv[])
{
	int i = 0, limite = 100;
	
	/*while(i <= limite){
		printf("%d\n", i);
		i += 2;
	}*/
	
	i = 100, limite = 0;
	
	while(i >= limite){
		printf("%d\n", i);
		i -= 2;
	}
}