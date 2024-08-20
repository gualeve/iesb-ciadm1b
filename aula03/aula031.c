#include <stdio.h>


// int main(void) {
//   // Escreva um programa que leia um valor inteiro 
//   // pelo teclado e imprima a mensagem:
//   // Valor lido: n
//   // onde n é o valor lido pelo programa.
//   float numero;
//   printf("Digite um número float: ");
//   scanf("%f", &numero);
//   printf("O valor lido foi: %.2f\n", numero);
//   return 0;
// }

// int main(void) {
//   int dia, mes, ano;
//   int hora, minuto;

//   printf("Digite uma data no formato DD/MM/AA: ");
//   scanf("%d/%d/%d", &dia, &mes, &ano);
//   printf("Digite um horário no formato HH:MM: ");
//   scanf("%d:%d", &hora, &minuto);

//   printf("%02d/%02d/%02d - %02dh%02dmin\n", dia, mes, ano, hora, minuto);
  
//   return 0;
// }

// Faça um programa que leia três caracteres do tipo char e depois os imprima um
// em cada linha. Use um único comando printf() para isso.

int main(void) {
  char a, b, c;
  // a = getchar();
  // b = getchar();
  // c = getchar();

  scanf("%c %c %c", &a, &b, &c);

  printf("%c - %c - %c\n", c, b, a);
  return 0;
}