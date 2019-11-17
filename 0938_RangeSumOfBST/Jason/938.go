package main

func main() {

}

func rangeSumBST(root *TreeNode, L int, R int) int {
	// Version 2
	if root == nil {
		return 0
	}

	if root.Val < L {
		return rangeSumBST(root.Right, L, R)
	}

	if root.Val > R {
		return rangeSumBST(root.Left, L, R)
	}

	if root.Val >= L && root.Val <= R {
		return rangeSumBST(root.Left, L, R) + rangeSumBST(root.Right, L, R) + root.Val
	}

	return 0

	// Version 1
	//     if (root.Left != nil && root.Right != nil) {
	//         if (root.Val >= L && root.Val <= R) {
	//             return rangeSumBST(root.Left, L, R) + rangeSumBST(root.Right, L, R) + root.Val
	//         }

	// 	return rangeSumBST(root.Left, L, R) + rangeSumBST(root.Right, L, R)
	//     }

	//     if (root.Left != nil) {
	//         if (root.Val >= L && root.Val <= R) {
	//             return rangeSumBST(root.Left, L, R) + root.Val
	//         }
	// 	return rangeSumBST(root.Left, L, R)
	//     }

	//     if (root.Right != nil) {
	//         if (root.Val >= L && root.Val <= R) {
	//             return rangeSumBST(root.Right, L, R) + root.Val
	//         }
	// 	return rangeSumBST(root.Right, L, R)
	//    }

	//     if (root.Val >= L && root.Val <= R) {
	//         return root.Val
	//     }

	//     return 0
}

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}
