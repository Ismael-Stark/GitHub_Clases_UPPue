#include <stdio.h>
#include <math.h>

int main(){
	int x;	
	
	while (true){
		printf("\ndame x: ");
		scanf("%i",&x);
		printf ("el modulo de %i es: %i\n",x,x%4);
		switch (x%4){
			case 0:
				printf("x^2 = %i",x*x);
				break;	
			case 1:
				printf("x/6 = %f",((float)x/6));
				break;
			case 2:
				printf("raiz de x = %f",sqrt(x));
				break;
			case 3:
				printf("x^3 + 5 = %i",(x*x*x)+5);
				break;				
		}
	}
	
}
