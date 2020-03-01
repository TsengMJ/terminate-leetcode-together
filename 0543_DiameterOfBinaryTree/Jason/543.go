package main

func main() {
}

func diameterOfBinaryTree(root *TreeNode) int {
	var maxDepth int = 0
	dfs(root, &maxDepth)
	return maxDepth
}

func dfs(root *TreeNode, maxDepth *int) int {
	if !root {
		return 0
	}

	leftDepth := dfs(root.Left, maxDepth)
	rightDepth := dfs(root.Right, maxDepth)

	if leftDepth+rightDepth > *maxDepth {
		*maxDepth = leftDepth + rightDepth
	}

	var max int = leftDepth
	if rightDepth > leftDepth {
		max = rightDepth
	}

	return max + 1
}
