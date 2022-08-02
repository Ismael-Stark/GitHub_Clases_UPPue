#include <stdio.h>
#include <string.h>
//#include <windows.h>

int main (){
	char str[100] ;
  	char * pch;
  	const char *p = str;
	char clave[]="tercero";
	
	printf("Escribe una oracion con la clave dentro\n");
	gets(str);
  
  	int largo = strlen(clave);
  
  pch = strstr (str,clave);
  
  if (pch == NULL){
  	printf("\nclave no encontrada\n");
  	//printf("%s\n\n",pch);
  }else{
  	printf("\nclave %s encontrada, texto extra es:\n",clave);
  	
  	
	for(p[0];p<pch;p++){
		printf("%c",*p);
	}
	
	
	
	for(p=pch+largo; ;p++){
		if(*p=='\0')
			break;
		printf("%c",*p);
	}
	
  	/*printf("\n\n");
	strncpy (pch,"sample",6);
  	puts (str);*/
  }
  gets(str);
  //return 0;

}

/*char * yo (const char *s1, const char *s2)
{
  const char *p = s1;
  const size_t len = strlen (s2);

  for (; (p = strchr (p, *s2)) != 0; p++ )
    {
    if (strncmp (p, s2, len) == 0)
    
	return (char *)p;
    }
  return (0);
}*/

