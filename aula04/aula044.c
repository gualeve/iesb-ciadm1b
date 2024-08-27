/******************************************************************************

Funções

*******************************************************************************/
#include <stdio.h>

int quadrado(int);

int main()
{
    int a;
    printf(">>> ");
    scanf("%d", &a);
    printf("O quadrado de %d é %d\n", a, quadrado(a));
    return 0;
}

int quadrado(int x) {
    return x * x;
}