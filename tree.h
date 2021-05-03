#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

typedef enum Operation {
    ADD = 0,
    SUB,
    MULTIPLY,
    DIVIDE
} CodOper;

typedef struct TreeNode {
    int value;
    CodOper codoper;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef TreeNode* PtrNode;

PtrNode initNode(int value, CodOper codoper);
PtrNode insertItemInTree(PtrNode root, PtrNode item);

//  Additional functions
void printTree(PtrNode treeRoot);
void printNodeHelper(PtrNode singleNode);

#endif // TREE_H_INCLUDED
