/**
 * 21. Merge Two Sorted Lists
 * Merge two sorted linked lists and return it as a new list.
 * The new list should be made by splicing together the nodes of the first two lists.
 * 
 * Input: 1->2->4, 1->3->4
 * Output: 1->1->2->3->4->4
 *
 * Runtime: 4 ms, faster than 82.39% of C online submissions for Merge Two Sorted Lists.
 * Memory Usage: 7.3 MB, less than 90.91% of C online submissions for Merge Two Sorted Lists.
 *
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    

    struct ListNode* head = (struct ListNode*) malloc(sizeof(struct ListNode));
    struct ListNode* next;
    // l1 : 1 -> 2 -> 4 -> NULL
    // head : NULL -> 1 -> 2 -> 4 -> NULL
    head->val = NULL;
    head->next = l1;

    l1 = head;

    while(l2 != NULL && l1->next !=NULL){
            if(l2->val <= l1->next->val){
                    next = l1->next;
                    l1->next = l2;
                    l2 = l2->next;
                    l1->next->next = next;
                    l1 = l1->next;
            }
            else{
                l1 = l1->next;
            }
    }
    if(l2 != NULL){
        l1->next = l2;
    }

    return head->next;
}

