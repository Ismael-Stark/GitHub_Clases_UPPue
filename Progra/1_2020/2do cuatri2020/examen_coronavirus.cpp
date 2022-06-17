#include "stdio.h"

int main(){
	int a=2,b=3,c=4,d=5;
	int x;
	//1
	x= a+b*c/d;
	printf("1:\ta+b*c/d = %i\n",x);
	//2
	x= a%5%2+c;
	printf("2:\ta%%5%%2+c = %i\n",x);
	//3
	x= (a+b)*c%d;
	printf("3:\t(a+b)*c%%d = %i\n",x);
	//4
	x= (d<65)&&(3==d);
	printf("4:\t(d<65)&&(3==d) = %i\n",x);
	//5
	x= a<=b||(3>a);
	printf("5:\ta<=b||(3>a) = %i\n",x);
	//6
	x= (c<=7+d)||(7>c);
	printf("6:\t(c<=7+d)||(7>c) = %i\n",x);
	//7
	x= (a>=d) && (2-14==c+1);
	printf("7:\t(a>=d)&&(2-14==c+1) = %i\n",x);
	//8
	x= a%d%c;
	printf("8:\ta%%d%%c = %i\n",x);
	//9
	x= 3+5*d%10;
	printf("9:\t3+5*d%%10 = %i\n",x);
	//10
	x= a/b%2;
	printf("10:\ta/b%%2 = %i\n",x);
	//11
	x= -a*7;
	printf("11:\t-a*7 = %i\n",x);
	//12
	x= (a>d)&&(b<c)||(d>5);
	printf("12:\t(a>d)&&(b<c)||(d>5) = %i\n",x);
	//13
	x= ((a>b)||(a<c))&&(a==c);
	printf("13:\t((a>b)||(a<c))&&(a==c) = %i\n",x);
	//14
	//x= ||a>=b;
	printf("14:\t||a>=b = error sintaxis\n");
	//15
	x= ((a>=b)||(a<d))&& 16;
	printf("15:\t((a>=b)||(a<d))&& 16 = %i\n",x);
	//16
	x= ((a>=d)&&(c<d));
	printf("16:\t((a>=d)&&(c<d)) = %i\n",x);
	//17
	x= !(a<=d)||(c>d);
	printf("17:\t!(a<=d)||(c>d)) = %i\n",x);
	
	int aa,bb,cc=3,dd=2;
	aa=8-5 * 3 + 2;
	bb=7%3 +4 * 2;
	printf(" valor de a %d\t valor de b %d\n",aa,bb);
	bb%=aa;
	printf(" valor de b% d\n",bb);
	bb=(-4)%3;
	printf(" valor de b% d\n",bb);	
}
