#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int z;
    char palavra1[] = {'p', 'a', 'o', ' '};
    char palavra2[] = {'q', 'u', 'e', 'i', 'j', 'o'};
    char palavraFinal[10];

    void concatString(char string1[], int tam1, char string2[], int tam2, char string3[])
    {

        int x, y;

        for (x = 0; x < tam1; x++)
        {
            string3[x] = string1[x];
        }

        for (y = 0; y < tam2; y++)
        {
            string3[tam1 + y] = string2[y];
        }
    }

    concatString(palavra1, 4, palavra2, 6, palavraFinal);

    for (z = 0; z < 10; z++)
    {
        printf("%c", palavraFinal[z]);
    }

    return 0;
}