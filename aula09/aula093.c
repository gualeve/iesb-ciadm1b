/******************************************************************************

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[LIN][COL];
    int linha, coluna;
    for (int i=0; i<LIN; i++)
        for (int j=0; j<COL; j++) {
            printf("[%d][%d]>> ", i, j);
            scanf("%d",  &matriz[i][j]);
        }
    
    linha = 0;
    coluna = 0;
    for (int i=0; i<LIN; i++)
        for (int j=0; j<COL; j++) {
            if (matriz[i][j] > matriz[linha][coluna]) {
                linha = i;
                coluna = j;
            }
        }
        printf("Maior valor é %d na linha %d, coluna %d\n", matriz[linha][coluna], linha, coluna);

    return 0;
}
