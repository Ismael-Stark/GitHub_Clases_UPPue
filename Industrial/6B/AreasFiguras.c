#include<stdio.h>
int main (void)
{
  int l,b,h,r,D,d,cuadrado,triangulo,retangulo,circulo,rombo,res;
  float pi, radio, area;
  pi = 3.1416;
  
  while (res != 6){
  
	printf("\n\nseleccione la opcion deseada\n1.-cuadrado\n2.-Triangulo\n3.-Rectangulo\n4.-rombo\n5.-circulo\n6 -Salir\n");
    scanf("%d",&res);
    switch(res){
    	case 1:
		printf("ingrese un lado: ");
		scanf("%d",&l);
		cuadrado=l*l;
		printf("el area es: %d\n",cuadrado);
		break;
	 case 2:
		printf("ingrese la base: ");
		scanf("%d",&b);
		printf ("ingrese la altura: ");
		scanf("%d",&h);
		triangulo=(b*h)/2;
		printf("el area es : %d\n",triangulo);
	    break;
     case 3:
     	printf("ingrese la base: ");
     	scanf("%d",&b);
     	printf("ingrese la altura: ");
     	scanf("%d",&h);
     	retangulo=(b*h);
     	printf("el areas es: %d\n",retangulo);
     	break;
     case 4:
     	printf("ingrese diagonal mayor");
     	scanf("%d",&D);
     	printf("ingrese diagonal menor");
     	scanf("%d",&d);
     	rombo=(D*d)/2;
     	printf("el area es : %dcm\n,cm",rombo);
     	break;
     case 5:
        printf("Programa que calcula el area de un circulo\nDame el radio del circulo:");
	    scanf("%f",&radio);//aqui se pide el dato tipo float
     	//radio = 970; //cm
	    area = pi * radio * radio;
	    printf("El area del circulo es: %fcm\n\n",area);// %f es para imprimir un dato float
		 break;
	 case 6:
	 	break;
	 	break;
	 default:
		break;
	}
 }
	system("pause");
}