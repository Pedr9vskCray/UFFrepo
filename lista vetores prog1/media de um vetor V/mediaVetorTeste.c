#include <stdio.h>

int main() {

    int vet[5] = {1, 7, 3, 9, 14};
    float soma=0;
    float media=0;
    int x;

    for (x = 0; x < 5; x++) {
        soma = soma + vet[x];
    }

    media = soma / 5;

    printf("A media dos elementos dentro desse vetor e: %.1f\n", media);

    return 0;
}

