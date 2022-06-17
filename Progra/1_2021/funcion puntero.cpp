#include <stdio.h>
#include <stdint.h>

void get_date(uint8_t &a,uint8_t &b,uint8_t &c){
	a=10;
	b=11;
	c=12;
}

int main(){
	uint8_t x,y,z;
	
	get_date(x,y,z);
	printf("%d\t%d\t%d",x,y,z);
}