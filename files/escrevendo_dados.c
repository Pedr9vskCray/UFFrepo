#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void main(){
    FILE* arqv = fopen("teste2.txt", "w");
    int a = 1, b = 2, c = 3;
    float x = 5.23, y = 4.17;
    char nome[] = "pedro jose lobao";
    char k = 'k';
    
    fprintf(arqv, "%d + %d = %d\n", a, b, c);
    fprintf(arqv, "%.2f e %.2f\n", x, y);
    fprintf(arqv, "%s\n", nome);
    fprintf(arqv, "%c\n", k);

    fclose(arqv);
}