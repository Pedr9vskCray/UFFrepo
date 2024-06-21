#include <stdio.h>
#include <stdlib.h>

void gnomesort(int *vet, int tam) {

    int index=0;
    int temp=0;
    while (index < tam) {
        if (index == 0){
            index++;
        }
        if (vet[index] >= vet[index-1]) {
            index++;
        }
        else {
            temp = vet[index];
            vet[index] = vet[index-1];
            vet[index-1] = temp;
            index--;
        }
    }
}

void main() {

    int v[] = {-48, -49, 20, -5, -22, 43, -38, 23, 40, -29};
    int n = 10;
    int i;

    printf("Array não ordenado: ");

    for (i=0;i<n;i++) {
        printf("%d ", v[i]);
    }

    gnomesort(v, n);

    printf("\n");

    printf("Array ordenado pelo método Gnome Sort: ");

    for (i=0;i<n;i++) {
        printf("%d ", v[i]);
    }

}