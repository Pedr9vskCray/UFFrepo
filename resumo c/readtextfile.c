#include <stdio.h>
#include <stdlib.h>

void main() {

    FILE *fp;
    char filename[] = "readme.txt";
    int numlinhas=1;

    // fopen() é a função utilizada para abrir arquivos de texto externos em c

    fp = fopen(filename, "r");

    if (fp == NULL){
        printf("erro, não foi possível abrir o arquivo %s", filename);
    }

    // a função fgetc() sempre aponta para o próximo caractere dentro do arquivo
    // até chegar em um caractere -1 que é conhecido como EOF

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            numlinhas++;
        }
        putchar(ch);
    }

    fclose(fp);

    printf("\n\n");

    printf("Este arquivo tem %d linhas", numlinhas);

}

    // fgets() funciona de maneira similar ao fgetc() mas pega uma linha inteira
    // até o caractere '\n' ou até o limite de bytes estabelecido
    // sua sintaxe de utilização é fget(string_receptora, limite_bytes, fopen(arquivo))
    // o fgets() sempre vai adicionar o caractere nulo ao final '\0'