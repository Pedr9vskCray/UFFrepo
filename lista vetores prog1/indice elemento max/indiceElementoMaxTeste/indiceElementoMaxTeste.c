#include <stdio.h>

int main()
{

    int vet[6] = {800, 100, 300, 50, 900, 600};
    int y, i, indice = 0, e, maior = 0;

    for (i = 0; i <= 5; i++)
    {
        for (e = i; e <= 5; e++)
        {
            if ((vet[i] < vet[e]) && (vet[e] > maior)) // achar o maior valor do vetor que não seja o vet[0]
            {
                maior = vet[e];
            }
            printf("%d, %d : %d\n", i, e, maior); // teste para saber qual comparação estamos fazendo e o resultado
        }
    }

    if (vet[0] > maior) { // teste para verificar se o vet[0] que foi o único valor não testado é maior que o
        maior = vet[0]; // valor encontrado pelo for e colocado na variável maior
    }

    for (y = 0; y <= 5; y++)
    {
        if (vet[y] == maior) // teste para saber o índice do maior valor
        {
            indice = y;
        }
    }

    printf("\nO indice do elemento de maior valor dentro do vetor e: %d\n", indice);

    return 0;
}
