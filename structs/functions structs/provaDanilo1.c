#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct shape {
    int x1; // 0
    int x2; // 5
    int y1; // 0
    int y2; // 5
}retangle;

//

typedef struct dot {
    int x; // 3
    int y; // 2
}point;

//

int within(retangle R, point P) {
    if ((R.x1 <= P.x && R.x2 >= P.x) && (R.y1 <= P.y && R.y2 >= P.y)) { // função da questão a
        return 1;
    }
    else {
        return 0;
    }
}

//

retangle createRetangle(int a, int b, int c, int d){ // função para criar um retangulo

    retangle tempRet;

    tempRet.x1 = a;
    tempRet.x2 = b;
    tempRet.y1 = c;
    tempRet.y2 = d;

    return tempRet;
}

point createPoint(int a, int b) { // função para criar um ponto

    point tempPoint;

    tempPoint.x = a;
    tempPoint.y = b;

    return tempPoint;
}

int pointerCounter(retangle R, int a, point vector[]) { // função da questão b

    int x=0;
    int cont=0;
    for (x=0;x<a;x++) {
        if (within(R, vector[x])) {
            cont++;
        }
    }
    return cont;

}


int main() {

    retangle retA = createRetangle(0, 5, 0, 5); // letra a
    point dotA = createPoint(7, 2);

    printf("\n%d\n", within(retA, dotA));

    //

    point vecA[5] = {createPoint(3, 2), createPoint(7, 7), createPoint(1, 1), createPoint(5, 4), createPoint(0, 0)}; // letra b
    int vecNum = 5;

    printf("\n%d\n", pointerCounter(retA, vecNum, vecA)); 

    return 0;
}