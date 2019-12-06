package main

func main() {

}

func SplitListToParts(root *ListNode, k int) []*ListNode {
	result := []*ListNode{}
	listLength := 0
	newRoot := root
	for newRoot != nil {
		listLength++
		newRoot = newRoot.Next
	}

	if listLength > k {
		perIndex := listLength / k
		remainder := listLength % k
		var amount int = perIndex
		if remainder > 0 {
			amount = perIndex + 1
			remainder--
		}

		count := 0
		head := root
		now := root
		for now != nil {

			if count == amount-1 {
				newHead := now.Next
				now.Next = nil
				result = append(result, head)
				head = newHead
				now = newHead

				count = 0
				amount = perIndex
				if remainder > 0 {
					remainder--
					amount++
				}

				continue
			}

			now = now.Next
			count++
		}

	} else {
		count := 0
		for count < listLength {
			node := ListNode{
				Val:  root.Val,
				Next: nil,
			}
			result = append(result, &node)
			root = root.Next
			count++
		}

		for count != k {
			result = append(result, nil)
			count++
		}
	}

	return result
}

type ListNode struct {
	Val  int
	Next *ListNode
}
