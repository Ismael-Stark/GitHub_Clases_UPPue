#include <stdio.h>
#include <string.h>
#include <stdlib.h>


long long int factorial(long long int x ){
	if (x<=1){
		return 1;
	}else{
		return (x * (factorial(x-1) )  );
	}
}  
//							-std=c++14
int main(){
	int x,y=1,t=80;
	char c[10];
	printf("dame un numero\n");
	//putchar(t);
	//scanf("%d",&x);
	
	x = atoi(gets(c));
	
	y = factorial(x);
	
	printf("el factorial de %d es %d\n",x, y );
	
	
	
	/*for(int i=1;i<=x;i++){
		y*=i;
	}*/
	
}
