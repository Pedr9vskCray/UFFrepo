#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

typedef struct Stack{
    struct Node* top;
}Stack;

void initializeStack(Stack* p){
    p->top = NULL;
}

void startStacking(int data, Stack* p){
    Node* ptr = (Node*)malloc(sizeof(Node));
    if (ptr == NULL){
        printf("Erro de alocação de memória do nó.\n");
        return;
    }
    else {
        ptr->data = data;
        ptr->next = p->top;
        p->top = ptr;
    }

}

int startUnStacking(Stack *p){
    Node* ptr = p->top;
    int dado;
    if (ptr == NULL){
        printf("Stack Empty.\n");
        return 0;
    } else {
        p->top = ptr->next;
        ptr->next = NULL;
        ptr->data = dado;
        free(ptr);
        return dado;
    }
}

void printStack(Stack* p){
    Node* ptr = p->top;
    if (ptr == NULL){
        printf("Stack Empty.\n");
    } else {
        while(ptr != NULL){
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int printTop(Stack* p){
    Node* ptr = p->top;
    printf("Value at the top: %d\n", ptr->data);
    return 0;
}


void main(){
    Stack* p1 = (Stack*)malloc(sizeof(Stack));
    if (p1 == NULL){
        printf("Erro de alocação da pilha.\n");
        exit(0);
    } else {
        initializeStack(p1);

        startStacking(10, p1);
        startStacking(20, p1);
        startStacking(30, p1);

        printStack(p1);

        int temp = startUnStacking(p1);

        printStack(p1);

        printTop(p1);

    }
}

