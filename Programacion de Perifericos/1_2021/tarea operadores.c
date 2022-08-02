#include <stdio.h>

int main(){
	int a = 2, b = 3 , c = 4, d = 5;
	int x;
	printf("1. %d\n", a + b * c / d); 			//4
	
	a = 2; b = 3 ; c = 4; d = 5;
	printf("2. %d\n", 1 % 5 % 2 + c);			//5
	
	a = 2; b = 3 ; c = 4; d = 5;
	printf("3. %d\n", (a + b) * c % d);			//0
	
	a = 2; b = 3 ; c = 4; d = 5;
	printf("4. %d\n", (d < 65) && (3 == d));	//0		false
	//printf("5. %d\n", a <= || (3 > a));
	printf("5.No se puede\n");
	
	a = 2; b = 3 ; c = 4; d = 5;
	printf("6. %d\n", (c <= 7 + d) || (7 > c));			//1		true
	
	a = 2; b = 3 ; c = 4; d = 5;
	printf("7. %d\n", (a >= d) && (2 - 14 == c +1));	//0		false
	
	a = 2; b = 3 ; c = 4; d = 5;
	printf("8. %d\n", a % d % c);				//2
	
	a = 2; b = 3 ; c = 4; d = 5;
	printf("9. %d\n", 3 + 5*d % 10);			//8
	
	a = 2; b = 3 ; c = 4; d = 5;
	printf("10. %d\n", a / b % 2);				//0
	
	a = 2; b = 3 ; c = 4; d = 5;
	printf("11. %d\n", -a * 7);					//-14
	
	a = 2; b = 3 ; c = 4; d = 5;
	printf("12. %d\n", (a>d) && (b<c) || (d<5));		//0		false
	
	a = 2; b = 3 ; c = 4; d = 5;
	x =  (a < c) && (a=c) ;
	//printf("13. %d ---\n", x);
	
	a = 2; b = 3 ; c = 4; d = 5;
	printf("13. %d\n",  ((b>d) || (a < c) && (a=c) ) );	//0 or 1 and a=c   resultado 1 
	//printf("14. %d\n", || (a>=b)));
	printf("14.No se puede\n");
	
	a = 2; b = 3 ; c = 4; d = 5;
	printf("15. %d\n", ((a>=b) || (a<d)) && 16);		//0 or 1 and 16, resultado 1
	
	a = 2; b = 3 ; c = 4; d = 5;
	printf("16. %d\n", ((a>=d) && (c>d)));				//0 and 0  = 0 
	
	a = 2; b = 3 ; c = 4; d = 5;
	printf("17. %d\n", !(a>=c) || (c>d));				// !0 or 0  = 1
	
	

	c=3,d=2;
	a = 8 - 5 * 3 +2;
	b= 7%3 + 4 *2;
	printf("\nValor de a %d\t valor de b %d\n",a,b);
	b%=a;
	printf ("valor de b %d\t\n",b);	
	b= (-4) %3;
	printf ("valor de b %d\t\n",b);	


}
