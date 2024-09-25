/******************************************************************************



*******************************************************************************/
#include <stdio.h>
// #define TAM 8

int main() {
    int TAM = 8;
    int vetor[TAM];
    for (int i=0; i<TAM; i++)
        vetor[i] = i;
    for (int i=0; i<TAM; i++)
        printf("%d ", vetor[i]);    

    return 0;
}


