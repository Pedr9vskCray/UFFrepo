#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include "turtle.h"

void main(){
    srand(time(NULL));
    turtle_init(520, 520);

    for (int i = 0; i < 400; i++){
        int x = rand()%500-250;
        int y = rand()%500-250;
        if (x < 0){
            turtle_set_fill_color(255, 0, 0);
        } else if (x > 0){
            turtle_set_fill_color(0, 0, 255);
        }
        turtle_fill_circle(x, y, 10);
    }
    turtle_save_bmp("output6.bmp");
}