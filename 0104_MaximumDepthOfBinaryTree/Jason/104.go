package main

func main() {

}

func maxDepth(root *TreeNode) int {
	// Version 1
	if root == nil {
		return 0
	}

	leftDepth := 1
	rightDepth := 1
	leftDepth += maxDepth(root.Left)
	rightDepth += maxDepth(root.Right)

	if leftDepth > rightDepth {
		return leftDepth
	}

	return rightDepth
}

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}
