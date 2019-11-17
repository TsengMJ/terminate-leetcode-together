package main

func main() {

}

func mergeTrees(t1 *TreeNode, t2 *TreeNode) *TreeNode {
	// Version 1
	if t1 == nil {
		return t2
	}

	if t2 == nil {
		return t1
	}

	return &TreeNode{
		Val:   t1.Val + t2.Val,
		Left:  mergeTrees(t1.Left, t2.Left),
		Right: mergeTrees(t1.Right, t2.Right),
	}
}

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}
