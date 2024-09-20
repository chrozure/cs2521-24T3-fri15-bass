#ifndef LIST_H
#define LIST_H

struct node {
    int value;
    struct node *next;
};

void listFree(struct node *list);

void listPrint(struct node *list);

struct node *arrayToList(int A[], int len);

#endif
