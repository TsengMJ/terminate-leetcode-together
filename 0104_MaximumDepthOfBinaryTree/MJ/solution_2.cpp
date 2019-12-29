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
        int depth = 0;
        findDepth(root, 0, depth);
            
        return depth;
    }
    
    void findDepth(TreeNode* root, int current, int& depth){
        if(root){
            current += 1;
            
            if(current > depth)
                depth = current;
            
            findDepth(root->left, current, depth);
            findDepth(root->right, current, depth);
        }
            
    }
};
