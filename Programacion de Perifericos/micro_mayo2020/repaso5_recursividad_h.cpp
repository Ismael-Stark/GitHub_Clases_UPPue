///arcivo de implementacion en C     *.c	*.cpp
#include "repaso5_recursividad_h.h"

unsigned long long int factorial(unsigned long long int x ){
	if (x<=1){
		return 1;
	}else{
		return (x * (factorial(x-1) )  );
	}
}  
