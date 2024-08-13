#include <stdio.h>

int main(void) {
  int n1 = 10;
  int n2 = 3;
  int n3 = 0;
  float res;

  res = (float)n1 / n2;
  // ++n1; // n1 += 1;
  // n1 += ++n2 + 2;
  // n3 = 1;
  if (n1 + n2 == n3)
    printf("Verdadeiro\n");
  else
    printf("Falso\n");
  
  printf("n3=%d\n", n3);
  // printf("%d\n", n1);
  // printf("%d\n", n2);
  // printf("%d\n", n1 & n2);
  // printf("%d\n", n2 << 2);
  return 0;
}