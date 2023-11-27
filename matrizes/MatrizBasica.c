#include <stdio.h>

int main()
{
    int i, j;
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}}; // declaração matriz = matriz[linhas][colunas]

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\n", A[i][j]);
        }
    }

    return 0;
}