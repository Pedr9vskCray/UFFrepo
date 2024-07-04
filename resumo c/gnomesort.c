#include <stdio.h>
#include <stdlib.h>

void gnomesort(int* vet, int tam){

    int i=1;
    int temp;

    while (i < tam){

        if (i == 0){
            i = 1;
        }

        if (vet[i-1] <= vet[i]){
            i++;
        }

        else {

            temp = vet[i];
            vet[i] = vet[i-1];
            vet[i-1] = temp;

            i--; 

        }

    }
}

void main(){

    int numeros[] = {10, 2, 17, 54, 33, 22, 5, 19, 17, 20, 79, 3};
    int tamanho = 12;
    gnomesort(numeros, tamanho);

    printf("[");
    for (int i=0;i<tamanho;i++){

        printf("%d ", numeros[i]);

    }
    printf("]");

}