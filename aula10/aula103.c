/******************************************************************************
Faça um programa que leia uma string e a imprima de trás para a frente
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define LIN 3
#define COL 4
#define MAX 20

int main()
{
    char str[MAX];
    int tam;

    
    
    printf("Digite uma string de até %d caracteres: ", MAX-1);
    fgets(str, MAX, stdin);
    tam = strlen(str)-1;
    str[tam] = '\0';
    printf("%s, %d\n", str, tam);
    
    for (int i=tam-1; i>=0; i--)
        putchar(str[i]);
    return 0;
}