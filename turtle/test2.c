#include "turtle.h"
#include <stdlib.h>
#include <time.h>

int main(){
   srand(time(NULL));
   turtle_init(300, 300);

   for(int i = 0; i < 100; i++){
      turtle_forward(3);
      int n = rand()%90 - 45;
      turtle_turn_left(n);      
   }

   turtle_save_bmp("output2.bmp");
}