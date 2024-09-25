/******************************************************************************
Crie um programa que leia 6 valores pelo teclado e em seguida imprima-os na
tela em ordem inversa

*******************************************************************************/
#include <stdio.h>
#define TAM 6
int main() {
    int vetor[TAM];
    printf("Digite %d valores inteiros.\n", TAM);
    for (int i=0; i<TAM; i++) {
        printf("> ");
        scanf("%d", &vetor[i]);
    }
    for (int i=TAM-1; i>=0; i--) {
        printf("%d ", vetor[i]);
    }
    putchar('\n');
    return 0;
}
