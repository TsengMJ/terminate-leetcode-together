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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* sorted = NULL;
        ListNode* idx = NULL;
        
//      Initial sorted 
        if(l1 && l2){
            if (l1->val < l2->val){
                sorted = new ListNode((l1)->val);
                l1 = l1->next;
            }else{
                sorted = new ListNode((l2)->val);
                l2 = l2->next;
            }
        }else if(l1){
            sorted = new ListNode(l1->val);
            l1 = l1->next;
        }else if(l2){
            sorted = new ListNode(l2->val);
            l2 = l2->next;
        }

//      Merge Sort
        idx = sorted;
        while(l1 && l2){
            if (l1->val < l2->val){
                idx->next = new ListNode((l1)->val);
                l1 = l1->next;
                idx = idx->next;
            }else{
                idx->next = new ListNode((l2)->val);
                l2 = l2->next;
                idx = idx->next;
            }
        }
        
        while(l1){
            idx->next = new ListNode((l1)->val);
            l1 = l1->next;
            idx = idx->next;
        }
        
        while(l2){
            idx->next = new ListNode((l2)->val);
            l2 = l2->next;
            idx = idx->next;
        }
        
        return sorted;
    }
};
