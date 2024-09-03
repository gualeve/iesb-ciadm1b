/******************************************************************************

Escreva uma função que receba por parâmetro dois números inteiros e retorne o
maior deles.

*******************************************************************************/
#include <stdio.h>

int maior_valor(int, int);

int main()
{
    int num1, num2;
    printf("Digite dois números.\n");
    printf(">>> ");
    scanf("%d", &num1);
    printf(">>> ");
    scanf("%d", &num2);
    printf("O maior número é: %d\n",  maior_valor(num1, num2));
    return 0;
}

int maior_valor(int a, int b) {
    if (a > b)
        return a;
    return b;
}