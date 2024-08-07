#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void main(){
// abrindo o arquivo em modo escrita (w -> write)
FILE* arqv = fopen("teste1.txt", "w");
// escrevendo algo no arquivo
fprintf(arqv, "frase teste 12345");
// fechando o arquivo
fclose(arqv);
}