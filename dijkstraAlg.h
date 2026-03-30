#pragma once
#include "Graph.h"



class dijkstraAlg {
  public:
  explicit dijkstraAlg(Graph &graph);
    void getShortestPath(int pathArr[], int &pathLength, int destination);
  void run(int source, int destination);
  //void printDistances(int source, int destination, int distanceFromSource[], int pathArr[]);
  // TODO ^

  static void reverseAndPrint(int pathArr[], int &pathLength);
    void executeAlgorithm(int source, int destination);

  private:
    Graph &graph;
    int distanceFromSource[Graph::maxNodes]{};
    int previousNode[Graph::maxNodes]{};
    bool visited[Graph::maxNodes]{};


};



