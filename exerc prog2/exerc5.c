#include <stdio.h>
#include <stdlib.h>

int main() {

    int V[12] = {54, 21, 73, 79, 10, 8, 32, 34, 63, 76, 14, 21};
    int* begin = V+2;
    int i;

    for (i=0;i<5;i++){
        printf("%d ", begin[i]);
    }
    return 0;
}