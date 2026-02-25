#include <iostream>
#include "Graph.h"
using namespace std;

int main() {
    Graph g;

    Graph::printMap();

    g.addEdge(7, 1, 2);
    g.addEdge(7, 6, 3);
    g.addEdge(7, 8, 1);
    g.addEdge(7, 3, 4);
    g.printEdges(7);


    return 0;
}
