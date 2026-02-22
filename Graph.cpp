//
// Created by Owner on 2/17/2026.
//

#include "Graph.h"

#include <iostream>
#include <ostream>

Graph::Graph() {
    for (int i=0; i < MAX_NODES; i++) {
        adjList[i].head = nullptr;      //Sets all heads of the nodes in the adjList
    }                                   //to nullptr initially
}

Graph::~Graph() {
    for (int i=0; i < MAX_NODES; i++) {
        Edge* current = adjList[i].head;
        while (current != nullptr) {
            Edge* next = current->next;
            delete current;
            current = next;
        }
    }
}

Graph::Edge* Graph::getEdgeHead(int nodeID) {
    return adjList[nodeID].head;
}

void Graph::addEdge(int nodeID, int neighborID, int cost) {
    Edge* newEdge = new Edge();
    newEdge->neighborID = neighborID;       //newEdge is passed neighborID, cost
    newEdge->cost = cost;
    newEdge->next = adjList[nodeID].head;   //next is set to head (nullptr at first)
    adjList[nodeID].head = newEdge;         //head is set to newEdge
}

void Graph::printMap() {
    for (int i=0; i < ROWS; i++) {
        for (int j=0; j < COLS; j++) {
            std::cout << i * COLS + j << " -- ";
        }
        std::cout << std::endl;
    }
    }


