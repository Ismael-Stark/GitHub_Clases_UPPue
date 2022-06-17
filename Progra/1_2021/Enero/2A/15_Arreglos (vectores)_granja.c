#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tom[12], ptom[12], lec[12], plec[12], zan[12], pzan[12], chi[12], pchi[12];
	
	char txt[10];
	
	printf("dame los kilos de tomate producidos por mes \n\n");
	
	for(int i=0; i < 12; i++){
		printf("dame los kilos del mes %d\n",i+1);
		gets(txt);
		tom[i] = atoi(txt);
	}
	printf("\n\n");
	
	for(int i=0; i < 12; i++){
		printf("los kilos de tomates producidos del mes %d, fueron: %dKg\n",i+1, tom[i]);

	}
}