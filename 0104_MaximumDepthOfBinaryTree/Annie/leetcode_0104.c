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
 * Runtime: 12 ms, faster than 10.51% of C online submissions for Maximum Depth of Binary Tree.
 * Memory Usage: 9.4 MB, less than 11.11% of C online submissions for Maximum Depth of Binary Tree.
 *
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root){
    int path = 0;
    if(root != NULL){
        path = findPath(root, path);
    }
    
    return path;
}

int findPath(struct TreeNode* root, int path){
    
    if(root != NULL){
        path ++;
        printf("root:%d, path=%d\n", root->val, path);
        int l_path = findPath(root->left, path);
        int r_path = findPath(root->right, path);
        
        if(l_path >= r_path){
            path = l_path;
            return path;
        }
        else{
            path = r_path;
            return path;   
        }
    }
    return path;
}

