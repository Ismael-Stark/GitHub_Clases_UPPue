#include <stdio.h>
#include <string.h>

int main(){
	int x,n,k;
	x=0;
	n = 484;

	while(n>0){
		k = n%10;
		x = x*10+k;
		n = n/10;
	}
	printf("%d",x);
}