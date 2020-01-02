/**
 * Definition for a binary tree node.
 * Input : [4,2,7,1,3,6,9]
 * Output : [4,7,2,9,6,3,1]
 *
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
    if(root == NULL) {return 0;}
    
    /*
    struct TreeNode *tmp;
    tmp = root->left;
    */
    struct TreeNode *tmp = root->left;
    
    /*
    root->left = root->right;
    root->right = tmp;
    
    invertTree(root->left);
    invertTree(root->right);
    */
    
    root->left = invertTree(root->right);
    root->right = invertTree(tmp);
    
    return root;
}