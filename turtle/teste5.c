#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include "turtle.h"

void main(){

    srand(time(NULL));
    turtle_init(500,500);

    for (int i = 0; i < 100; i++){
        int x = rand()%500-200;
        int y = rand()%500-200;
        turtle_set_fill_color(255, 107, 153);
        turtle_fill_circle(x, y , 10);
    }
    turtle_save_bmp("output5.bmp");
}