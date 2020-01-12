using LeetCode.Common;

namespace LeetCode.Easy
{
    /*
        Reverse a singly linked list.

        Example:
        Input: 1->2->3->4->5->NULL
        Output: 5->4->3->2->1->NULL

        Follow up:
        A linked list can be reversed either iteratively or recursively. Could you implement both?
    */

    public class Q0206_ReverseLinkedList
    {
        public ListNode ReverseList(ListNode head)
        {
            return Reverse(null, head);
        }

        private ListNode Reverse(ListNode previous, ListNode current)
        {
            if (current == null)
            {
                return previous;
            }

            var next = current.Next;
            current.Next = previous;
            return Reverse(current, next);
        }
    }
}