/******************************************************************************
Faça um programa que leia um vetor de 10 posições. Verifique se existem
valores iguais e os escreva na tela.

*******************************************************************************/
#include <stdio.h>
#define TAM 10

int preenche_vetor(int vetor[]);
int imprimir_iguais(int vetor[]);

int main() {
    int vetor[TAM];
    preenche_vetor(vetor);
    imprimir_iguais(vetor);
    
    return 0;
}

int preenche_vetor(int vetor[]) {
    printf("Preencha o vetor com %d inteiros:\n", TAM);
    for (int i=0; i<TAM; i++) {
        printf("> ");
        scanf("%d", &vetor[i]);
    }
    return 1;
}

int imprimir_iguais(int vetor[]) {
    for (int i=0; i<TAM-1; i++) {
        for (int j=i+1; j<TAM; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d ", vetor[i]);
                break;
            }
        }
    }
    printf("\n");
    return 1;
}


