package main

import (
	"fmt"
)

func main() {

}

func rangeSumBST(root *TreeNode, L int, R int, dic map[int]bool) int {
    if (root.Left != nil && root.Right != nil) {
        if (root.Val >= L && root.Val <= R) {
            return rangeSumBST(root.Left, L, R) + rangeSumBST(root.Right, L, R) + root.Val
        }
        
	return rangeSumBST(root.Left, L, R) + rangeSumBST(root.Right, L, R)
    }
    
    if (root.Left != nil) {
        if (root.Val >= L && root.Val <= R) {
            return rangeSumBST(root.Left, L, R) + root.Val
        }
	return rangeSumBST(root.Left, L, R)
    }

    if (root.Right != nil) {
        if (root.Val >= L && root.Val <= R) {
            return rangeSumBST(root.Right, L, R) + root.Val
        }
	return rangeSumBST(root.Right, L, R)
   }

    if (root.Val >= L && root.Val <= R) {
        return root.Val
    }
	
    return 0
}

type TreeNode struce {
	Val int
	Left *TreeNode
	Right *TreeNode
}
