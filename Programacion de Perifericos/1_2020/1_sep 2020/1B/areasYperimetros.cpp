#include "stdio.h"

int main(){
	float l, l2, l3, b, h, r, as,ps, ar, pr, at, pt, ac, pc;
	
	printf("\nPrograma que calcula Areas y perimetros");
	printf("\nArea y perimetro del cuadrado\nDame un lado del cuadrado en m ");
	//scanf("AquiNoDebeIrTexto%f",&l);		//nunca escribir algun mensaje dentro de scanf()
	scanf("%f",&l);
	as = l*l;
	ps = l*4;
	
	printf("\n\nArea y perimetro del rectangulo");
	printf("\nDame b en m ");
	scanf("%f",&b);
	printf("Dame h en m ");
	scanf("%f",&h);
	ar = b*h;
	pr = 2*(b+h);	// antes o despues de un parentesis especificar que operacion hacer
					// esto nos da error 2(b+h), despues del 2 debe especificarse que operacion se va a realizar
	
	
	printf("\n\nArea y perimetro del triangulo");
	printf("\nDame b en m ");
	scanf("%f",&b);
	printf("Dame h en m ");
	scanf("%f",&h); 
	printf("Dame los Lados del triangulo en m ");
	scanf("%f%f%f",&l,&l2,&l3);
	at = (b*h)/2;
	pt = l+l2+l3;
		
	
	
	printf("\nEl area del cuadrado es: %.3fm",as);
	printf("\nEl perimetro del cuadrado es: %.3fm",ps);
	printf("\nEl area del rectangulo es: %.3fm",ar);
	printf("\nEl perimetro del rectangul0 es: %.3fm",pr);
	printf("\nEl area del triangulo es: %.3fm",at);
	printf("\nEl perimetro del triangulo es: %.3fm",pt);
	
}
