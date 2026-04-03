#include "mapBuilder.h"
#include "Graph.h"

Graph mapBuilder::buildMap() {

    Graph g;
    //EXAMPLE ------------------------------------------------------------------------------

    // Row 0
    g.addEdge(0, 1, 1);   g.addEdge(1, 0, 1);
    g.addEdge(1, 2, 1);   g.addEdge(2, 1, 1);
    g.addEdge(2, 3, 1);   g.addEdge(3, 2, 1);

    return g;
}