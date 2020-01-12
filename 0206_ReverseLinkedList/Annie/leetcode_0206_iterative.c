/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * Approach #1 Iterative
 * Input  : 1->2->3->4->5->NULL
 * Output : NULL<-1<-2<-3<-4<-5
 * Runtime: 4 ms, faster than 76.20% of C online submissions for Reverse Linked List.
 * Memory Usage: 7.4 MB, less than 100.00% of C online submissions for Reverse Linked List.
 */


struct ListNode* reverseList(struct ListNode* head){
    
    struct ListNode* prev = NULL;
    struct ListNode* next = NULL;
    // {NULL} [1]->(2)->3->4->5->NULL
    
    while(head != NULL){
        next = head->next; // next = (2)
        head->next = prev; // NULL<-[1] 2->3->4->5->NULL
        prev = head; // NULL<-{1} 2->3->4->5->NULL
        head = next; // NULL<-{1} [2]->3->4->5->NULL
    }
 
    return prev;
}