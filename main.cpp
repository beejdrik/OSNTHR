#include <iostream>
#include "dijkstraAlg.h"
#include "Graph.h"
#include "mapBuilder.h"

//Only if using windows
#ifdef _WIN32
#include "ansiWindowsConfiguration.h"
#include <windows.h>
#endif

int main() {
    //Windows Console Configuration
#ifdef _WIN32
    HANDLE stdoutHandle; DWORD dwMode;
    ansiWindowsConfiguration::setUpConsole(stdoutHandle, dwMode);
#endif

    //Builds and prints the graph
    Graph g;
    mapBuilder::buildMap(g);

    //User inputs
    int treasureInput = 0, finalDest = 0;
    mapBuilder::printMap(treasureInput, finalDest);

    //Runs the algorithm to find the treasure, then the rendezvous point
    dijkstraAlg dijkstra(g);
    dijkstra.run(0, treasureInput);
    dijkstra.run(treasureInput, finalDest);

    return 0;
}