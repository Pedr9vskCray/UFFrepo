#include <stdio.h>
#include <stdlib.h>

int binarysearch(int* vet, int find, int start, int end){

    while (start <= end){

        int mid = start + (end - start) / 2;

        if (vet[mid] == find){
            return mid;
        }

        if (vet[mid] > find){
            end = mid + 1;
        }

        else{
            start = mid - 1;
        }
    }
    return -1;
}

void main() {

    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int find = 7;
    int start = 0;
    int stop = 10;

    int result = binarysearch(vet, find, start, stop);

    if (result == -1){
        printf("valor nao encontrado");
    }

    else {

        printf("valor %d encontrado na posição %d", find, result);

    }

}