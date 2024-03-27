#include <stdio.h>
#include <stdlib.h>

void altera(int* p, float* d) {
    if (*p%2==0) {
        *p = *p/2;
    }
    else {
        *d = *d*3.5;
    }
}

int main() {

    int u = 30;
    float v = 6.9;
    altera(&u, &v);
    printf("%d %g\n", u,v);
    altera(&u, &v);
    printf("%d %g\n", u,v);

    return 0;
}