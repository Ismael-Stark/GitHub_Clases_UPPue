#include <stdio.h>

#define pi 3.1416

#define codigo1	1
#define codigo2	1

/*#define 	label 	text
#elif 		condition
#else
#endif
#error 		"message"
#if 		condition
#ifdef 		label
#ifndef 	label
#include 	{"filename" | <filename>}
#message 	"message"
#undef 		label*/


#undef codigo1
#if codigo1 == 1
void f1(){
	printf("\n\nFuncion 1");
}
#elif codigo1 == 2
void xf1(){
	printf("\n\nFuncion 1 #elif");
}
#endif

#if codigo2
void f2(){
	printf("\n\nFuncion 2");
}
#endif

int main(){
	int d=8;
	
	printf("\n\nPI %f",pi);

	#if codigo1 == 1
		f1();
	#elif codigo1 == 2
		xf1();
	#endif



	#if codigo2
		f2();
	#endif
	
		
		printf("\n\nsoy un texto normal %d",d);
		
		printf("\nmacro date %s",__DATE__);
		printf("\nmacro time %s",__TIME__);
		printf("\nmacro file %s",__FILE__);
		printf("\nmacro line %d",__LINE__);
		printf("\nmacro ansi %d",__STDC__);
	
	//printf("\n\nsoy un texto normal %d",d);
}

