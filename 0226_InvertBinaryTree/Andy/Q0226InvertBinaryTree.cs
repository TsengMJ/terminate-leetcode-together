using System;

namespace LeetCode.Easy
{
    /*
    Invert a binary tree.

    Example:
    Input:
         4
       /   \
      2     7
     / \   / \
    1   3 6   9

    Output:
         4
       /   \
      7     2
     / \   / \
    9   6 3   1
    */

    public class Q0226InvertBinaryTree
    {
        public Node InvertTree(Node root)
        {
            if (root != null)
            {
                this.SwapNode(root);
                this.InvertTree(root.Left);
                this.InvertTree(root.Right);
            }
            return root;
        }

        private void SwapNode(Node node)
        {
            if (node == null)
            {
                throw new ArgumentNullException(nameof(node), "不可為null");
            }

            var temp = node.Left;
            node.Left = node.Right;
            node.Right = temp;
        }
    }
}