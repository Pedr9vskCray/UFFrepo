#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    const char *item[6] = {"batata", "bola", "computador", "teclado", "mouse", "nada"};

    srand(time(0));

    int valor = rand() % 6;

    puts(item[valor]);

    return 0;
}