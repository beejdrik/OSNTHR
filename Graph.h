//
// Created by Owner on 2/17/2026.
//
#pragma once



class Graph {
    struct Edge{
      int neighborID;
      int cost;
      Edge* next;
    };

    struct Node{
      Edge* head;
    };

    static constexpr int ROWS = 6;        //IDE suggested constexpr; ensures array size is set at compile time
    static constexpr int COLS = 6;
    static constexpr int MAX_NODES = 36;  // rows and columns: 6 x 6 = 36 nodes
    Node adjList[MAX_NODES]{};              //Creates adjacency list array
    public:

    Graph();
    ~Graph();

    Edge* getEdgeHead(int nodeID);
    int getMAX_NODES();
    void printMap();

    void addEdge(int nodeID, int neighborID, int cost);

};

