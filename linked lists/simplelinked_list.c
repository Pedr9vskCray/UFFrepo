#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

typedef struct List{
    Node* llstart;
    Node* llend;
}List;

void initList(List* l){
    l->llend = NULL;
    l->llstart = NULL;
    return;
}

void startinsert(int dado, List *l){ // insere no ínicio
    Node* ptr = (Node*)malloc(sizeof(Node));
    if (ptr == NULL){
        printf("Erro de Alocação.\n");
        return;
    } else {
        ptr->data = dado;
        ptr->next = NULL;
    }
    if (l->llstart == NULL){
        l->llend = ptr;
    } else {
        ptr->next = l->llstart;
    }
    l->llstart = ptr;
}

void endinsert(int dado, List* l){
    Node* ptr = (Node*)malloc(sizeof(Node));
    if (ptr == NULL){
        printf("Erro de Alocação.\n");
        return;
    } else {
        ptr->data = dado;
        ptr->next = NULL;
    }
    if (l->llstart == NULL){
        l->llstart = ptr;
    } else {
        l->llend->next = ptr;
    }
    l->llend = ptr;
}

int startremove(List* l){
    int dado;
    Node* ptr = (Node*)malloc(sizeof(Node));
    if (ptr != NULL){
        ptr = l->llstart;
        dado = ptr->data;
        l->llstart = ptr->next;
        free(ptr);
        if (l->llstart == NULL){
            l->llend = NULL;
        }
        return dado;
    } else {
        printf("Linked List Empty.\n");
        return 0;
    }
}

void printlist(List* l){
    Node* ptr = l->llstart;
    printf("Inicio -> ");
    while (ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("<- Fim\n\n");
}


void main(){
    setlocale(LC_ALL, "Portuguese");

    List* l = (List*)malloc(sizeof(List));

    initList(l); // inicializar a lista

    startinsert(10, l);
    startinsert(20, l);
    startinsert(30, l);
    printlist(l);
    endinsert(40, l);
    endinsert(50, l);
    endinsert(60, l);
    printlist(l);
    startremove(l);
    startremove(l);
    startremove(l);
    printlist(l);

}