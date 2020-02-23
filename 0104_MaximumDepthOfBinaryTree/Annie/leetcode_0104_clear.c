/**
 * 104. Maximum Depth of Binary Tree
 * Given a binary tree, find its maximum depth.
 * The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
 * Note: A leaf is a node with no children.
 *
 * Example: Given binary tree [3,9,20,null,null,15,7]
 * return its depth = 3.
 * 
 * Example: Given binary tree []
 * return its depth = 0.
 * 
 * Example: Given binary tree [0]
 * return its depth = 1.
 *
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root){
    if(root == NULL){return 0;}
    /*
    int l = maxDepth(root->left);
    int r = maxDepth(root->right);
    return max(l, r) + 1;
    */
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}

int max(int num1, int num2){
    if(num1 >= num2){
        return num1;
    }
    return num2;
}