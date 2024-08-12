#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct Bt{
    int data;
    struct Bt* left;
    struct Bt* right;
}Bt;

void initialize_root(Bt* tree, int root){
    tree->data = root;
    tree->left = NULL;
    tree->right = NULL;
}

void assert_lower(int number, int base){
    if (number > base){
        printf("The data of the left node cannot be higher than its root.\n");
        exit(1);
    } else {
        ;
    }
}

void assert_higher(int number, int base){
    if (number < base){
        printf("The data of the right node cannot be lower than its root.\n");
        exit(1);
    } else {
        ;
    }
}

void insert_tree(Bt* tree, int data, char dir){
    Bt* ptr = (Bt*)malloc(sizeof(Bt));
    assert(ptr);
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    if (dir == 'L'){
        assert_lower(ptr->data, tree->data);
        tree->left = ptr;
    } else if (dir == 'R'){
        assert_higher(ptr->data, tree->data);
        tree->right = ptr;
    } else {
        printf("Erro de direção.\n");
        return;
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
