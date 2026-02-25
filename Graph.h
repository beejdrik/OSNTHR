//
// Created by Owner on 2/17/2026.
//
#pragma once



class Graph {

struct Edge {
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
    static constexpr int maxNodes = 36;  // rows and columns: 6 x 6 = 36 nodes
    Node adjList[maxNodes]{};              //Creates adjacency list array
    public:

    Graph();
    ~Graph();

    Edge* getEdgeHead(int nodeID) const;
    static int getMaxNodes();

    static void printMap();
    void addEdge(int nodeID, int neighborID, int cost);
    // TODO: Add a function to loadMap from a .txt file

    //Test Functions
    void printEdges(int nodeID);
    int traverseEdges(int nodeID);
};

