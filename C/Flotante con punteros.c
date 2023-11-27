#include <stdio.h>

int main(void) {
  float decimal1;
  char *p = (char *) &decimal1;
  decimal1 = 12.25;
 
  printf("%.2x",*p);
  printf("%.2x",*(p+1));
  printf("%.2x",*(p+2));
  printf("%.2x",*(p+3));

  return 0;
}
