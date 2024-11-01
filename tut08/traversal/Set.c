// Linked list representation of set
#include <stdio.h>
#include <stdlib.h>

#include "Set.h"
#include "Graph.h"

struct listNode {
    Vertex v;
    struct listNode *next;
};

struct set {
    struct listNode *head;
};

static struct listNode *newNode(Vertex v);

// Creates a new empty set
Set SetNew() {
    Set s = malloc(sizeof(*s));
    s->head = NULL;
    return s;
}

// Adds a vertex to the given set
// Inserts the vertex in ascending order
void SetAdd(Set s, Vertex v) {

    if (s == NULL) return;

    struct listNode *curr = s->head;

    // Insert into the start of the list
    if (curr == NULL || v < curr->v) {
        struct listNode *new = newNode(v);
        new->next = s->head;
        s->head = new;
        return;
    }

    // List has one node unequal to v
    if (curr->next == NULL && curr->v != v) {
        curr->next = newNode(v);
        return;
    }

    // find position to insert
    struct listNode *prev = NULL;
    while (curr->next != NULL && curr->v < v) {
        prev = curr;
        curr = curr->next;
    }

    // v still bigger, so insert at end of list
    if (v > curr->v) {
        curr->next = newNode(v);
    }
    // insert in middle of list
    else if (v < curr->v) {
        struct listNode *new = newNode(v);
        prev->next = new;
        new->next = curr;
    }
}

static struct listNode *newNode(Vertex v) {
    struct listNode *n = malloc(sizeof(*n));
    n->v = v;
    n->next = NULL;
    return n;
}

// Checks if an item is contained in the set
bool SetContains(Set s, Vertex v) {
    struct listNode *curr = s->head;
    while (curr != NULL) {
        if (curr->v == v) return true;
        curr = curr->next;
    }

    return false;
}

// Removes a vertex from the given set
void SetRemove(Set s, Vertex v) {

    struct listNode *curr = s->head;
    struct listNode *prev = NULL;
    if (curr->v == v) {
        s->head = curr->next;
        free(curr);
        return;
    }

    while (curr != NULL) {
        if (curr->v == v) {
            prev->next = curr->next;
            free(curr);
            return;
        }

        prev = curr;
        curr = curr->next;
    }
}

// Prints all the elements in a set
void SetPrint(Set s) {
    if (s == NULL || s->head == NULL) {
        printf("{ }\n");
        return;
    }

    printf("{ ");
    struct listNode *curr = s->head;
    while (curr->next != NULL) {
        printf("%d, ", curr->v);
        curr = curr->next;
    }
    printf("%d }\n", curr->v);
}

// Frees memory allocated to a set
void SetFree(Set s) {
    if (s == NULL) return;

    if (s->head == NULL) {
        free(s);
        return;
    }

    struct listNode *curr = s->head;
    struct listNode *next = s->head->next;
    while (next != NULL) {
        free(curr);
        curr = next;
        next = next->next;
    }
    free(curr);
    free(s);
}
