using LeetCode.Common;

namespace LeetCode.Easy
{
    /*
    Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

    Example:
    Input: 1->2->4, 1->3->4
    Output: 1->1->2->3->4->4
    */

    public class Q0021_MergeTwoSortedLists
    {
        public ListNode MergeTwoLists(ListNode l1, ListNode l2)
        {
            if (l1 == null)
            {
                return l2;
            }

            if (l2 == null)
            {
                return l1;
            }

            if (l1.Data < l2.Data)
            {
                l1.Next = MergeTwoLists(l1.Next, l2);
            }
            else
            {
                l2.Next = MergeTwoLists(l2.Next, l1);
            }

            return l1.Data < l2.Data ? l1 : l2;
        }
    }
}