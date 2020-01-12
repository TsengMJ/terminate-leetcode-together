/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode *pre = NULL, *curr = NULL;
		while (head != NULL)
		{
			curr = head;
			head = curr->next;
			curr->next = pre;
			pre = curr;
		}
		return pre;
	}
};