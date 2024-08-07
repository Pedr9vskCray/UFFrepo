#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void main(){
    FILE* f = fopen("dados.txt", "r");
    if(f == NULL){
       printf("Erro ao ler arquivo.\n");
       return;
    } else {
        int x, y;
        float v;
        fscanf(f, "%d %d %f", &x, &y, &v);
        char c = fgetc(f);
        char palavra[10];
        fgets(palavra, 10, f);
        fclose(f);
        printf("x=%d, y=%d, v=%g\n", x, y, v);
        printf("c=%c, palavra=%s\n", c, palavra);
    }
}

