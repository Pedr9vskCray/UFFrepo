#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

typedef struct Queue{
    Node* start;
    Node* end;
}Queue;

void initQueue(Queue* q){
    q->start = NULL;
    q->end = NULL;
}

void enqueue(int dado, Queue* q){
    Node* ptr = (Node*)malloc(sizeof(Node)); // alocando dinamicamente um novo nó
    if (ptr == NULL){
        printf("Erro de alocação de Node.\n");
        return;
    } else {
        ptr->data = dado;
        // sempre inicializar um novo nó com NULL para evitar problemas com lixo de memória
        ptr->next = NULL;
        if (q->start == NULL){
            q->start = ptr;
        } else {
            q->end->next = ptr;
        }
        q->end = ptr;
        return;
    }
}

int dequeue(Queue* q){
    Node* ptr = q->start;
    int dado;
    if (ptr != NULL){
        q->start = ptr->next;
        ptr->next = NULL;
        dado = ptr->data;
        free(ptr);
        if (q->start == NULL){
            q->end == NULL;
        }
        return dado;
    } else {
        printf("Queue empty.\n");
        return 0;
    }
}

void printQueue(Queue* q){
    Node* ptr = q->start;
    if (ptr != NULL){
        while (ptr != NULL){
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    } else {
        printf("Queue empty.\n");
        return;
    }
}

void main(){
    Queue* q1 = (Queue*)malloc(sizeof(Queue));
    if (q1 == NULL){
        printf("Erro de alocação");
        exit(1);
    } else {
        initQueue(q1);

        enqueue(10, q1);
        enqueue(20, q1);
        enqueue(30, q1);

        printQueue(q1);

        printf("\n");

        dequeue(q1);

        printQueue(q1);

        printf("\n");

        dequeue(q1);
        dequeue(q1);

        printQueue(q1);
    }
}