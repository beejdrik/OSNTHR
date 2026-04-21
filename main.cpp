#include <iostream>
#include "dijkstraAlg.h"
#include "Graph.h"
#include "mapBuilder.h"
using namespace std;

int main() {

    Graph g;
    mapBuilder::buildMap(g); //Builds the graph
    std::cout << "\033[31mThis text is Red!\033[0m" << std::endl;
    //User inputs
    int treasureInput = 0, finalDest = 0;
    Graph::printMap(treasureInput, finalDest);

    dijkstraAlg dijkstra(g);
    dijkstra.run(0, treasureInput);
    dijkstra.run(treasureInput, finalDest);

    return 0;
}