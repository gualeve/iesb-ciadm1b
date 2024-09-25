/******************************************************************************
Crie um programa que leia 6 valores pelo teclado e em seguida imprima-os na
tela em ordem inversa

*******************************************************************************/
#include <stdio.h>
#define TAM 6

int imprimir_vetor(int vetor[], int tam);
int main() {
    int vetor[TAM];
    printf("Digite %d valores inteiros.\n", TAM);
    for (int i=0; i<TAM; i++)
        vetor[i] = i;
    imprimir_vetor(vetor, TAM);
    return 0;
}

int imprimir_vetor(int v[], int tam) {
    for (int i=TAM-1; i>=0; i--) {
        printf("%d ", v[i]);
    }
    putchar('\n');
}
