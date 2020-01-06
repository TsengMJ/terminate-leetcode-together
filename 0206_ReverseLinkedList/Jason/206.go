package main

import "fmt"

func main() {
	arr := []int{1, 2, 3, 4, 5}
	root := BuildLinkedList(arr)
	PrintLinkedList(root)
	PrintLinkedList(ReverseList(root))
}

func ReverseList(head *ListNode) *ListNode {
	// Recursive
	if head == nil {
		return nil
	}

	tmp := []*ListNode{}
	newHead := head
	traverse(newHead, &tmp)

	length := len(tmp)
	node := tmp[length-1]
	for i := length - 2; i > -1; i-- {
		node.Next = tmp[i]
		node = node.Next
	}

	node.Next = nil

	return tmp[length-1]

	// Iterative
	// if head == nil {
	// 	return head
	// }

	// tmp := []*ListNode{}
	// for head.Next != nil {
	// 	tmp = append(tmp, head)
	// 	head = head.Next
	// }

	// tmp = append(tmp, head)

	// originHead := head
	// for i := len(tmp) - 2; i > -1; i-- {
	// 	head.Next = tmp[i]
	// 	head = head.Next
	// }

	// head.Next = nil

	// return originHead
}

func traverse(head *ListNode, arr *[]*ListNode) *ListNode {
	if head != nil {
		*arr = append(*arr, head)
		return traverse(head.Next, arr)
	}

	return nil
}

type ListNode struct {
	Val  int
	Next *ListNode
}

func BuildLinkedList(arr []int) *ListNode {
	if len(arr) == 0 {
		return nil
	}

	head := &ListNode{
		Val:  arr[0],
		Next: nil,
	}

	root := head

	for i := 1; i < len(arr); i++ {
		head.Next = &ListNode{
			Val:  arr[i],
			Next: nil,
		}

		head = head.Next
	}

	return root
}

func PrintLinkedList(root *ListNode) *ListNode {
	if root == nil {
		return nil
	}

	fmt.Println(root.Val)
	return PrintLinkedList(root.Next)
}
