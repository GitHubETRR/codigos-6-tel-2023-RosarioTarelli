#include <stdio.h>

void porValor (int);
void porReferencia(int *);

int main(){
  int valor = 3;
  int referencia = 10;
  int *puntero_referencia = &referencia;
 
  porValor(valor);
  printf("Despues de la llamada a Valor es: %d\n", valor);
 
  porReferencia(puntero_referencia);
  printf("Despues de la Referencia es: %d\n", referencia);
 
  return 0;
}

void porValor(int valor){
  valor = valor + 10;
  printf("Dentro de la funcion Valor es: %d\n", valor);
}

void porReferencia(int *puntero_referencia){
  *puntero_referencia = *puntero_referencia + 49;
  printf("Dentro de la funcion Referencia es: %d\n", *puntero_referencia);
}
