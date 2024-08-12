#include "turtle.h"
#include <stdlib.h>
#include <time.h>

void walk(){
    for(int i = 0; i < 100; i++){
      turtle_forward(3);
      int n = rand()%90 - 45;
      turtle_turn_left(n);      
   }
}

void main(){

    srand(time(NULL));
    turtle_init(700, 700);

    turtle_set_pen_color(255, 0, 0);
    walk();
    turtle_set_pen_color(0, 255, 0);
    walk();
    turtle_set_pen_color(0, 0, 255);
    walk();

    turtle_save_bmp("output3.bmp");
}