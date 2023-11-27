#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nome[20];
    char sobrenome[20];

    printf("Digite seu nome e sobrenome: ");
    scanf("%s%s", &nome, &sobrenome);

    printf("\nSeu nome é: %s", nome);
    printf("\nSeu sobrenome é: %s", sobrenome);

    return 0;
}