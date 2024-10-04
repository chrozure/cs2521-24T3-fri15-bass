// Implementatioin of the binary search tree data structure

#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <sysexits.h>

#include "bst.h"

static struct node *newNode(int val);

// Creates a new empty bst
struct node *bstNew(void) {
	return NULL;
}

// Frees all the memory associated with the given bst
void bstFree(struct node *t) {
	if (t == NULL) {
		return;
	}

	bstFree(t->left);
	bstFree(t->right);
	free(t);
}

// Inserts a new value into the given BST and returns the root of the
// updated bst. Does not insert duplicate values.
struct node *bstInsert(struct node *t, int val) {
	if (t == NULL) {
		return newNode(val);
	} else if (val < t->value) {
		t->left = bstInsert(t->left, val);
	} else if (val > t->value) {
		t->right = bstInsert(t->right, val);
	} else { // (val == t->value)
		/* don't insert duplicates */;
	}
	return t;
}

// Creates a new node containing the given value
static struct node *newNode(int val) {
	struct node *new = malloc(sizeof(*new));
	if (new == NULL) {
		err(EX_OSERR, "couldn't allocate BST node");
	}

	new->value = val;
	new->left = NULL;
	new->right = NULL;
	return new;
}
