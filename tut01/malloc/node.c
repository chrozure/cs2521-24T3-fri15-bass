#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

int main(void) {
	// struct node n;
	// n.value = 42;
	// n.next = NULL;

	// struct node *n;
	// n = malloc(sizeof(*n));
	// struct node *n = malloc(sizeof(*n));

	struct node *n = malloc(sizeof(struct node));


	n->value = 42;
	n->next = NULL;

	free(n);
}
