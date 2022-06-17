#include <stdio.h>

int main(){
	int x[12] = {-45, 6, 0, 72, 1543, -89, 0, 62, -3, 1, 6453, 78};
	int a = 5, b=6;
	
	//x[0] = 8; //guardo el 8 en la posicion 0 del array, se sustituye(se borra) el -45
	x[4] *= -1;
	
	printf("%d\n", x[0]);
	printf("%d\n", x[1]);
	printf("%d\n", x[2]);
	printf("%d\n", x[3]);
	printf("%d\n", x[4]);
	printf("%d\n", x[11]);
	
	x[a + b] += 2;
	
	printf("%d\n", x[11]);
	
	printf( "%d", x[ 0 ] + x[ 1 ] + x[ 2 ] );
	
	
}