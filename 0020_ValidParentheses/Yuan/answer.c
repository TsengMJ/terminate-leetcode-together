#include "stdbool.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

bool isValid(char* s);

typedef struct node {
    char parenthes;
    struct node* next;
} node_t;

void push(node_t** header, char parenthes) {
    node_t* new_node;

    new_node = (node_t*)malloc(sizeof(node_t));
    new_node->next = *header;
    new_node->parenthes = parenthes;
    *header = new_node;
}

char pop(node_t** header) {

    if (*header == NULL)
        return '0';

    char parenthes;

    node_t* tmp_node = *header;
    *header = (*header)->next;

    parenthes = tmp_node->parenthes;
    tmp_node->next = NULL;

    free(tmp_node);

    return parenthes;
}

int main()
{

    /*char test[3] = {'[', ']', '\0'};*/
    /*char test[3] = { '(', ')', '\0' };*/
    /*char test[7] = {'(', ')', '[', ']', '{', '}'};*/
    /*char test[5] = {'(', '{', '}', ')'};*/
    /*char test[1] = {'('};*/
    char test[2] = {'(', '('};

    bool answer = isValid(test);

    if (answer)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}

bool isValid(char* s) {
    int len = strlen(s);
    char tmp;
    node_t* header = NULL;

    if (len == 1)
        return false;

    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            push(&header, s[i]);
        }
        else {
            tmp = pop(&header);
            if ((int)tmp != s[i] - 1 && (int)tmp != s[i] - 2)
                return false;
        }
    }

    if (header != NULL) {
        return false;
    }

    return true;
}
