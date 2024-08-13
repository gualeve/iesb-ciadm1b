#include <stdio.h>
// exercício 1
int ex1(void) {
  printf("Datas\n");
  return 0;
}
// exercício 1
int ex2(void) {
  printf("Paridade\n");
  return 0;
}
int main(void) {
  int opcao;
  printf("Exercícios\n");
  printf("1 - Datas\n");
  printf("2 - Paridade\n");
  printf("==> ");
  scanf("%d", &opcao);
  switch (opcao) {
    case 1:
      ex1();
      break;
    case 2:
      ex2();
  }
  return 0;
}
