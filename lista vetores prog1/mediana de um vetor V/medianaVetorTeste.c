#include <stdio.h>

int main() {

    int vet[5] = {100, 500, 200, 800, 400};
    int x, y, i, mediana=0, aux=0;

    for (x = 0; x < 5; x++) {
        for (y = x + 1; y < 5; y++) { // codigo para ordenar o vetor em ordem
            if (vet[x] > vet[y]) {
                aux = vet[y];
                vet[y] = vet[x];
                vet[x] = aux;
            }
        }
    }

    for (i = 0; i < 5; i++) { // codigo para verificar se a ordenação do vetor ocorreu corretamente
        printf("%d ", vet[i]);
    }

    mediana = vet[2];

    printf("\n\nLogo, depois de ordenar o vetor, e possivel descobrir que a mediana do mesmo e: %d\n", mediana);

    return 0;
}
