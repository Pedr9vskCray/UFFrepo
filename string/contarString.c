#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarString(char string[])
{
    int numCaractere = 0;

    while (string[numCaractere] != '\0')
    {
        ++numCaractere;
    }
    return numCaractere;
}

int main() {

    char palavra[10000];
    int num;

    printf("Digite uma string para descobrir quantos caracteres ela tem: ");
    scanf("%s", &palavra);

    num = contarString(palavra);

    printf("\nSua string '%s' tem: %d caracteres", palavra, num);


    return 0;
}