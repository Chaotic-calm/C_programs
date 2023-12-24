#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to count the number of leaves in a binary tree
int countLeaves(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    // If the node is a leaf, return 1
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }
    int leftLeaves = countLeaves(root->left);
    int rightLeaves = countLeaves(root->right);
  
    return leftLeaves + rightLeaves;
}

int main() {
    
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    // Count the number of leaves
    int leavesCount = countLeaves(root);

    printf("Number of leaves: %d\n", leavesCount);

    // Clean up memory
    free(root->left->left);
    free(root->left->right);
    free(root->right->left);
    free(root->right->right);
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}
