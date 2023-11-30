#include <stdio.h>

int main(void) {
union{
   struct campo{
   unsigned int mantisa : 23;
   unsigned int exponente : 8;
   unsigned int signo : 1;
  }IEEE_754;
  float numero;
}pasaje;

  printf("--%d--", sizeof(unsigned int));
printf("Ingrese un numero con coma: ");
scanf("%f", &pasaje.numero);
printf("Signo: %x\n", pasaje.IEEE_754.signo);
printf("Exponente: %.2x\n", pasaje.IEEE_754.exponente);
printf("Mantisa: %.2x\n", pasaje.IEEE_754.mantisa);
printf("Numero en hexadecimal: 0x%X", pasaje.IEEE_754);
 
return 0;
}
