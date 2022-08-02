//Serie de fibonacci sin usar recursividad

#include<stdio.h>

int main (void){
  int a = 1, b = 0, i;

  for(i = 0; i < 14; i++){
    printf("%d\n",b);
    printf("%d\n",a);
    b = b + a;
    a = a + b;
  }
  return 0;
}