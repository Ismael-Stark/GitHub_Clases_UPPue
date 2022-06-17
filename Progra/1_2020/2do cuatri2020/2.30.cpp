#include "stdio.h"
int main(){
	int x;
	
	scanf("%i",&x);
	printf("%d \t%d \t%d \t%d \t%d \t",(x/10000)%10,(x/1000)%10 ,(x/100)%10 ,(x/10)%10, x%10);
	
}


























