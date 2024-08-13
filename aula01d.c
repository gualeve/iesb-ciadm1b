#include <stdio.h>

int main(void) {
  int nascimento;
  printf("Informe o ano que vc nasceu: ");
  scanf("%d", &nascimento);
  printf("Minha idade é: %d anos\n", 2024 - nascimento);
  return 0;
}