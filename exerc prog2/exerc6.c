#include <stdio.h>
#include <stdlib.h>

void imprime_vetor(int N, int v[N]) {
    for(int i=0; i<N; i++){
        printf("%d ", v[i]);
    }
    puts("");
}

int main() {

    int u[10] = {3, 51, 42, 63, 52, 78, 67, 82, 43, 26};

    int* p = u+2;

    imprime_vetor(6, p);

    return 0;
}