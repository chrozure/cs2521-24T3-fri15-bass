#ifndef BST_H
#define BST_H

#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

////////////////////////////////////////////////////////////////////////

// Creates a new empty BST
struct node *bstNew(void);

// Frees all the memory associated with the given BST
void bstFree(struct node *t);

// Inserts a new value into the given BST and returns the root of the
// updated BST. Does not insert duplicate values.
struct node *bstInsert(struct node *t, int val);

#endif
