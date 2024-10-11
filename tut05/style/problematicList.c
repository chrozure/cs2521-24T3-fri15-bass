#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

static void freeList(struct Node *head);
static void printList(struct Node *node);
static struct Node *add(struct Node *head, int data);

int main() {
	struct Node *head = NULL;
	head = add(head, 1);
	head = add(head, 2);
	head = add(head, 3);
	head = add(head, 4);
	printList(head);
	freeList(head);
	return 0;
}

// Helper function to free a list by iterating through it
static void freeList(struct Node *head) {
	if (head == NULL) {
		return;
	}
	struct Node *Temp = head;
	while (head != NULL) {
	    Temp = head;
	    head = head->next;
	    free(Temp);
	}
}

static void printList(struct Node *node) {
    while (node->next != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("%d\n", node->data);
    return;
}

static struct Node *add(struct Node *head, int data) {
    // malloc the node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    // set the node's data field
    newNode->data = data;
    // set the node's next field to NULL
    newNode->next = NULL;
	if (head == NULL) {
		head = newNode;
	} else {
        struct Node *lastNode = head;
        while (lastNode->next != NULL) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
	}
	return a;
}


