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
 * Runtime: 4 ms, faster than 95.38% of C online submissions for Maximum Depth of Binary Tree.
 * Memory Usage: 9.1 MB, less than 100.00% of C online submissions for Maximum Depth of Binary Tree.
 *
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root){
    return findPath(root);
}

int findPath(struct TreeNode* root){
    if(root == NULL){return 0;}
    return max(findPath(root->left), findPath(root->right)) + 1;
}

int max(int num1, int num2){
    if(num1 >= num2){
        return num1;
    }
    return num2;
}