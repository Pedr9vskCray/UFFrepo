#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a = 521;
    char b = 'a';
    float c = 4.87;
    
    int* pA = &a;
    char* pB = &b;
    float* pC = &c;
    
    printf("%d", *pA);
    printf("\n");
    printf("%c", *pB);
    printf("\n");
    printf("%g", *pC);
    
    return 0;
}