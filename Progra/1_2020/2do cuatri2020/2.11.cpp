#include "stdio.h"
int main(){
	float x,y;
	scanf("%f",&y);	
	printf("\ny=%f\n",y);	
	if(y>0 && y<=11){
		x=y+33;
		printf("%f",x);
	}else if(y>11 && y<=33){
		x=y*y-10;
		printf("%f",x);
	}else if(y>33 && y<=64){
	 	x=y*y*y + y*y -1;
	 	printf("%f",x);
	}else{
		x=0;
		printf("%f",x);
	}
	
}
