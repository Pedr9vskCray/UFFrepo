#include <stdio.h>
#include <stdlib.h>

float soma_vetor(float V[], int x) {
    int i;
    float total=0;
    for (i=0; i < x; i++) {
        total = V[i] + total;
    }
    
    return total;
}

int main() {
    float v[4] = {5, 8, 10, 2};
    float soma = soma_vetor(v, 4);
    printf("Soma = %g", soma);
    
    return 0;
}