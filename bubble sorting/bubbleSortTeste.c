#include <stdio.h>

int main() {

    int vet[1000] = {1, 5, 3, 9, 2, 8};
    int aux=0;
    int x,a,y,n=6; // n e a quantidade de elementos dentro do vetor

    for (x = n - 1; x > 0; x--) {
        for (y = 0; y < x; y++) {
            printf("X: %d, Y: %d, vet[Y]: %d, vet[Y + 1]: %d\n", x,y,vet[y],vet[y+1]);
            if (vet[y] > vet[y + 1]) {
                aux = vet[y + 1];
                vet[y + 1] = vet[y];
                vet[y] = aux;
            }
        }

    }

    printf("\n");

    for (a = 0; a <= 5; a++) {
        printf("%d\n", vet[a]);
    }

    return 0;
}
