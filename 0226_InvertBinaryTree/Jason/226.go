package main

func main() {
}

func invertTree(root *TreeNode) *TreeNode {
    newRoot := root

	invert(newRoot)
    return root
}

func invert(root *TreeNode) *TreeNode {
    if root == nil {
        return nil
    }

    root.Left, root.Right = root.Right, root.Left
    invert(root.Left)
    invert(root.Right)

    return root
}

type TreeNode struct {
	Val int
	Left *TreeNode
	Right *TreeNode
}
