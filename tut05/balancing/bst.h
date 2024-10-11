#ifndef BST_H
#define BST_H

#include <stdbool.h>
#include <stdio.h>

struct node {
    // If we want to create an AVL tree, we need this field too
    // int height;
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

// Checks whether a value is in the given BST.
bool bstFind(struct node *t, int val);

// Rotates a node to the right
struct node *rotateRight(struct node *root);

// Rotates a node to the left
struct node *rotateLeft(struct node *root);

#endif
