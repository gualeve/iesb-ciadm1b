/******************************************************************************
Faça um programa que leia um vetor de oito posições. Em seguida, leia também
dois valores X e Y quaisquer correspondentes a duas posições no vetor. Seu
programa deverá exibir a soma dos valores encontrados nas respectivas posições X e
Y.

*******************************************************************************/
#include <stdio.h>
#define TAM 8

int entrar();
int main() {
    int vetor[TAM] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x, y;
    x = entrar();
    y = entrar();
    if (x < 0 || x >= TAM || y < 0 || y >= TAM) {
        printf("Valor incorreto\n");
    } else {
        printf("%d + %d = %d\n", vetor[x], vetor[y], vetor[x]+vetor[y]);
    }
    return 0;
}


int entrar() {
    int a;
    printf("Digite um valor: ");
    scanf("%d", &a);
    return a;
}