/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int depth = findDepth(root);
            
        return depth;
    }
    
    int findDepth(TreeNode* root){
        if(!root)
            return 0;
        
        int dL = findDepth(root->left);
        int dR = findDepth(root->right);
        return (dL>dR)? 1 + dL: 1 + dR;
    }
};
