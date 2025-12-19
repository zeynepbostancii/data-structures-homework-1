#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void deleteList(struct node* head) {
    if (head == NULL)
        return;

    deleteList(head->next);
    free(head);
}

