/******************************************************************************
Escreva um programa que leia um nome de uma pessoa e imprima as suas
iniciais.
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define MAX 20

int main()
{
    char nome[MAX];
    int tam;

    
    printf("Digite um nome de até %d caracteres: ", MAX-1);
    fgets(nome, MAX, stdin);
    tam = strlen(nome)-1;
    nome[tam] = '\0';
    
    for (int i=0; i<tam; i++)
        if (i==0 || nome[i] != ' ' && nome[i-1] == ' ')
            putchar(nome[i]);
    return 0;
}