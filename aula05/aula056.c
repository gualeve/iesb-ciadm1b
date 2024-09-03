/******************************************************************************

Escreva uma função que, dado um número real passado como parâmetro,
retorna a parte inteira e a parte fracionária desse número por referência.

*******************************************************************************/
#include <stdio.h>
int separar(float, int *, float *);
int main()
{
    int parte_inteira;
    float parte_fracao;
    float numero;
    printf("Digite um número real: ");
    scanf("%f", &numero);
    if (separar(numero, &parte_inteira, &parte_fracao)) {
        printf("%f\n", numero);
        printf("parte inteira: %d\n", parte_inteira);
        printf("parte fracionaria: %f\n", parte_fracao);
    } else {
        printf("Erro na execução da função\n");
    }

    return 0;
}

int separar(float numero, int *inteiro, float *fracao) {
    *inteiro = numero;
    *fracao = numero - (int)numero;
    return 1;
}