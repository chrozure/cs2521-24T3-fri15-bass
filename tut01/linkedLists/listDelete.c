#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *newNode(int val);
struct node *listDelete(struct node *list, int value);

int main(void) {

    struct node *head = newNode(3);
    struct node *n2 = newNode(1);
    struct node *n3 = newNode(4);
    struct node *n4 = newNode(1);
    struct node *n5 = newNode(5);

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    listDelete(head, 1);

    free(head);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
}

struct node *newNode(int val) {
    struct node *n = malloc(sizeof(*n));

    n->value = val;
    n->next = NULL;

    return n;
}

struct node *listDelete(struct node *list, int value) {

    return NULL;
}
