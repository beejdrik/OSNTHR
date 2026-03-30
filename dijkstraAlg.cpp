#include "dijkstraAlg.h"
#include "priorityQueue.h"
#include <algorithm>
#include <iostream>
#include <limits>


dijkstraAlg::dijkstraAlg(Graph &graph): graph(graph) {}

void dijkstraAlg::executeAlgorithm(int source, int destination) {
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
       int currentVertex = priorityQueue.pop()->second;

        if (currentVertex == destination) {     //Done!
            return;
        }

        visited[currentVertex] = true; //Marks currentVertex as visited so there's no repeats



        //While the vertex has more neighbors, save neighborID. Then save the current distance from source + distance to
        //its neighbor (cost) as newDistance. If it's shorter than the currently best known distance to that vertex,
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

//previousNode[] contains the most efficient route to all nodes in the graph. By checking previousNode[destination],
//the function finds the node used to reach the final destination node with the least total distance. The function
//saves a copy and adds it to pathArr, then calls itself recursively to find the next node up the chain, and so on.
void dijkstraAlg::getShortestPath(int pathArr[], int &pathLength, int destination) {
    if(destination > 0 && destination < Graph::maxNodes && previousNode[destination] != -1) {
        int copy = previousNode[destination];
        pathArr[pathLength++] = copy;
        getShortestPath(pathArr, pathLength, previousNode[destination]);
    }
}

//Because the route is saved destination -> source, this function needs to reverse it before printing it to the user.
void dijkstraAlg::reverseAndPrint(int pathArr[], int &pathLength) {
    std::reverse(pathArr, pathArr + pathLength);
    for (int i = 0; i < pathLength; i++) {
        cout << pathArr[i] << " ";
    }
}



void dijkstraAlg::run(int source, int destination) {
    int pathArr[Graph::maxNodes];
    int pathLength = 0;

    executeAlgorithm(source, destination);
    getShortestPath(pathArr, pathLength, destination);
    reverseAndPrint(pathArr, pathLength);
}

