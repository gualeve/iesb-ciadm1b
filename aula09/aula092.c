/******************************************************************************
Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o
maior valor contido nessa matriz e a sua localização (linha e coluna).

*******************************************************************************/
#include <stdio.h>
#define LIN 2
#define COL 2

int main()
{
    int matriz[LIN][COL];
    int linha, coluna, maior;
    for (int i=0; i<LIN; i++)
        for (int j=0; j<COL; j++) {
            printf("[%d][%d]>> ", i, j);
            scanf("%d",  &matriz[i][j]);
        }
    
    maior = matriz[0][0];
    linha = 0;
    coluna = 0;
    for (int i=0; i<LIN; i++)
        for (int j=0; j<COL; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
        printf("Maior valor é %d na linha %d, coluna %d\n", maior, linha, coluna);

    return 0;
}
