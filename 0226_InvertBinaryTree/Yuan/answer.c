#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* invertTree(struct TreeNode* root);

int main() {

    return 0;
}

struct TreeNode* invertTree(struct TreeNode* root) {

    struct TreeNode** tmp = malloc(sizeof(struct TreeNode*));

    if (root) {
        if (root->right && root->left) {
            *tmp = root->right;
            root->right = root->left;
            root->left = *tmp;
            free(tmp);
        }
        else if (root->left) {
            root->right = root->left;
            root->left = NULL;
        }
        else if (root->right) {
            root->left = root->right;
            root->right = NULL;
        }
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
    }

    return root;
}

