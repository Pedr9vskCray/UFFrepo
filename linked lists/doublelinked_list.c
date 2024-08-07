#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
}Node;

typedef struct List{
    Node* lstart;
    Node* lend;
}List;

void initList(List* l){
    l->lstart = NULL;
    l->lend = NULL;
}

void startInsert(int dado, List* l){
    Node* ptr = (Node*)malloc(sizeof(Node));
    if (ptr == NULL){
        printf("Erro de alocação.\n");
        return;
    } else {
        ptr->data = dado;
        ptr->next = NULL;
        ptr->prev = NULL;
    }
    if (l->lstart == NULL){
        l->lstart = ptr;
        l->lend = ptr;
    } else {
        l->lstart->prev = ptr;
        ptr->next = l->lstart;
        l->lstart = ptr;
    }
}

void endInsert(int dado, List* l){
    Node* ptr = (Node*)malloc(sizeof(Node));
    if (ptr == NULL){
        printf("Erro de alocação.\n");
        return;
    } else {
        ptr->data = dado;
        ptr->next = NULL;
        ptr->prev = NULL;
    }
    if (l->lstart == NULL){
        l->lstart = ptr;
        l->lend = ptr;
    } else {
        l->lend->next = ptr;
        ptr->prev = l->lend;
        l->lend = ptr;
    }
}

int startremove(List* l){
    int dado;
    Node* ptr = (Node*)malloc(sizeof(Node));
    if (ptr != NULL){ // não está testando se a lista está vazia, apenas a alocação
        ptr = l->lstart;
        dado = ptr->data;
        l->lstart = ptr->next;
        free(ptr);
        if (l->lstart == NULL){
            l->lend = NULL;
        } else {
            l->lstart->prev = NULL;
        }
        return dado;
    } else {
        printf("Linked List Empty.\n"); // logo, nunca será mostrado
        return 0;
    }
}

int endremove(List* l){
    int dado;
    Node* ptr = (Node*)malloc(sizeof(Node));
    if (ptr != NULL){ // não está testando se a lista está vazia, apenas a alocação
        ptr = l->lend;
        dado = ptr->data;
        l->lend = ptr->prev;
        free(ptr);
        if (l->lstart == NULL){
            l->lend = NULL;
        } else {
            l->lend->next = NULL;
        }
        return dado;
    } else {
        printf("Linked List Empty.\n"); // logo, nunca será mostrado
        return 0;
    }
}

void printList(List* l){
    Node* ptr = (Node*)malloc(sizeof(Node));
    ptr = l->lstart;
    printf("\nInicio -> ");
    while (ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf(" <- FIM");
}

void main(){
    setlocale(LC_ALL, "Portuguese");

    List* l = (List*)malloc(sizeof(List));

    initList(l);
    startInsert(10, l);
    startInsert(20, l);
    startInsert(30, l);
    printList(l);
    endInsert(40, l);
    endInsert(50, l);
    endInsert(60, l);
    printList(l);
    startremove(l);
    endremove(l);
    printList(l);
    

}
