//
// Created by Owner on 2/17/2026.
//
#pragma once



class Graph {

class Edge {
    int neighborID;
    int cost;
    Edge* next;
public:
    Edge(int id, int c);
    int getNeighborID() const;
    int getCost() const;
    Edge* getNext() const;
    void setNext(Edge* n);

};

    struct Node{
      Edge* head;
    };

    static constexpr int rows = 6;        //IDE suggested constexpr; ensures array size is set at compile time
    static constexpr int cols = 6;
    static constexpr int maxNodes = (rows * cols);  // rows and columns: 6 x 6 = 36 nodes
    Node adjList[maxNodes]{};              //Creates adjacency list array
    public:

    Graph();
    ~Graph();

    Edge* getHead(int nodeID) const;
    static int getMaxNodes();

    static void printMap();
    void addEdge(int nodeID, int neighborID, int cost);
    // TODO: Add a function to loadMap from a .txt file

    //Testing Functions
    void printEdges(int nodeID) const;
    int traverseEdges(int nodeID) const;
};

