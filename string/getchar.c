#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char texto[100];
    char caractere;
    int x = 0;

    do
    {

        caractere = getchar();
        texto[x] = caractere;
        x++;

    } while (caractere != '\n');

    texto[x - 1] = '\0';

    printf("\n%s", texto);

    return 0;
}