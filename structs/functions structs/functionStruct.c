#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct shape {
    int x1;
    int x2;
    int y1;
    int y2;
}retangle;

retangle getRetangle(int a,int b, int c, int d) {

    retangle ret1;

    ret1.x1 = a; // 0
    ret1.y1 = b; // 0
    ret1.x2 = c; // 5
    ret1.y2 = d; // 5

    return ret1;
}

int main() {

    retangle endRet = getRetangle(0, 0, 5, 5);

    printf("(x1,y1) = (%d,%d)\n", endRet.x1, endRet.y1);
    printf("(x2,y1) = (%d,%d)\n", endRet.x2, endRet.y1);
    printf("(x1,y2) = (%d,%d)\n", endRet.x1, endRet.y2);
    printf("(x2,y2) = (%d,%d)\n", endRet.x2, endRet.y2);


    return 0;
}







