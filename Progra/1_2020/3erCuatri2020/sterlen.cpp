/* strlen example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char entrada[256];
  printf ("Escribe una oracion: ");
  gets (entrada);
  printf ("\nLa oracion que escribiste tiene %u caracteres.\n",(unsigned)strlen(entrada));
  unsigned int entrada_len = sizeof(entrada);
  printf ("\nvalor real %lu", entrada_len);
  return 0;
}
