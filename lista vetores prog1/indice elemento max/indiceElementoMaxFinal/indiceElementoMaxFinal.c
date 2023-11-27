#include <stdio.h>

int main() {

    int vet[6] = {700, 200, 5000, 800, 300, 1000};
    int x,indiceMaiorFim,maiorTemp=0,maiorFim=0;

    for (x = 0; x <= 5; x++){
        maiorTemp = vet[x];
        if (maiorTemp > maiorFim) {
            maiorFim = maiorTemp;
            indiceMaiorFim = x;
        }
    }

    printf("O maior valor dentro desse vetor e: %d\n", maiorFim);
    printf("O indice do maior valor dentro desse vetor e: %d\n", indiceMaiorFim);


    return 0;
}
