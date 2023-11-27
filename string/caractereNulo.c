#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char palavra1[6] = {'B', 'r', 'a', 's', 'i', 'l'}; // string declarada caractere por caractere sem espaço para o \0
    char palavra2[] = {'B', 'r', 'a', 's', 'i', 'l'};  // string não definida com espaço para o nulo
    char palavra3[7] = {"Brasil"};                     // string declarada diretamente com espaço para o \0
    char palavra4[] = {"Brasil"};                      // string não definida com espaço para o \0
    char palavra5[] = "Brasil";                        // forma mais utilizada para declarar string com espaço para o \0

    // o caractere nulo é utilizado pelo seu compilador para mostrar aonde termina a string e é necessário para o printf

    // caractere nulo está sempre presente no final de qualquer string declarada de forma padrão; \0

    printf("%s", palavra5); // o %s do printf depende diretamente do caractere nulo para funcionar corretamente

    return 0;
}