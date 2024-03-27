#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void teste(int N, float U[N], float V[N], float W[N]) { // é possível utilizar ponteiros!

    for(int i=0;i<N;i++){
        if (i%2==0){
            W[i] = U[i] + V[i];
        }
        else {
            W[i] = fmax(U[i], V[i]);
        }
    }

}



int main() {
    float u[5] = {1.5, 3.4, 9.0, 8.1, 4.4};
    float v[5] = {9.3, 7.9, 1.9, 6.8, 2.6};
    float w[5];
    teste(5,u,v,w);
    for(int x=0;x<5;x++){
        printf("%g\n", w[x]);
    }
}
