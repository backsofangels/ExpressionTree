#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

PtrNode initNode(int value, CodOper codoper) {
    PtrNode node = (PtrNode) calloc(1, sizeof(TreeNode));
    node->value = value;
    node->codoper = codoper;
    node->left = NULL;
    node->right = NULL;
    return node;
}


