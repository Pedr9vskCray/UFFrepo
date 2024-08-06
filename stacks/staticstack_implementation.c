#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int stack[MAX];
int top = 0;

int push(int i){
    if (top >= MAX){
        printf("Stack Overflow.\n");
        return 0;
    }
    stack[top] = i;
    printf("Stacked %d\n", i);
    top++;
    }

int pop(){
    top--;
    printf("Unstacked %d\n", stack[top]);
    stack[top] = 0;
    if (top < 0) {
        printf("Stack Underflow.\n");
        top = 0;
        return 0;
    }
    return 0;

}

void main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);
    push(110);
    printf("%d\n", stack[9]);
    pop();
    pop();
    pop();
    printf("%d\n", stack[9]);
    pop();
    pop();
    pop();
    printf("%d\n", stack[0]);
    pop();
    pop();
    pop();
    pop();
    printf("%d\n", stack[0]);
    push(21);
    printf("%d\n", stack[0]);
    push(22);
    push(23);
    push(24);
    push(25);
    printf("%d\n", stack[1]);
    printf("%d\n", stack[2]);
    printf("%d\n", stack[3]);
    printf("%d\n", stack[4]);
    printf("%d\n", stack[6]);
}