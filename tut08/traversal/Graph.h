#include <stdbool.h>

#ifndef GRAPH_H
#define GRAPH_H

// Adjacency matrix representation
struct graph {
    int nV;
    int nE;
    bool **edges;
};

typedef struct graph *Graph;
typedef int Vertex;

/** Creates a new graph with nV vertices */
Graph GraphNew(int nV);

/** Returns the number of vertices in a graph */
int GraphNumVertices(Graph g);

/** Returns the number of edges in a graph */
int GraphNumEdges(Graph g);

/** Returns true if there is an edge between the given vertices
and false otherwise */
bool GraphIsAdjacent(Graph g, Vertex v, Vertex w);

/** Inserts an edge into a graph */
void GraphInsertEdge(Graph g, Vertex v, Vertex w);

/** Removes an edge from a graph */
void GraphRemoveEdge(Graph g, Vertex v, Vertex w);

/** Frees all memory allocated to a graph */
void GraphFree(Graph g);

#endif
