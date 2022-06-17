#include <stdio.h> 


#pragma once			//para mandar a definir una ver el codigo
//#ifndef clase7_menu	//y si se vueleve a llamar la libreria
//#define clase7_menu	//no de error por declara mas de una vez las
						//mismas funciones

void f1(){
	printf("\nentraste a la funcion 1\n\n");//imprime
}

void f2(){
	char txt[50];
	do {
		printf("\nentraste a la funcion 2\n\n");//imprime
		gets(txt);
	}while( txt[0] != 'c');
	
}
//#endif
