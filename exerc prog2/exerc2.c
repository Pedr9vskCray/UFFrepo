#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idade;
    char carteira;

    printf("Quantos anos você tem? ");
    scanf("%d", &idade);

    fflush(stdin);

    printf("\nVocê possui carteirinha? (s/n) ");
    carteira = getchar();

    printf("\n");

    if ((idade <= 12) || (carteira == 's'))
    {
        puts("Meia entrada: (R$10,00)");
    }
    else
    {
        puts("Entrada Inteira: (R$20,00)");
    }

    return 0;
}