#include <iostream>
#include "dijkstraAlg.h"
#include "Graph.h"
#include "mapBuilder.h"
using namespace std;

int main() {

    mapBuilder::buildMap();
    Graph::printMap();
    dijkstraAlg dijkstra(g); //hmm
    dijkstra.run(0, 15);



    return 0;
}

