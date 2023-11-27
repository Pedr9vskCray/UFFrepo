#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info {

    char nome[25];
    char cpf[25];
    char nascimento[25];
    char telefone[25];
};

typedef struct info token;

int main() {

    token client1;

    // receber nome do cliente

    printf("Digite seu nome: ");
    scanf("%s", &client1.nome);
    printf("\n");

    fflush(stdin);

    // receber cpf do cliente

    printf("Digite seu cpf: ");
    scanf("%s", &client1.cpf);
    printf("\n");

    fflush(stdin);

    // receber data de nascimento do cliente

    printf("Digite sua data de nascimento: ");
    scanf("%s", &client1.nascimento);
    printf("\n");

    fflush(stdin);

    // receber telefone do cliente

    printf("Digite seu telefone: ");
    scanf("%s", &client1.telefone);
    printf("\n");

    fflush(stdin);

    // printar as informações para a tela

    printf("Nome do cliente: %s\n", client1.nome);
    printf("CPF do cliente: %s\n", client1.cpf);
    printf("Data de nascimento: %s\n", client1.nascimento);
    printf("Telefone: %s\n", client1.telefone);

    return 0;
}
