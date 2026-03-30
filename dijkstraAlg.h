#pragma once
#include "Graph.h"
#include "priorityQueue.h"


class dijkstraAlg {
  public:
    dijkstraAlg(Graph &graph);
    void getShortestPath(int pathArr[], int &pathLength, int destination);
    void run(int source, int destination);

  private:
    Graph &graph;
    int distanceFromSource[Graph::maxNodes];
    int previousNode[Graph::maxNodes];
    bool visited[Graph::maxNodes];


};



