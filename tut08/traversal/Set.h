#ifndef SET_H
#define SET_H

#include "Graph.h"

typedef struct set *Set;

// Creates a new empty set
Set SetNew();

// Adds a vertex to the given set
void SetAdd(Set s, Vertex v);

// Checks if an item is contained in the set
bool SetContains(Set s, Vertex v);

// Removes a vertex from the given set
void SetRemove(Set s, Vertex v);

// Prints all the elements in a set
void SetPrint(Set s);

// Frees memory allocated to a set
void SetFree(Set s);


#endif
