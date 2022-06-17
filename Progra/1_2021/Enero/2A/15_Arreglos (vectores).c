#include <stdio.h>

int main(){
	int x[12] = {-45, 6, 0, 72, 1543, -89, 0, 62, -3, 1, 6453, 78};
	
	
	int a = 5,b = 6;
	
	x[0] = 8;		//guardo el 8 en  la posicion 0 del array x, sustuyendo al -45
	x[0] = 10;
	x[4] *= -1;
	
	printf("%d\n",x[0] );
	printf("%d\n",x[1] );
	printf("%d\n",x[2] );
	printf("%d\n",x[3] );
	printf("%d\n",x[4] );
	
	
	printf("%d\n",x[a+b] );
	
	
}