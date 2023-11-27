#include <stdio.h>

int mouth(char *);

void main ()
{

char string[150];

scanf("%s", string);

printf("%d\n", mouth(string));

}

int mouth(char *str)
{

int retorno = 0;
unsigned short i;

for (i = 0; str[i]; ++i)
retorno = ((retorno * 10) + (str[i] - '0')) % 3;

return retorno;
}
