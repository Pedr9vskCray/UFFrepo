#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct Bt{
    int data;
    struct Bt* left;
    struct Bt* right;
}Bt;

void initialize_root(Bt* tree, int root);

void assert_lower(int number, int base);

void assert_higher(int number, int base);

void insert_tree(Bt* tree, int data, char dir);

void preorder(Bt* root);

void postorder(Bt* root);

void inorder(Bt* root);

#endif