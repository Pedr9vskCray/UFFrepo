#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(){
    // fwrite(lugar aonde estão armazenados, n° bytes, quantidade de unidades, file);
    float a[8] = {5.2, 4.2, 9.6, 2.1, 1.5, 2.7, 8.7, 9.2};
    //char s[8] = "abacaxi";
    //int b[3] = {138735, 35435, 6843552};

    FILE* f = fopen("dados.bin", "wb");
    fwrite(a, sizeof(float), 8, f);
    //fwrite(s, sizeof(char), 8, f);
    //fwrite(b, sizeof(int), 3, f);
    fclose(f);
}
