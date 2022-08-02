#include <stdio.h>
#define PI 3.1416

int main(){
	float l, l1, l2, l3, b, h, r;			//entradas
	float as, ps, ar, pr, at, pt, ac, pc;	//salida
	
	printf("\nPrograma que calcula areas y perimetros en m");
	
	printf("\nArea y perimetro del cuadrado\nDame un lado del cuadrado "); //Printf imprime texto
	scanf("%f",&l);							//scanf lee entrada por el teclado
	//scanf("AquiNoPuedeIrTexto%f",&l);		//nunca escribir algun mensaje dentro de scanf()
	as = l*l;
	ps = l*4;
		
	printf("\n\nArea y perimetro del rectangulo\nDame la b y h");
	scanf("%f",&b);
	scanf("%f",&h);
	ar = b*h;
	pr = 2*(b+h);
	
	printf("\n\nArea y perimetro del triangulo\nDame la b y h");
	scanf("%f",&b);
	scanf("%f",&h);
	printf("Dame los 3 Lados del triangulo ");
	scanf("%f%f%f",&l1,&l2,&l3);
	/*scanf("%f",&l1);
	scanf("%f",&l2);
	scanf("%f",&l3);*/
	at = (b*h)/2;
	pt = l1+l2+l3;
	
	printf("\nEl area del cuadrado es: %.3f",as);
	printf("\nEl perimetro del cuadrado es: %.3f",ps);
	
	printf("\nEl area del rectangulo es: %.3f",ar);
	printf("\nEl perimetro del rectangulo es: %.3f",pr);
	
	printf("\nEl area del triangulo es: %.3fm",at);
	printf("\nEl perimetro del triangulo es: %.3fm",pt);
		
}

