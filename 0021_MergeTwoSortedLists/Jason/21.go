package main

func main() {

}

func MergeTwoLists(l1 *ListNode, l2 *ListNode) *ListNode {
	if l1 == nil {
        return l2
    }
    
    if l2 == nil {
        return l1
    }
    
    list := []int{}

	for l1 != nil && l2 != nil {
		if l1.Val <= l2.Val {
            list = append(list, l1.Val)
            
			l1 = l1.Next
		} else if l2.Val < l1.Val {
            list = append(list, l2.Val)
            
			l2 = l2.Next
		}
	}
    
    if l1 != nil {
        for l1 != nil {
            list = append(list, l1.Val)
            l1 = l1.Next
        }
    }
    
    if l2 != nil {
        for l2 != nil {
            list = append(list, l2.Val)
            l2 = l2.Next
        }
    }
    
    var node *ListNode = &ListNode{
        Val: list[0],
        Next: nil,
    }
    
    head := node
    for i := 1; i < len(list); i++ {
        node.Next = &ListNode{
            Val: list[i],
            Next: nil,
        }
        
        node = node.Next
    }

	return head
}

type ListNode struct {
	Val int
	Next *ListNode
}