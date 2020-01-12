/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * refer : https://www.youtube.com/watch?v=4mm39dVLlZ0
 * Approach #2 Recursive
 * Input  : 1->2->3->4->5->NULL
 * Output : NULL<-1<-2<-3<-4<-5
 * Runtime: 4 ms, faster than 76.20% of C online submissions for Reverse Linked List.
 * Memory Usage: 7.7 MB, less than 25.00% of C online submissions for Reverse Linked List.
 */


struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL || head->next == NULL){return head;}
    struct ListNode* q = head->next;
    q = reverseList(q);
    head->next->next = head;
    head->next = NULL;
    return q;
}