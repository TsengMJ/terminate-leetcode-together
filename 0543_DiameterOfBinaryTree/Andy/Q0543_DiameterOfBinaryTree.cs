using LeetCode.Common;

namespace LeetCode.Easy
{
    /*
    Given a binary tree, you need to compute the length of the diameter of the tree.
    The diameter of a binary tree is the length of the longest path between any two nodes in a tree.
    This path may or may not pass through the root.

    Example:
    Given a binary tree

          1
         / \
        2   3
       / \
      4   5

    Return 3, which is the length of the path [4,2,1,3] or [5,2,1,3].

    Note: The length of path between two nodes is represented by the number of edges between them.
    */

    public class Q0543_DiameterOfBinaryTree
    {
        public int DiameterOfBinaryTree(TreeNode root)
        {
            if (root == null)
            {
                return 0;
            }

            var rootDiameter = FindDepth(root.Left) + FindDepth(root.Right);

            var leftDiameter = DiameterOfBinaryTree(root.Left);
            var rightDiameter = DiameterOfBinaryTree(root.Right);

            var childDiameter = leftDiameter > rightDiameter ? leftDiameter : rightDiameter;

            return rootDiameter > childDiameter ? rootDiameter : childDiameter;
        }

        private int FindDepth(TreeNode node)
        {
            if (node == null)
            {
                return 0;
            }

            var leftDepth = FindDepth(node.Left);
            var rightDepth = FindDepth(node.Right);

            return (leftDepth > rightDepth) ? (leftDepth + 1) : (rightDepth + 1);
        }
    }
}