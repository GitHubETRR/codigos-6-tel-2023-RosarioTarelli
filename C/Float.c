#include <stdio.h>

union flotante{
float var3;
unsigned char numC[4];
}var;

int main()
{
  int var1=3;
  int var2=4;
  int *pint=&var1;
  
  printf("Var vale: 0x%X \n",pint);
  printf("Var vale: %d \n",*pint);
  pint=&var2;
  printf("Var vale: 0x%X \n",pint);
  printf("Var vale: %d \n",*pint);
  
  var.var3 = 12.25;
  float *p=&var.var3;
  printf("Var vale: 0x%x%x%x%x \n", var.numC[3], var.numC[2], var.numC[1], var.numC[0]);
  return 0;
}
