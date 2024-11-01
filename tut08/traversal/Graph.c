#include <assert.h>
#include <stdlib.h>

#include "Graph.h"

/** Creates a new graph with nV vertices */
Graph GraphNew(int nV) {
    Graph g = malloc(sizeof(g));
    g->nV = nV;
    g->nE = 0;
    g->edges = calloc(nV, sizeof(bool *));
    for (int i = 0; i < nV; i++) {
        g->edges[i] = calloc(nV, sizeof(bool));
    }

    return g;
}

/** Returns the number of vertices in a graph */
int GraphNumVertices(Graph g) {
    return g->nV;
}

/** Returns the number of edges in a graph */
int GraphNumEdges(Graph g) {
    return g->nE;
}

/** Returns true if there is an edge from vertex v to w
and false otherwise */
bool GraphIsAdjacent(Graph g, Vertex v, Vertex w) {
    return g->edges[v][w];
}

/** Inserts an edge into a graph */
void GraphInsertEdge(Graph g, Vertex v, Vertex w) {
    assert(v >= 0 && w >= 0 && v < g->nV && w < g->nV);
    if (!g->edges[v][w]) {
        g->edges[v][w] = true;
        g->nE++;
    }
}

/** Removes an edge from a graph */
void GraphRemoveEdge(Graph g, Vertex v, Vertex w) {
    assert(v >= 0 && w >= 0 && v < g->nV && w < g->nV);
    if (g->edges[v][w]) {
        g->edges[v][w] = false;
        g->nE--;
    }
}

/** Frees all memory allocated to a graph */
void GraphFree(Graph g) {
    for (int i = 0; i < g->nV; i++) {
        free(g->edges[i]);
    }
    free(g->edges);
    free(g);
}