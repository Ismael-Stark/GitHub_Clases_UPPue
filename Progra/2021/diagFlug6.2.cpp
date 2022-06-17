#include <stdio.h>



int main(){
	int n,l,raiz,divisor;
	n=11;
	l=2;
	while(l<=n){
		if (l<4){
			printf("%d\n",l);
		}else{
			if(l%2 !=0){
				raiz= l/2;
				divisor = 3;
				while( (divisor <=raiz) && (l%divisor)  !=0  ){
					divisor = divisor +2;
				}
				if(l%divisor !=0){
					printf("%d\n",l);
				}
			}			
		}
		l++;
	}
	
	printf("\n\n\n%d\n",!(2>3));	
	
}