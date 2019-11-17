#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char * s);

typedef struct node {
    char c;
    struct node* next;
} node_t;

void push(node_t** header, char c) {
    node_t* new_node;

    new_node = (node_t*)malloc(sizeof(node_t));
    new_node->next = *header;
    new_node->c = c;
    *header = new_node;
}

char pop(node_t** header) {
    if (*header == NULL)
        return '0';

    char c;

    node_t* tmp_node = *header;
    *header = (*header)->next;

    c = tmp_node->c;
    tmp_node->next = NULL;

    free(tmp_node);

    return c;
}

int main() {

    bool answer;

    /*char s[] = "A man, a plan, a canal: Panama";*/
    char s[] = "race a car";

    answer = isPalindrome(s);

    if (answer)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

bool isPalindrome(char *s) {
    int s_len = strlen(s);
    int i, j;
    char tmp;

    if (s_len == 0)
        return true;

    node_t* header;
    int len = 0;
    for (i = 0; i < s_len; i += 1) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
            len += 1;
    }

    for (i = 0, j = 0; j < len/2; i += 1) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
            push(&header, s[i]);
            j += 1;
        }
    }

    for (i = i; i < s_len; i += 1) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
            if (len % 2) {
                len += 1;
                continue;
            }

            tmp = pop(&header);

            if (tmp <= 'Z' && tmp >= 'A' && tmp != s[i] && (int)tmp != (int)s[i] - 32)
                return false;
            else if (tmp <= 'z' && tmp >= 'a' && tmp != s[i] && (int)tmp != (int)s[i] + 32)
                return false;
            else if (tmp <= '9' && tmp >= '0' && tmp != s[i])
                return false;
      }
    }

    return true;
}
