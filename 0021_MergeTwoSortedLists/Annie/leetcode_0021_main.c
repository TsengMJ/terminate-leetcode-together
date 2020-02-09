#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
 	int val;
 	struct ListNode *next;
};


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

                    printf("List 1 : ");
                    printf_list(l1);
                    printf("List 2 : ");
                    printf_list(l2);
            }
            else{
                l1 = l1->next;

                printf("List 1 : ");
                printf_list(l1);
                printf("List 2 : ");
                printf_list(l2);
            }
            printf("Now List : ");
            printf_list(head->next);
    }
    if(l2 != NULL){
        l1->next = l2;
    }
    printf("Now List : ");
    printf_list(head->next);

    return head->next;
}

void printf_list(struct ListNode* head){

	while (head != NULL){
		printf("%d -> ", head->val);
		head = head->next;
	}
	printf("NULL\n\n");
}

int main(){
	struct ListNode* l1 = (struct ListNode*) malloc(sizeof(struct ListNode));
	l1->val = 1;
	l1->next = (struct ListNode*) malloc(sizeof(struct ListNode));
	l1->next->val = 2;
	l1->next->next = NULL;
	//l1->next->next = (struct ListNode*) malloc(sizeof(struct ListNode));
	//l1->next->next->val = 4;
	//l1->next->next->next = NULL;

	struct ListNode* l2 = (struct ListNode*) malloc(sizeof(struct ListNode));
	l2->val = 1;
	l2->next = (struct ListNode*) malloc(sizeof(struct ListNode));
	l2->next->val = 3;
	l2->next->next = (struct ListNode*) malloc(sizeof(struct ListNode));
	l2->next->next->val = 4;
	l2->next->next->next = NULL;

	printf("List 1 : ");
	printf_list(l1);
	printf("List 2 : ");
	printf_list(l2);

	printf("=== merge Two Lists ===\n");
	mergeTwoLists(l1,l2);

	return 0;
}
