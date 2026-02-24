//
// Created by Owner on 2/17/2026.
//

#include "Graph.h"

#include <iostream>
#include <ostream>

//Graph Constructor/Destructor
Graph::Graph() {
    for (int i=0; i < maxNodes; i++) {
        adjList[i].head = nullptr;      //Sets all heads of the nodes in the adjList
    }                                   //to nullptr initially
}

Graph::~Graph() {
    for (int i=0; i < maxNodes; i++) {
        Edge* current = adjList[i].head;
        while (current != nullptr) {
            Edge* next = current->getNext();    //Loops through the whole graph and deletes every edge
            delete current;
            current = next;
        }
    }
}

// Edge Class Constructor
Graph::Edge::Edge(int nID, int c) {  //An edge requires a neighborID, cost to be created (next is nullptr)
    neighborID = nID;
    cost = c;
    next = nullptr;
}

//getters & setters
int Graph::Edge::getNeighborID() const {
    return neighborID;
}

int Graph::Edge::getCost() const {
    return cost;
}

Graph::Edge* Graph::Edge::getNext() const {
    return next;
}

void Graph::Edge::setNext(Edge *n) {
    next = n;
}



//Graph getters
Graph::Edge* Graph::getEdgeHead(const int nodeID) const {
    return adjList[nodeID].head;
}

int Graph::getMaxNodes() {
    return maxNodes;
}

//Graph member methods
void Graph::addEdge(int nodeID, int neighborID, int cost) {
    Edge* newEdge = new Edge(neighborID, cost);
    newEdge->setNext(adjList[nodeID].head);     // Links newEdge into the list by setting next to existing head
    adjList[nodeID].head = newEdge;             //newEdge is the new head of the list
}

void Graph::printMap() {
    for (int i=0; i < rows; i++) {
        for (int j=0; j < cols; j++) {
            std::cout << i * cols + j << " -- ";
        }
        std::cout << std::endl;
    }
    }


