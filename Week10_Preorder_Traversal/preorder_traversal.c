#include <stdio.h>
#include <stdlib.h>

/* Tree node */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

/* Yeni node oluþtur */
struct Node* createNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

/* Pre-order traversal: Root -> Left -> Right */
void preorder(struct Node* root) {
    if (root == NULL)
        return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

int main() {
    /*
        Tree:
                  8
                /   \
               4     12
              / \    / \
             2   6  10  14
    */

    struct Node* root = createNode(8);

    root->left = createNode(4);
    root->right = createNode(12);

    root->left->left = createNode(2);
    root->left->right = createNode(6);

    root->right->left = createNode(10);
    root->right->right = createNode(14);

    printf("Pre-order traversal: ");
    preorder(root);

    return 0;
}

