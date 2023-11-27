#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char temp;
    char final[100];
    int x = 0;
    int contL=0;
    int contE=0;

    do
    {
        temp = getchar();
        final[x] = temp;

        if (temp != ' ' && temp != '\n')
        {
            contL++;
        }
        else
        {
            contE++;
        }

        x++;

    } while (temp != '\n');

    final[x - 1] = '\0';

    printf("\nquantidade de espaços: %d", contE);

    printf("\nquantidade de letras: %d", contL);

    return 0;
}