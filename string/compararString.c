#include <stdio.h>
#include <stdlib.h>
#include <string.h>

_Bool comparador(char string1[], char string2[])
{

    int i = 0;

    while (string1[i] == string2[i] && string1[i] != '\0' && string2[i] != '\0')
    {
        i++;
    }

    if (string1[i] == '\0' && string2[i] == '\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    char palavra1[] = "pedra";
    char palavra2[] = "pedro";

    if (comparador(palavra1, palavra2))
    {
        printf("iguais\n");
    }

    else
    {
        printf("diferentes\n");
    }

    return 0;
}