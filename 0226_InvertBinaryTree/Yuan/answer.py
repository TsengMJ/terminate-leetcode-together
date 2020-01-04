class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def invertTree(self, root: TreeNode) -> TreeNode:
        if (root):
            if (root.left and root.right):
                tmp = root.left
                root.left = root.right
                root.right = tmp

            elif (root.left):
                root.right = root.left
                root.left = None

            elif (root.right):
                root.left = root.right
                root.right = None

            root.left = self.invertTree(root.left)
            root.right = self.invertTree(root.right)

        return root
