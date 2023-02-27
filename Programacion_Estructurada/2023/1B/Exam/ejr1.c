#include <stdio.h>

int main(){
    int i,j,k,m;
    i=1;    j=2;    k=3;    m=2;
    printf("%d\n",j==1);//0
    printf("%d\n",j==3);//0
    printf("%d\n",i >= 1 && j<4);// 1
    printf("%d\n",m >= 99 && k < m);//0
    printf("%d\n",j >= i || k == m);//1
    printf("%d\n",k + m < j || 3 - j >= k); //0
    printf("%d\n",!m);//0
    printf("%d\n",!(j - m));//1
    printf("%d\n",!(k > m));//0
    printf("%d\n",!(j > k));//1
}