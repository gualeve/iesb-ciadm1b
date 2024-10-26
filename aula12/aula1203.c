/******************************************************************************


*******************************************************************************/
#include <stdio.h>
#define LIN 5
#define COL 5

int main() {
    int **m;
    
    m = (int **)malloc(sizeof(int *) * LIN);
    for (int i=0; i<LIN; i++) {
        m[i] = (int *)malloc(sizeof(int) * COL);
    }
    for (int i=0; i<LIN; i++)
        for (int j=0; j<COL; j++)
            m[i][j] = 1;
    for (int i=0; i<LIN; i++) {
        for (int j=0; j<COL; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    for (int i=0; i<LIN; i++) {
        free(m[i]);
    }
    free(m);
    m = NULL;
    return 0;
}
