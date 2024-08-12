#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "tree.h"

void main(){
    Bt* tree = (Bt*)malloc(sizeof(Bt));
    initialize_root(tree, 50);
    insert_tree(tree, 25, 'L');
    insert_tree(tree, 75, 'R');

    insert_tree(tree->left, 15, 'L');
    insert_tree(tree->left, 30, 'R');

    insert_tree(tree->right, 65, 'L');
    insert_tree(tree->right, 80, 'R');
    
    preorder(tree);
    printf("\n");
    inorder(tree);
    printf("\n");
    postorder(tree);
}