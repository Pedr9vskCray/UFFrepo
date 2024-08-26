#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include "turtle.h"

void main(){
    srand(time(NULL));
    turtle_init(550, 550);

    turtle_draw_circle(0, 0, 250);

    for (int i = 0; i < 800; i++){
        int x = rand()%500-250;
        int y = rand()%500-250;
        if (((x >= -200)&&(x <= 200)) && ((y >= -200)&&(y <= 200))){
            turtle_set_fill_color(0,255,0);
        } else {
            turtle_set_fill_color(0,0,255);
        }
        turtle_fill_circle(x,y,10);
    }
    turtle_save_bmp("output8.bmp");
}