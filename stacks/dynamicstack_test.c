#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void main(){
    Node ndo1 = {.data=1, .next=NULL};
    Node ndo2 = {.data=2, .next=&ndo1};
    Node ndo3 = {.data=3, .next=&ndo2};

    printf("%d", ndo3.next->next->data);
}