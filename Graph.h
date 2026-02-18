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
    static constexpr int MAX_NODES = 30;  //IDE suggested constexpr; ensures array size is set at compile time
    Node adjList[MAX_NODES]{};              //Creates adjacency list array
    public:

    Graph();
    ~Graph();

    void addEdge(int nodeID, int neighborID, int cost);

};

