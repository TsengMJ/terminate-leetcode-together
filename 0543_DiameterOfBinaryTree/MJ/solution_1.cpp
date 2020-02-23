class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        int max_len = 0;
        getDepth(root, max_len);
        
        return max_len;
    }
    
    int getDepth(TreeNode* root, int& max_len){
        if(!root)
            return 0;
        
        int left_depth = getDepth(root->left, max_len);
        int right_depth = getDepth(root->right, max_len);
        
        if (left_depth + right_depth > max_len)
            max_len = left_depth + right_depth;
        
        return (left_depth > right_depth)? left_depth+1: right_depth+1;
    }
};
