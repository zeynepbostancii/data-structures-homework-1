#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void bubbleSortCircular(struct node* head) {
    if (head == NULL)
        return;

    struct node* i;
    struct node* j;
    int temp;

    for (i = head; i->next != head; i = i->next) {
        for (j = head; j->next != head; j = j->next) {
            if (j->data > j->next->data) {
                temp = j->data;
                j->data = j->next->data;
                j->next->data = temp;
            }
        }
    }
}

void display(struct node* head) {
    if (head == NULL)
        return;

    struct node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}

