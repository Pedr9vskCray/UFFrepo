#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char teste = 't'; // o tipo char guarda um caractere por padrão

    char testeVet[5] = {'t', 'e', 's', 't', 'e'}; // logo para fazer uma string pode se usar um vetor de caracteres

    int x;

    for (x = 0; x < 5; x++)
    {
        printf("%c", testeVet[x]);
    }

    return 0;
}