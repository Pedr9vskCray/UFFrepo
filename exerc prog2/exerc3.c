#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1;
    int num2;

    scanf("%d %d", &num1, &num2);

    switch (num1 % 2)
    {

    case 0:
        if (num2 % 2 == 0)
        {
            puts("Ambos são pares.");
        }
        else
        {
            puts("Um valor é par, o outro é ímpar.");
        }
        break;

    case 1:
        if (num2 % 2 == 1)
        {
            puts("Ambos são impares.");
        }
        else
        {
            puts("Um valor é par, o outro é ímpar.");
        }
        break;
    }

    return 0;
}