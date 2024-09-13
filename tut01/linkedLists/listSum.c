#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

int listSumWhile(struct node *n);
int listSumFor(struct node *n);
struct node *newNode(int val);

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

    int sumWhile = listSumWhile(head);
    printf("List sum while: %d\n", sumWhile);

    int sumFor = listSumFor(head);
    printf("List sum for: %d\n", sumFor);

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

int listSumWhile(struct node *head) {
    return 0;
}

int listSumFor(struct node *head) {
    return 0;
}
