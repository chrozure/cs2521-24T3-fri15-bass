#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"

static struct node *newNode(int val);

void listFree(struct node *list) {
    struct node *curr = list;
    while (curr != NULL) {
        struct node *temp = curr;
        curr = curr->next;
        free(temp);
    }
}

void listPrint(struct node *list) {
    printf("[");
    for (struct node *curr = list; curr != NULL; curr = curr->next) {
        printf("%d", curr->value);
        if (curr->next != NULL) {
            printf(", ");
        }
    }
    printf("]");
}

struct node *arrayToList(int A[], int len) {
    struct node *head = NULL;
    struct node *curr = NULL;
    for (int i = 0; i < len; i++) {
        struct node *node = newNode(A[i]);
        if (head == NULL) {
            head = node;
            curr = node;
        } else {
            curr->next = node;
            curr = node;
        }
    }
    return head;
}

static struct node *newNode(int val) {
    struct node *n = malloc(sizeof(*n));
    if (n == NULL) {
        fprintf(stderr, "error: out of memory\n");
        exit(EXIT_FAILURE);
    }
    n->value = val;
    n->next = NULL;
    return n;
}
