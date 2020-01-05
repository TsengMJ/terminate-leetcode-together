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

    if (root) {
        struct TreeNode** tmp = malloc(sizeof(struct TreeNode*));

        *tmp = root->right;
        root->right = root->left;
        root->left = *tmp;
        free(tmp);

        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
    }

    return root;
}

struct TreeNode* invertTree(struct TreeNode* root) {
  if (root) {
    struct TreeNode *tmp = root->left;

    root->left = invertTree(root->right);
    root->right = invertTree(tmp);
  }
  return root;
}
