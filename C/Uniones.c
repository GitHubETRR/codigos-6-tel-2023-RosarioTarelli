#include <stdio.h>

union flotante{
float numF;
unsigned char numC[4];
}num;

int main()
{
  printf("Ingrese el valor que quiere ver en hexadecimal\n");
  scanf("%f", &num.numF);
  printf("0x%x%x%x%x", num.numC[3], num.numC[2], num.numC[1], num.numC[0]);
  return 0;
}
