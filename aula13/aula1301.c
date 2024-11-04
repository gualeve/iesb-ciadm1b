/******************************************************************************
Escreva uma função que receba como parâmetro uma matriz A contendo N
linhas e N colunas, e um vetor B de tamanho N. A função deve retornar o ponteiro
para um vetor C de tamanho N alocado dinamicamente, em que C é o produto da
matriz A pelo vetor B

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int **criar_matriz(int);
int *criar_vetor(int);
int *imprimir_vetor(int *, int);
int preencher_matriz(int **, int);
int preencher_vetor(int *, int);
int *produto_matriz(int **, int *, int);

int main() {
    int **a;
    int *b;
    int *c;
    int n;
    
    printf("Digite a dimensão n: ");
    scanf("%d", &n);
    a = criar_matriz(n);
    b = criar_vetor(n);
    
    preencher_matriz(a, n);
    preencher_vetor(b, n);
    
    c = produto_matriz(a, b, n);
    imprimir_vetor(c, n);
    return 0;
}

int **criar_matriz(int n) {
    int **p;
    p = (int **)malloc(sizeof(int *) * n);
    for (int i=0; i<n; i++)
        p[i] = criar_vetor(n);
    return p;
}

int *criar_vetor(int n) {
    return (int *)malloc(sizeof(int) * n);
}

int preencher_matriz(int **m, int n) {
    printf("Preencha a matriz:\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    return 1;
}

int preencher_vetor(int *v, int n) {
    printf("Preencha o vetor:\n");
    for (int i=0; i<n; i++) {
        printf("[%d]: ", i);
        scanf("%d", &v[i]);
    }
    return 1;
}


int *produto_matriz(int **m, int *v, int n) {
    int *c = (int *)malloc(sizeof(int) * n);
    for (int i=0; i<n; i++) {
        c[i] = 0;
        for (int j=0; j<n; j++)
            c[i] += v[j] * m[i][j];
    }
    return c;
}

int *imprimir_vetor(int *v, int n) {
    for (int i=0; i<n; i++)
        printf("%d ", v[i]);
    printf("\n");
}