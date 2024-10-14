/******************************************************************************
Construa um programa que leia duas strings do teclado. Imprima uma
mensagem informando se a segunda string lida está contida dentro da primeira
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define MAX 20

int main()
{
    char nome1[MAX];
    char nome2[MAX];
    int tam;


    
    printf("Digite um nome de até %d caracteres: ", MAX-1);
    fgets(nome1, MAX, stdin);
    tam = strlen(nome1)-1;
    nome1[tam] = '\0';
    
    printf("Digite um nome de até %d caracteres: ", MAX-1);
    fgets(nome2, MAX, stdin);
    tam = strlen(nome2)-1;
    nome2[tam] = '\0';
    
    printf("%s %s em %s\n", nome1, strstr(nome2, nome1) ? "está" : "não está", nome2);

    return 0;
}