#include <stdio.h>
#include <string.h>
//#include <windows.h>

int main (){
	char str[] ="This is a simple string";
  	char * pch;
  	const char *p = str;
	char clave[]=" is ";
  
  	int largo = strlen(clave);
  
  pch = strstr (str,clave);
  
  if (pch == NULL){
  	printf("no encontrado\n");
  	//printf("%s\n\n",pch);
  }else{
  	printf("frase encontrada \n\n");
  	
  	
	for(p[0];p<pch;p++){
		printf("%c",*p);
	}
	
	for(p=pch+largo;;p++){
		if(*p=='\0')
			break;
		printf("%c",*p);
	}
	
  	printf("\n\n");
	strncpy (pch,"sample",6);
  	puts (str);
  }
  
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

