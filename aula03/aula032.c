#include <stdio.h>

// int main(void) {
//   // Faça um programa que leia dois números e mostre qual deles é o maior
//   int num1, num2;
//   printf("Digite um valor: ");
//   scanf("%d", &num1);
//   printf("Digite outro valor: ");
//   scanf("%d", &num2);

//   if (num1 == num2)
//     printf("Números iguais\n");
//   else
//     printf("O maior número é %d\n", (num1 > num2) ? num1 : num2);

//   return 0;
// }

int main(void) {
  // Faça um programa que receba a altura e o sexo de uma pessoa e calcule e
  // mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h”
  // corresponde à altura):
  // - Homens: (72,7 * h) – 58
  // - Mulheres: (62,1 * h) – 44,7
  char sexo;
  float altura, peso_ideal;
  printf("Informe o sexo: F/M ");
  scanf("%c", &sexo);
  printf("Informe a altura ");
  scanf("%f", &altura);

  peso_ideal = sexo == 'F' ? (62.1 * altura) - 44.7 : (72.7 * altura) - 58;

  printf("Peso ideal é: %.2f Kg\n", peso_ideal);
  return 0;
}