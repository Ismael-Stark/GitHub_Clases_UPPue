#include <stdio.h>
int main(){
	int numero1, numero2,numero3, numero4,numero5,media;
	printf("Dame el primer numero\n");
	scanf("%d",&numero1);
	
	printf("Dame el segundo numero\n");
	scanf("%d",&numero2);
	
	printf("Dame el tercero numero\n");
	scanf("%d",&numero3);
	
	printf("Dame el cuartyo numero\n");
	scanf("%d",&numero4);
	
	printf("Dame el quinto numero\n");
	scanf("%d",&numero5);
	
	media = (numero1 + numero2 + numero3 +numero4 + numero5 )/ 5 ;
	
	printf("La media es: %d\n",media);		
}