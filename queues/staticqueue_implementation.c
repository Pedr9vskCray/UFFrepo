#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 5

typedef struct Queue{
    int data[N];
    int end;
}Queue;

void initQueue(Queue* q){
    for (int i=0;i<N;i++){
        q->data[i] = 0;
    }
    q->end = 0;
}

void enqueue(int data, Queue* q){
    if (q->end == N){
        printf("Queue is full.\n");
        return;
    } else {
        q->data[q->end] = data;
        q->end++;
    }
}

int dequeue(Queue* q){
    if (q->end == 0){
        printf("The queue is empty.\n");
        return 0;
    } else {
        int backup = q->data[0];
        q->data[0] = 0;
        for (int i=0;i<q->end;i++){
            q->data[i] = q->data[i+1];
        }
        q->end--;
        q->data[q->end] = 0;
        return backup;
    }
}

void printqueue(Queue* q){
    printf("Printing the Queue:\n");
    for (int i=0;i<N;i++){
        printf("%d\n", q->data[i]);
    }
}

void main(){

    Queue q1;
    initQueue(&q1);
    enqueue(10, &q1);
    enqueue(20, &q1);
    enqueue(30, &q1);
    enqueue(40, &q1);
    enqueue(50, &q1);
    printqueue(&q1);
    enqueue(60, &q1);
    dequeue(&q1);
    dequeue(&q1);
    dequeue(&q1);
    printqueue(&q1);
    enqueue(60, &q1);
    enqueue(70, &q1);
    printqueue(&q1);
    dequeue(&q1);
    dequeue(&q1);
    printqueue(&q1);
    enqueue(80, &q1);
    enqueue(90, &q1);
    enqueue(100, &q1);
    printqueue(&q1);
    enqueue(110, &q1);
    dequeue(&q1);
    dequeue(&q1);
    dequeue(&q1);
    dequeue(&q1);
    dequeue(&q1);
    dequeue(&q1);
    
}