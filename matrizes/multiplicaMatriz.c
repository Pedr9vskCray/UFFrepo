#include <stdio.h>

int main() {

    int A[3][2] = {{1,2}, {3,4}, {5,6}};
    int B[2][3] = {{1,2,3}, {4,5,6}};
    int C[2][2];
    int aux=0;
    int x,y,z,w,k;

    for (x = 0; x < 2; x++) {
        for (y = 0; y < 2; y++) {
            for (z = 0; z < 3; z++) {
                aux = aux + (B[x][z] * A[z][y]);
            }
            C[x][y] = aux;
            aux = 0;
        }
    }

    for (w = 0; w < 2; w++) {
        for (k = 0; k < 2; k++) {
            printf("%d\n", C[w][k]);
        }
    }


    return 0;
}