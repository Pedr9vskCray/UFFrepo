#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1;
    int num2;
    int soma;

    scanf("%d", &num1);
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Soma: %d\n", soma);

    if (soma % 3 == 0)
    {
        puts("A soma é múltiplo de 3.");
    }

    else
    {
        puts("A soma não é múltiplo de 3.");
    }

    return 0;
}