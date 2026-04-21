#include "Graph.h"
#include <iomanip>
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


//Edge getters & setters -- Used to build Edges using Graph::addEdge
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
Graph::Edge* Graph::getHead(const int nodeID) const {
    return adjList[nodeID].head;
}

int Graph::getMaxNodes() {
    return maxNodes;
}

//Graph member methods
void Graph::addEdge(int nodeID, int neighborID, int cost) {
    if (nodeID != neighborID && nodeID < maxNodes && nodeID >= 0 && cost >= 0 && neighborID < maxNodes) {
        Edge* newEdge = new Edge(neighborID, cost);
        newEdge->setNext(adjList[nodeID].head);     // Links newEdge into the list by setting next to existing head
        adjList[nodeID].head = newEdge;             //newEdge is the new head of the list
    } else {std::cout << "Error in addEdge";}
}

//Iterates through rows and cols to print a visible conception of the graph
void Graph::printMap(int &treasureInput, int &finalDest) {
    for (int i=0; i < rows; i++) {
        for (int j=0; j < cols; j++) {
            std::cout << std::setw(2) << i * cols + j << " -- "; //The formula I found for this purpose
        }
        std::cout << std::endl;
    }

    std::cout << "Gazing across the battlefield, you activate the top secret "
    "Omni-surface Navigable Treasure Hunting Robot from point 0 on the map..."
    "Where is the treasure hidden: \n";
    std::cin >> treasureInput;
    while (treasureInput <= 0) { //Avoids invalid inputs
        std::cout << "Invalid Input -- X < 1";
        std::cout << "\n Try again: ";
        std::cin >> treasureInput;
    }

    std::cout << "Giving your trusty robot one last pat on the head and a 'Godspeed little guy'... "
    "Where do you set the rendezvous point? \n";
    std::cin >> finalDest;
    while (finalDest < 0) { //Avoids invalid inputs
        std::cout << "Invalid Input -- X < 0";
        std::cout << "\n Try again: ";
        std::cin >> finalDest;
    }
    }


