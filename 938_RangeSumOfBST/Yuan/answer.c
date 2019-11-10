#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} treeNode_t;

struct TreeNode* newNode (int val);

int rangeSumBST(struct TreeNode* root, int L, int R);

int main() {
    return 0;
}

struct TreeNode* newNode (int val) {

    struct TreeNode* tmp = (struct TreeNode*)malloc(sizeof(struct TreeNode));

    tmp->val = val;
    tmp->left = tmp->right = NULL;

    return tmp;
}

int rangeSumBST(struct TreeNode* root, int L, int R){
        if (root == NULL)
            return 0;

        if (R < root->val)
            return rangeSumBST(root->left, L, R);
        else if (root->val < L)
            return rangeSumBST(root->right, L, R);
        return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
}
