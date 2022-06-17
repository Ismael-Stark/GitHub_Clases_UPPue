#include <stdio.h>

#define pi 3.1416
#define x 10
#define micro 0

/*#ifndef __unix__ // __unix__ is typically defined when targetting Unix 
#error "Only Unix is supported"
#endif */

#ifdef __cplusplus
	#pragma message("Estas usando C++")
#endif

#if micro
void saludar(){
	printf("\n\nHola soy una funcion dentro"
			"de una directiva \n%f %d",pi,x);
}
#endif

//#pragma once
#ifndef _label
#define _label
	void saludar2(){
		printf("\n\nHola soy la funcion 2 dentro"
			"de una directiva \n");
	}
#endif




int main(){
	int d=8;
	#if micro
		saludar();
	#endif
	
	saludar2();
	
		printf("\n\nsoy un texto normal %d",d);
		
		printf("\nmacro date %s",__DATE__);
		printf("\nmacro time %s",__TIME__);
		printf("\nmacro file %s",__FILE__);
		printf("\nmacro line %d",__LINE__);
		printf("\nmacro ansi %d",__STDC__);
		
		
	
	
	//printf("\n\nsoy un texto normal %d",d);
}

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
