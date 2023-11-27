#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados
{
    char nome[25];
    long long int cpf;
    char nascimento[25];
    long long int telefone;
};

typedef struct dados ficha;

int main()
{

    ficha cliente1;

    // receber nome do cliente

    int x = 0;
    char temp;

    printf("Digite seu nome: ");

    do
    {
        temp = getchar();
        cliente1.nome[x] = temp;
        x++;

    } while (temp != '\n');

    cliente1.nome[x - 1] = '\0';

    printf("\n");

    fflush(stdin);

    // receber cpf do cliente

    printf("%jd\n", cliente1.cpf);

    printf("Digite seu CPF: ");
    scanf("%jd", &cliente1.cpf);

    printf("%jd\n", cliente1.cpf);

    printf("\n");

    fflush(stdin);

    // receber data de nascimento do cliente

    printf("Digite sua data de nascimento: ");

    int y = 0;
    char temp2;

    do
    {
        temp2 = getchar();
        cliente1.nascimento[y] = temp2;
        y++;

    } while (temp2 != '\n');

    cliente1.nascimento[y - 1] = '\0';

    printf("\n");

    fflush(stdin);

    // receber o telefone do cliente

    printf("Digite seu telefone para contato: ");
    scanf("%jd", &cliente1.telefone);

    printf("\n");

    fflush(stdin);

    // printando as informações na tela

    printf("\nNome do cliente: %s\nCPF do cliente: %jd\nData de nascimento: %s\nTelefone: %jd\n", cliente1.nome, cliente1.cpf, cliente1.nascimento, cliente1.telefone);

    return 0;
}