class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def invertTree(self, root: TreeNode) -> TreeNode:
        if (root):
            tmp = root.left
            root.left = root.right
            root.right = tmp
            root.left = self.invertTree(root.left)
            root.right = self.invertTree(root.right)

        return root


class Solution:
    def invertTree(self, root: TreeNode) -> TreeNode:
        if (root):
            tmp = root.left
            root.left = self.invertTree(root.right)
            root.right = self.invertTree(tmp)

        return root
