#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Bt{
    int data;
    struct Bt* left;
    struct Bt* right;
}Bt;

void initbt(Bt* root){
    root->left = NULL;
    root->right = NULL;
}

void insertbt(Bt* root, int dado, char dir){
    Bt* ptr = (Bt*)malloc(sizeof(Bt));
    if (ptr == NULL){
        printf("Falha na Alocação.\n");
    } else {
        ptr->data = dado;
        ptr->left = NULL;
        ptr->right = NULL;

        if (dir == 'L'){
            root->left = ptr;
        }else if (dir == 'R') {
            root->right = ptr;
        } else {
            printf("Direção Inválida.\n");
            return;
        }
    }
}

void preorder(Bt* root){
    if (root != NULL){
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    } else {
        ;
    }
}

void postorder(Bt* root){
    if (root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void inorder(Bt* root){
    if (root == NULL){
        return;
    } else {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void main(){

    Bt* tree = (Bt*)malloc(sizeof(Bt));
    initbt(tree);
    tree->data = 50;
    insertbt(tree, 40, 'L');
    insertbt(tree, 60, 'R');
    insertbt(tree->left, 30, 'L');
    insertbt(tree->left, 45, 'R');
    insertbt(tree->right, 55, 'L');
    insertbt(tree->right, 70, 'R');

    preorder(tree);
    printf("\n");
    postorder(tree);
    printf("\n");
    inorder(tree);

}