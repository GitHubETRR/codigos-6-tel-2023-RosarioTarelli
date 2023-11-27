#include <stdio.h>

int comparar_cadenas (char*, char*);

int main(void) {
  char string1[20];
  char string2[20];
  printf("Escriba la primer cadena: ");
  scanf("%s", string1);
  printf("Escriba la segunda cadena: ");
  scanf("%s", string2);
  if (comparar_cadenas(string1, string2) == 1){
    printf("Las cadenas son iguales\n");
  } else {
    printf("Las cadenas son diferentes\n");
  }

  return 0;
}


int comparar_cadenas(char *puntero1, char *puntero2 )
{
  while (*puntero1 != '\0' || *puntero2 != '\0')
  {
    if (*puntero1 != *puntero2)
    {
      return 0;
    }
 
    puntero1++;
    puntero2++;
  }
  return 1;
}  
