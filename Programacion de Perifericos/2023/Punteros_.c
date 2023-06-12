 /* Figura 7.6: fig07_06.c
02 Eleva al cubo una variable mediante una llamada por valor */
03 #include <stdio.h>
04
05 int cuboPorValor( int n ); /* prototipo */
06
07 int main()
08 {
09 int numero = 5; /* inicializa numero */
10
11 printf( “El valor original de numero es %d”, numero );
12
13 /* pasa numero por valor a cuboPorValor */
14 numero = cuboPorValor( numero );
15
16 printf( “\nEl nuevo valor de numero es %d\n”, numero );
17
18 return 0; /* indica terminación exitosa */
19
20 } /* fin de main */
21
22 /* calcula y devuelve el cubo de un argumento entero */
23 int cuboPorValor( int n )
24 {
25 return n * n * n;   /* eleva al cubo la variable local n y devuelve 
el resultado */
26
27 } /* fin de la función cuboPorValor */