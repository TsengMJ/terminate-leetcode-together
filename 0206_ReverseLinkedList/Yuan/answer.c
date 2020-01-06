#include <stdio.h>
#include <stdlib.h>


// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};


int main() {
    return 0;
}

// recursive1
struct ListNode* reverseList(struct ListNode* head){

   if(head == NULL) return NULL; // list does not exist.

   if(head->next == NULL) return head; // list with only one ListNode.

   struct ListNode* rest = reverseList(head->next); // recursive call on rest.

   head->next->next = head; // make head; next to the last ListNode in the reversed rest.

   head->next = NULL; // since head is the new last, make its next NULL.

   return rest; // rest now points to the head of the reversed list.
}

// recursive2
void recursion(struct ListNode** head, struct ListNode* current, struct ListNode* last) {

    if (current) {
        recursion(head, current->next, current);
        current->next = last;
    }
    else {
        *head = last;
    }
}

struct ListNode* iterate(struct ListNode* head) {

    struct ListNode* next;
    struct ListNode* current;
    struct ListNode* last = NULL;

    if (head) {
        while (head->next) {
            next = head->next;
            current = head;

            head->next = last;
            head = next;
            last = current;
        }
        head->next = last;
    }

    return head;
}

struct ListNode* reverseList(struct ListNode* head){

    // recursive2
    recursion(&head, head, NULL);

    // iterative
    head = iterate(head);

    return head;
}
