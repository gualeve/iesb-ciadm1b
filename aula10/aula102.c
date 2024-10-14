/******************************************************************************
Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas.
Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na
prova 1, o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja
pior nota foi na prova 3
*******************************************************************************/
#include <stdio.h>
#define LIN 3
#define COL 4

int main()
{
    float matriz[LIN][COL];
    float menor;
    int piores[LIN] = {0, 0, 0};
    int posicao;
    
    printf("Digite as notas dos alunos: ");
    for (int i=0; i<LIN; i++) {
        printf("Notas da %da prova:\n", i+1);
        for (int j=0; j<COL; j++) {
            printf("Aluno %d: ", j);
            scanf("%f", &matriz[i][j]);
        }
        printf("\n");
    }
    for (int j=0; j<COL; j++) {
        menor = matriz[0][j];
        for (int i=0; i<LIN; i++) {
            if (matriz[i][j] <= menor) {
                menor = matriz[i][j];
                posicao = i;
            }
        }
        piores[posicao]++;
    }
    for (int i=0; i<LIN; i++)
        printf("Alunos com pior nota na prova %d: %d\n", i+1, piores[i]);
    return 0;
}