#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void main(){
    FILE* arqv = fopen("numeros.txt", "r");
    int x;
    float y;
    fscanf(arqv, "%d %f", &x, &y);
    fclose(arqv);
    printf("x = %d, y = %.2f\n", x, y);
}