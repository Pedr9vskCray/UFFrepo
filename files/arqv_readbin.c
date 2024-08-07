#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(){
    float b[8];
    FILE* f = fopen("dados.bin", "rb");
    // fread(lugar aonde serão armazedos, n° de bytes, quantidade de unidades, file);
    fread(b, sizeof(float), 8, f);
    fclose(f);

    printf("Valores lidos do arquivo: ");
    for(int i = 0; i < 8; i++)
        printf("%g ", b[i]);
}
