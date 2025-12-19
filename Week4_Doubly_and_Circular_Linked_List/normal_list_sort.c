#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void bubbleSort(struct node* head) {
    struct node* i;
    struct node* j;
    int temp;

    for (i = head; i != NULL; i = i->next) {
        for (j = head; j->next != NULL; j = j->next) {
            if (j->data > j->next->data) {
                temp = j->data;
                j->data = j->next->data;
                j->next->data = temp;
            }
        }
    }
}

void display(struct node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

