#include <stdio.h>
//Vectores o array de una dimension
int main(){
	int a[3];
	char letra = 'U';//caracter de una sola letra
	char texto[33] = "Soy un texto y van a reprobar :v";//String de 32 letras
	a[0]=34;
	a[1]=43;
	a[2]=56;
	a[3]=32;
	for (int i =0;i<=3;i++ ){
		printf("\nEl valor de a[%i] = %d",i,a[i]);
	}
	
	printf("\nEl valor de letra es = %c y su valor en ASCII es: %d",letra,letra);
		
	texto[7]='T';//Vuelvo T mayuscula
	texto[15]='V';//Vuelvo V mayuscula
	printf("\n%s",texto);	
}
