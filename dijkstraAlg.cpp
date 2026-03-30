#include "dijkstraAlg.h"
#include <limits>


dijkstraAlg::dijkstraAlg(Graph &graph): graph(graph) {}

void dijkstraAlg::run(int source, int destination) {
    int currentVertex = source;


    //Initializes needed arrays with essentially null values in their contexts.
    for (int i= 0; i < Graph::maxNodes; i++) {
        visited[i] = false;
        previousNode[i] = -1;
        distanceFromSource[i] = std::numeric_limits<int>::max();
    }
    ///////////////////////////////////////////////////////////////////////////

    //Creates the priority queue and pushes the source node to the top of the heap
    priorityQueue priorityQueue;
    priorityQueue.push({0, source});

    //The distance from source -> source is 0
    distanceFromSource[source] = 0;

    //While the pq is not empty, pop the root and save its vertex as currentVertex
    while (!priorityQueue.isEmpty()) {
       currentVertex = priorityQueue.pop()->second;

        if (currentVertex == destination) {     //Done!
            return;
        }

        visited[currentVertex] = true; //Marks currentVertex as visited so there's no repeats



        //While the vertex has more neighbors, save neighborID. Then save the current distance from source + distance to
        //its neighbor (cost) as newDistance. If its shorter than the currently best known distance to that vertex,
        //overwrite the old one and save it to previousNode[] to remember the path. Then, push the neighbor's
        //distance and  vertex in a pair to the heap for further investigation.
        Graph::Edge* current = graph.adjList[currentVertex].head; // --> Allows currentVertex to use data such as
        while (current != nullptr) {                              //cost, neighborID, etc, from the adjList.
            int neighborID = current->getNeighborID();
            int newDistance = distanceFromSource[currentVertex] + current->getCost();
            if (newDistance < distanceFromSource[neighborID]) {
                distanceFromSource[neighborID] = newDistance;
                previousNode[neighborID] = currentVertex;
                priorityQueue.push({newDistance, neighborID});
            }
            current = current->getNext();
        }
    }



}

