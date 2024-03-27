#include <stdio.h>
#include <stdlib.h>

float media_vetor(float V[], int x) {
    int i;
    float soma=0;
    float media=0;
    
    for (i=0;i<x;i++) {
        soma += V[i];
    }
    media = soma / x;
    
    return media;
}

int main() {
    float V[4] = {5, 8, 10, 2};
    float media = media_vetor(V, 4);
    printf("Media = %g", media);
}