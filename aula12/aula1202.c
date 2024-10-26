/******************************************************************************
Elabore uma função que receba duas strings como parâmetros e verifique se a
segunda string ocorre dentro da primeira. Use aritmética de ponteiros para
acessar os caracteres das strings (NÃO use a função da biblioteca C strstr).
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define MAX 20

int is_in(char *, char *);

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
    
    printf("%s %s em %s\n", nome1, is_in(nome2, nome1) ? "está" : "não está", nome2);

    return 0;
}

int is_in(char *str2, char *str1) {
    int diferenca = strlen(str2) - strlen(str1);
    char *p1;
    char *p2;
    
    if (diferenca < 0)
        return 0;
    for (int i=0; i<=diferenca; i++) {
        p1 = str1;
        p2 = str2 + i;
        do {
            if (*p1 != *p2) {
                break;
            }
            p1++;
            p2++;
        } while (*p1 != '\0');
        if (*p1 == '\0')
            return 1;
    }
    return 0;
}




