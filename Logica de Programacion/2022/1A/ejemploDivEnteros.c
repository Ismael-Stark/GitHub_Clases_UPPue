 #include <stdio.h>
 
 
 int main(){
 	float resultado, resultado2;
 	unsigned int a =18, b=5;
 	
 	//casteo: casteo es convertir una variable de un tipo a otro tipo
 	
 	resultado = a/b; //sin casteo divison da numero entero y sepierden decimales
 	
 	resultado2 = a/(float)b;// para hacer casteo directo:
	 					//entre ( ) escribir el tipo de dato a convertir, y poner
 						//antes de la variable, ej: (float)Var1
 						//							(int)Var2,
 						//solo sirve para int y float, texto se ocupa otra cosa
 	/*  (float)Var1
	 nota: Var1  sige siendo del tipo que ha sido declarada osea int, no se vuelve
	 flotante solamente se convierte a flotante en memoria para hacer la operacion
	 y dar un resultado del tipo float
	 
	 lo anterior aplica para Var2
	 */
 	
 	printf("r1 %f\n",resultado);//division entre enteros, da un numero entero
 	
 	printf("r2 %f\n",resultado2);//se hace casteo para poder hacer una divison entre enteros
 							//y dar un resultado del tipo float
 							
 	printf("b = %f\n",b);		//comprobamos que b no se volvio flotante
 	printf("b = %i\n",b);		//comprobamos que b siempre fue int
 	
 	printf("r2 %i\n",(int)resultado2);//imprimimos resultado2 como tipo int, aunque 
 								//la variable sea float (se le hizo casteo)

 }			