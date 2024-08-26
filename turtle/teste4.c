#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "turtle.h"

void main(){
    turtle_init(500,500);

    turtle_set_pen_color(0 , 0, 255);
    turtle_draw_circle(80, 100, 40);

    turtle_set_fill_color(255, 0, 0);
    turtle_fill_circle(-100, 0, 100);
    turtle_save_bmp("output4.bmp");
}