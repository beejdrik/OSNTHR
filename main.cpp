#include <iostream>
#include "dijkstraAlg.h"
#include "Graph.h"
#include "priorityQueue.h"
using namespace std;

int main() {

    Graph g;

    //EXAMPLE ------------------------------------------------------------------------------

    // Row 0
    g.addEdge(0, 1, 1);   g.addEdge(1, 0, 1);
    g.addEdge(1, 2, 1);   g.addEdge(2, 1, 1);
    g.addEdge(2, 3, 50);   g.addEdge(3, 2, 1);   //EDIT TO 50 *******

    // Row 1
    g.addEdge(4, 5, 1);   g.addEdge(5, 4, 1);
    g.addEdge(5, 6, 1);   g.addEdge(6, 5, 1);
    g.addEdge(6, 7, 1);   g.addEdge(7, 6, 1);

    // Row 2
    g.addEdge(8, 9, 1);   g.addEdge(9, 8, 1);
    g.addEdge(9, 10, 1);  g.addEdge(10, 9, 1);
    g.addEdge(10, 11, 1); g.addEdge(11, 10, 1);

    // Row 3
    g.addEdge(12, 13, 1); g.addEdge(13, 12, 1);
    g.addEdge(13, 14, 1); g.addEdge(14, 13, 1);
    g.addEdge(14, 15, 1); g.addEdge(15, 14, 1);

    // Columns
    g.addEdge(0, 4, 1);   g.addEdge(4, 0, 1);
    g.addEdge(1, 5, 1);   g.addEdge(5, 1, 1);
    g.addEdge(2, 6, 1);   g.addEdge(6, 2, 1);
    g.addEdge(3, 7, 1);   g.addEdge(7, 3, 1);
    g.addEdge(4, 8, 1);   g.addEdge(8, 4, 1);
    g.addEdge(5, 9, 1);   g.addEdge(9, 5, 1);
    g.addEdge(6, 10, 1);  g.addEdge(10, 6, 1);
    g.addEdge(7, 11, 1);  g.addEdge(11, 7, 1);
    g.addEdge(8, 12, 1);  g.addEdge(12, 8, 1);
    g.addEdge(9, 13, 1);  g.addEdge(13, 9, 1);
    g.addEdge(10, 14, 1); g.addEdge(14, 10, 1);
    g.addEdge(11, 15, 1); g.addEdge(15, 11, 1);


    Graph::printMap();
    dijkstraAlg dijkstra(g);
    dijkstra.run(0, 56);



    return 0;
}

