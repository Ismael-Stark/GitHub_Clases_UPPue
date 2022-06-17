#include "stdio.h"

int main(){
	//si ponen ++ antes o despues de su variable
	//esta incrementara en 1  y solo  1
	//o visto de otra manera se le sumara +1
	//a su variable
	// x++,   ++x
	int x;
	x = 5;
	printf("x = %d\n\n",x);
	
	x++;
	printf("x = %d\n\n",x);
	
	++x;
	printf("x = %d\n\n",x);
	
	x = x + 1;
	printf("x = %d\n\n",x);
	
	x += 1;
	printf("x = %d\n\n",x);
	
	
	
	x--;
	printf("x = %d\n\n",x);
	
	--x;
	printf("x = %d\n\n",x);
	
	x = x - 1;
	printf("x = %d\n\n",x);
	
	x -= 1;
	printf("x = %d\n\n",x);
	
	
	/*Cuando un operador de incremento o decremento precede a su variable, se llevará a cabo la
	operación de incremento o de decremento antes de utilizar el valor del operando”, tal y como se
	muestra en el siguiente ejemplo*/
	
	int a,b;
	a = 2004;
	b = ++a;
	/* x e y valen 2005. */
	printf("a = %d, b = %d\n\n",a,b);
	
	
	a = 2004;
	b = a++;
	/* y vale 2004 y x vale 2005 */
	printf("a = %d, b = %d\n\n",a,b);
	
	/////////Operadores relacionales: Diferente
	printf("x = %d \n",x);
	
	if (x != 0){
		printf("X es diferente de 0\n\n");
	}
	
	if(2 + 3 / 2 != 4 + 3 - 2 * 5){
		printf("la condicion es verdadera\n\n");
	}
	
	
	if(3 != 3){
		printf("Mostrara este texto?\n\n");
	}else{
		printf("Aqui si entro\n\n");
	}
	
	//Operadores logicos
	
	//AND logico &&
	
	if( 2 + 3 <= 5 && 4 + 3 <= 7){
		printf("Resultado true del and && logico\n\n");
		
	}
	
	if( 5 < 5 && 6 > 5){
		printf("la comparacion es true\n\n");
		
	}else{
		printf("la comparacion es falsa\n\n");
	}
	
	
	
	//OR logico ||
	
	if( 2 + 3 <= 5 || 4 + 3 <= 7){
		printf("Resultado true del OR || logico\n\n");
		
	}

	if( 5 < 5 || 6 > 5){
		printf("xxxEL OR es true\n\n");
	}else{
		printf("xxxla comparacion es falsa\n\n");
	}
	
	
	if( 5 < 5 || 6 < 5){
		printf("EL OR es true\n\n");
		
	}else{
		printf("el OR es falso\n\n");
	}
	
	
	if( 6 > 5 || 10 < 7 && 20 >= 15){
		printf("el resultado del OR y la AND es true\n\n");	
	}
	
	if( 6 > 5 && 10 < 7 || 20 >= 15){
		printf("el resultado dos del OR y la AND es true\n\n");	
	}
	
	//Negacion   !
	
	if( !(5>7)   ){
		printf("el resultado era false pero por la negacion se volvio true\n\n");	
	}
	
	
	
	
	// 5<5 es falso
	// 6>5 es verdadero pero se niega con el simbolo  !
	// final 6 > 5 es falso
	// !(6>5)   es falso
	//al hacer al operacion or, el resultado es falso
	if( 5 < 5 || !(6 > 5)   ){
		printf("xxxEL OR es true\n\n");
	}else{
		printf("xxxla comparacion es falsa\n\n");
	}
}





