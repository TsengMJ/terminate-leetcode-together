#include <iostream>

struct TreeNode {
	int val;
 	TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
	if (t1 == NULL)
		return t2;
	
	if (t2 == NULL)
		return t1;

	TreeNode *tmp = new TreeNode(
		t1->val + t2->val
	);
	
	tmp->left = mergeTrees(t1->left, t2->left);
	tmp->right = mergeTrees(t1->right, t2->right);
	
	return tmp;
}
