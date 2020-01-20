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
        if(head){
            ListNode* last = NULL;
            ListNode* next = head->next;

            while(next){
                head->next = last;
                last = head;
                head = next;
                next = next->next;
            }
            
            head->next = last;
        }

        return head;
            
    }
};