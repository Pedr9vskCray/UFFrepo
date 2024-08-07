#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void main(){
    FILE* arqv = fopen("saida.txt", "w");
    if (arqv == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return;
    } else {
        int x = 32, y = 16;
        float v = 5.24;

        fprintf(arqv, "Dados -> %d, %.2f\n", x+y, v/2);
        fputc('p', arqv);
        fputc('e', arqv);
        fputc('d', arqv);
        fputc('r', arqv);
        fputc('o', arqv);
        fputs(" jose lobao", arqv);
        fclose(arqv);
    }
}