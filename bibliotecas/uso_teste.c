#include <stdio.h> // standard input output
#include <stdlib.h> // useful functions and memory management and random numbers
#include <time.h> // functions for time manipulation
#include <assert.h> // asserts that a value is true, if not, it exists the program

void main(){
    srand(time(NULL));
    int x = rand()%10;
    printf("x = %d", x);
}