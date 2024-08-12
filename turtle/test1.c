#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "turtle.h"

void main(){

    turtle_init(500, 500);
    turtle_forward(100);
    turtle_turn_left(90);
    turtle_forward(100);
    turtle_turn_left(90);
    turtle_forward(100);
    turtle_turn_left(90);
    turtle_forward(100);

    turtle_forward(100);
    turtle_turn_left(90);
    turtle_forward(100);
    turtle_turn_left(90);
    turtle_forward(100);
    turtle_turn_left(90);
    turtle_forward(100);

    turtle_forward(100);
    turtle_turn_left(90);
    turtle_forward(100);
    turtle_turn_left(90);
    turtle_forward(100);
    turtle_turn_left(90);
    turtle_forward(100);

    turtle_forward(100);
    turtle_turn_left(90);
    turtle_forward(100);
    turtle_turn_left(90);
    turtle_forward(100);
    turtle_turn_left(90);
    turtle_forward(100);
    
    turtle_draw_turtle();
    turtle_save_bmp("output1.bmp");
}