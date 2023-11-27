#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verificador(char letra)
{

    if (letra >= 'a' && letra <= 'z' || letra >= 'A' && letra <= 'Z')
    {
        printf("%c e uma letra\n", letra);
    }

    else
    {
        printf("%c nao e uma letra\n", letra);
    }
}

int main()
{

    int x = 0;
    char caractere;
    char string[100];

    printf("Digite um texto para ser verificado: ");

    do
    {
        caractere = getchar();
        string[x] = caractere;
        x++;

    } while (caractere != '\n');

    string[x - 1] = '\0';

    //

    int y = 0;

    while (string[y] != '\0')
    {
        verificador(string[y]);
        y++;
    }

    return 0;
}