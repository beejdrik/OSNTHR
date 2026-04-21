
#pragma once
//Graph is an implementation of an adjacency list. It consists of an array (adjList[]), where each element is a
//node (made using a struct). Each node points to a linked list consisting of Edge objects.
//An edge is the connection between two points in a graph called vertices.
class Graph {

// Each edge has the ID of the neighbor that it connects to the source vertex, the cost of traversal,
// and a pointer to the next edge connecting to the source vertex
//----------------------------------------------------------------------------------------------------------------------
public:
class Edge {

    int neighborID;
    int cost;
    Edge* next;
public:
    //Edge constructor, getters/setters
    Edge(int nID, int c);
    int getNeighborID() const;
    int getCost() const;
    Edge* getNext() const;
    void setNext(Edge* n);

};
//----------------------------------------------------------------------------------------------------------------------
    //The structure being stored in the array, used to create linked lists using each address
    struct Node{
        Edge* head;
    };

    //This sets the size of the current graph, it'll change as time progresses.
    static constexpr int rows = 15;
    static constexpr int cols = 10;
    static constexpr int maxNodes = (rows * cols);  // rows and columns: 4 x 4 = 16 nodes
    Node adjList[maxNodes]{};              //Creates adjacency list array

    Graph();
    ~Graph();

    Edge* getHead(int nodeID) const;
    static int getMaxNodes();
    void addEdge(int nodeID, int neighborID, int cost);

};

