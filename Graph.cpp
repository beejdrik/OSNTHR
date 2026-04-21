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
    std::cout << "\033[37m" << std::setw(3) <<   0 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<   1 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<   2 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<   3 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<   4 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<   5 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<   6 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<   7 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<   8 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<   9 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37m" << std::setw(3) <<  10 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  11 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  12 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  13 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  14 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  15 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  16 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  17 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  18 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  19 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37m" << std::setw(3) <<  20 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  21 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  22 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  23 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  24 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  25 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  26 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  27 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  28 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  29 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37m" << std::setw(3) <<  30 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  31 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  32 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  33 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  34 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  35 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  36 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  37 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  38 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  39 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37m" << std::setw(3) <<  40 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  41 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  42 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  43 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  44 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  45 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  46 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  47 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  48 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  49 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37m" << std::setw(3) <<  50 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  51 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  52 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  53 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  54 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  55 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  56 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  57 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  58 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  59 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37m" << std::setw(3) <<  60 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  61 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  62 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  63 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  64 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  65 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  66 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  67 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  68 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  69 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37m" << std::setw(3) <<  70 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  71 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  72 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  73 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  74 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  75 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  76 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  77 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  78 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  79 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37m" << std::setw(3) <<  80 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  81 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  82 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  83 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  84 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  85 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  86 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  87 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  88 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  89 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37m" << std::setw(3) <<  90 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  91 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  92 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  93 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  94 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) <<  95 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  96 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  97 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  98 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) <<  99 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37m" << std::setw(3) << 100 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 101 << "\033[0m" << " -- ";
std::cout << "\033[31m" << std::setw(3) << 102 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 103 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 104 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 105 << "\033[0m" << " -- ";
std::cout << "\033[31m" << std::setw(3) << 106 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 107 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 108 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 109 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37m" << std::setw(3) << 110 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 111 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 112 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 113 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 114 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 115 << "\033[0m" << " -- ";
std::cout << "\033[31m" << std::setw(3) << 116 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 117 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 118 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 119 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37m" << std::setw(3) << 120 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 121 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 122 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 123 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 124 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 125 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 126 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 127 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 128 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 129 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37m" << std::setw(3) << 130 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 131 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 132 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 133 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 134 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 135 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 136 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 137 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 138 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 139 << "\033[0m" << " -- ";
std::cout << "\n";
std::cout << "\033[37m" << std::setw(3) << 140 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 141 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 142 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 143 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 144 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 145 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 146 << "\033[0m" << " -- ";
std::cout << "\033[34m" << std::setw(3) << 147 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 148 << "\033[0m" << " -- ";
std::cout << "\033[37m" << std::setw(3) << 149 << "\033[0m" << " -- ";
std::cout << "\n";

    std::cout << "Gazing across the battlefield, you activate the top secret "
    "Omni-surface Navigable Treasure Hunting Robot from point 0 on the map..."
    "Where is the treasure hidden: \n";
    std::cin >> treasureInput;

    while (treasureInput <= 0) { //Avoids invalid inputs
        std::cout << "Invalid Input -- X < 1";
        std::cout << "\n Try again: ";
        std::cin >> treasureInput;
    }
    std::cout << std::endl;

    std::cout << "Giving your trusty robot one last pat on the head and a 'Godspeed little guy'... "
    "Where do you set the rendezvous point? \n";
    std::cin >> finalDest;
    while (finalDest < 0) { //Avoids invalid inputs
        std::cout << "Invalid Input -- X < 0";
        std::cout << "\n Try again: ";
        std::cin >> finalDest;
    }
    std::cout << std::endl;
    }


