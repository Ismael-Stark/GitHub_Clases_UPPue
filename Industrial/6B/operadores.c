//incluir librerias
#include <stdio.h> //es la libreria basica y siempren debe ir
#include <math.h>
#include <string.h>

int main(){
	int a,b,c,d,e,f;
	a = 23;
	b = 15;
	c = 10;
	
	a = a + 1;	
	a += 1; //a = a + 1;
	a++;//a += 1; //a = a + 1;
	
	printf("%i\n",a);
	
	a *= 2;
	printf("%i\n",a);
	
	a++;
	a /= 2;
	printf("%i\n",a);
	
	c = 5%3;
	printf("%i\n",c);
	
	int Boton1 = 1, Boton2 = 0;
	//  ||
	if (Boton1==1 && !(Boton2==1)){
		printf("foco encendido\n");
		
	}
	
	
	
}
	