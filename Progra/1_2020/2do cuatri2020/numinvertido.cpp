#include<stdio.h>

 int main(){
	unsigned long int num;
	printf("introduce un valor:");
	scanf("%Lu", &num);
	printf("\n numero invertido:");
	do{
		printf("%Lu", num%10);
		num/=10; //num = num /10
	}while(num!=0);
	return 0;
	
}
