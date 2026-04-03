#include <iostream>
#include "dijkstraAlg.h"
#include "Graph.h"
#include "mapBuilder.h"
using namespace std;

int main() {
    Graph g;
    mapBuilder::buildMap(g);
    Graph::printMap();
    dijkstraAlg dijkstra(g);
    dijkstra.run(0, 10);



    return 0;
}

