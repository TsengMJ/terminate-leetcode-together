#include<stdio.h>
#include<stdlib.h>

struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2){

    if (t1 != NULL && t2 != NULL) {
        struct TreeNode* node;
        node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        node->val = t1->val + t2->val;
        node->left = mergeTrees(t1->left, t2->left);
        node->right = mergeTrees(t1->right, t2->right);
        return node;
    } else if (t1 != NULL && t2 == NULL) {
        return t1;
    } else if (t1 == NULL && t2 != NULL) {
        return t2;
    }

    return NULL;
}
