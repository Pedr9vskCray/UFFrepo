#include <stdio.h>

int main()
{

    int i, e, aux = 0;
    int vet[3] = {4, 9, 1};

    for (i = 0; i <= 2; i++)
    {
        for (e = i + 1; e <= 2; e++)
        {
            if (vet[i] > vet[e])
            {
                aux = vet[e];
                vet[e] = vet[i];
                vet[i] = aux;
            }
            printf("%d,%d,%d\n", vet[0], vet[1], vet[2]);
        }
    }

    return 0;
}