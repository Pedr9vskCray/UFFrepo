#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a = 521;
    int* b = &a;
    int** c = &b;
    
    printf("%d", **c);
    
    return 0;
}