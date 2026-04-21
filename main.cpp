#include <iostream>
#include "dijkstraAlg.h"
#include "Graph.h"
#include "mapBuilder.h"
using namespace std;

int main() {

    Graph g;

    mapBuilder::buildMap(g);


    int treasureInput = 0;
    int finalDest = 0;
    Graph::printMap();

    std::cout << "Gazing across the battlefield, you activate the top secret "
    "Omni-surface Navigable Treasure Hunting Robot from point 0 on the map..."
    "Where is the treasure hidden: \n";
    std::cin >> treasureInput;
    while (treasureInput <= 0) {
        std::cout << "Invalid Input -- X < 1";
        std::cout << "\n Try again: ";
        std::cin >> treasureInput;
    }

    std::cout << "Giving your trusty robot one last pat on the head and a 'Godspeed little guy'... "
    "Where do you set the rendezvous point? \n";
    std::cin >> finalDest;
    while (finalDest < 0) {
        std::cout << "Invalid Input -- X < 0";
        std::cout << "\n Try again: ";
        std::cin >> finalDest;
    }


    dijkstraAlg dijkstra(g);
    dijkstra.run(0, treasureInput);
    dijkstra.run(treasureInput, finalDest);



    return 0;
}

