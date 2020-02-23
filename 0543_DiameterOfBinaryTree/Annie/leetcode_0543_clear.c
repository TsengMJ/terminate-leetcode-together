/**
 * 543. Diameter of Binary Tree
 * Given a binary tree, you need to compute the length of the diameter of the tree.
 * The diameter of a binary tree is the length of the longest path between any two nodes in a tree.
 * This path may or may not pass through the root.
 *
 * Example:
 * Given a binary tree
          1
         / \
        2   3
       / \     
      4   5 
 * Return 3, 
 * which is the length of the path [4,2,1,3] or [5,2,1,3].
 * 
 * Example: Given binary tree []
 * return its depth = 0.
 * 
 * Example: Given binary tree [0]
 * return its depth = 0.
 * 
 * Runtime: 8 ms, faster than 74.51% of C online submissions for Diameter of Binary Tree.
 * Memory Usage: 9.5 MB, less than 100.00% of C online submissions for Diameter of Binary Tree.
 *
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int diameterOfBinaryTree(struct TreeNode* root){

    int max_path = 0;
    findLongestPath(root, &max_path);
    
    return max_path;
}

int findLongestPath(struct TreeNode* root, int* max_path){
    if(root == NULL){return 0;}

    int l_path = findLongestPath(root->left, max_path);
    int r_path = findLongestPath(root->right, max_path);
    // printf("root:%d, l_path=%d, r_path=%d\n", root->val, l_path, r_path);

    *max_path = max(*max_path, l_path + r_path);
    // printf("root:%d, path=%d, max_path=%d\n", root->val, path, *max_path);    
    return max(l_path, r_path) + 1;
}

int max(int num1, int num2){
    // rst = (num1>num2) ? num1 : num2;
    if(num1 >= num2){
        return num1;
    }
    return num2;
}