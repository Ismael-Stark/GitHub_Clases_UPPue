#include "stdio.h"

int main(){
	int x;
	
	x = 6;
	printf("%d\n",x);
	x *= 5;			//es lo mismo si escribimos x = x * 5
	printf("%d\n\n",x);
	
	
	x = 6;	//vuelvo a asignar el 6 a x, ya que el operador
			//asigancion es una operador destructivo
			//y x por la ultima operacion valia 30
	x /= 2;		//es lo mismo si escribimos x = x / 5
	printf("%d\n\n",x);
	
	x = 6;	//vuelvo a asignar el 6 a x, ya que el operador
			//asigancion es una operador destructivo
			//y x por la ultima operacion valia 3
	x += 4;		//es lo mismo si escribimos x = x + 4
	printf("%d\n\n",x);
	
	x = 6;	//vuelvo a asignar el 6 a x, ya que el operador
			//asigancion es una operador destructivo
			//y x por la ultima operacion valia 10
	x -= 1;		//es lo mismo si escribimos x = x - 1
	printf("%d\n\n",x);
	
	x = 6;	//vuelvo a asignar el 6 a x, ya que el operador
			//asigancion es una operador destructivo
			//y x por la ultima operacion valia 5
	x %= 5;		//es lo mismo si escribimos x = x % 5
	printf("%d\n\n",x);
	
	
	x = 6;	//vuelvo a asignar el 6 a x, ya que el operador
			//asigancion es una operador destructivo
			//y x por la ultima operacion valia 1
	x <<= 1;		//es lo mismo si escribimos x = x << 1
	printf("%d\n\n",x);
	
	x = 6;	//vuelvo a asignar el 6 a x, ya que el operador
			//asigancion es una operador destructivo
			//y x por la ultima operacion valia 12
	x >>= 1;		//es lo mismo si escribimos x = x >> 1
	printf("%d\n\n",x);
	
	
	x = 9;
	x <<= 2;
	printf("%d\n\n",x);
	
	x = 9;
	x >>= 2;
	printf("%d\n\n",x);
	
	x = 170;
	x <<= 5;
	printf("%d\n\n",x);
	
	unsigned char x2;
	x2 = 170;
	printf("%u\n",x2);
	x2 <<= 5;
	printf("%d\n\n",x2);
	
	x = 9;
	x >>= 4;
	printf("%d\n",x);
	x <<= 4;
	printf("%d\n\n",x);
	
	
	x = 13;
	x >>= 2;
	printf("%d\n",x);
	x <<= 3;
	printf("%d\n\n",x);
	
	x = 9 & 13;
	printf("%d\n\n",x);
	
	x = 6;
	x &= 1;
	printf("%d\n\n",x);
	
	x = 14 & 11;
	printf("%d\n\n",x);
	
	
	x = 9 | 13;
	printf("%d\n\n",x);
	
	x = 11 | 14;
	printf("%d\n\n",x);
	
	
	x = 6;
	x ^= 1;
	printf("%d\n\n",x);
	
	x = 91;
	x ^= 230;
	printf("%d\n\n",x);
	

	x = 213 ^ 91;
	printf("%d\n\n",x);
	
}








