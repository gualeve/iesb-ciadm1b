#include <stdio.h>

/*
Lista de exercícios - questão 1
*/
int main()
{
    int numero;
    int maior, menor = -1;
    
    while (1) {
        printf(">>> ");
        scanf("%d", &numero);
        if (numero < 0)
            break;
        if (menor == -1) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior)
                maior = numero;
            if (numero < menor)
                menor = numero;
        }
    }
    if (menor == -1)
        printf("Nenhum valor informado\n");
    else {
        printf("Menor = %d\nMaior = %d\n", menor, maior);
    }

    return 0;
}