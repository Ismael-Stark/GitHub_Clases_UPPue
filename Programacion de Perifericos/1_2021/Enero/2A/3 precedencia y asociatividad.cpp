#include "stdio.h"

int main(){
	int num1;
	int num2;
	float a, b;
	
	num1 = 2 * 3 / 4.0 + 5;
	a = 2 * 3 / 4.0 + 5;
	printf("%d,  %f\n\n", num1, a);
	
	num2 = 4 * 3 / 10 % 2;
	b = 4 * 3 / 10 % 2;
	
	/*num2 = (int)(4 * 3 / 10.0) % 2;
	b = (int)(4 * 3 / 10.0) % 2;*/
	printf("%d,  %f\n\n", num2, b);
	
	
	if ( 2 * 3 / 4 + 5 >= 4 * 3 / 10 % 2 ){
		printf(" la condicion escrita dentro de if se cumple\n");
	}
	
	printf("%d\n", ( 3 * 9 * ( 3 + ( 9 * 3 / (3)))) );
}