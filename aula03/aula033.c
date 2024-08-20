#include <stdio.h>

int main(void) {
  int i, j;
  for (int i=0, j=5; i <= j; i++, j--) {
    printf("%d, %d\n", i, j);
  }
  printf("%d, %d\n", i, j);
  return 0;
}