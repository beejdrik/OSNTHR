#pragma once
#include "Graph.h"


class dijkstraAlg {
  public:
    dijkstraAlg(Graph &graph);
    ~dijkstraAlg();
    void getShortestPath(int pathArr[], int &pathLength);
    void run(int source, int destination);

  private:
    Graph &graph;
    int distanceFromSource[Graph::maxNodes];
    int previousNode[Graph::maxNodes];
    bool visited[Graph::maxNodes];


};



