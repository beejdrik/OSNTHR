#include <iostream>
#include "Graph.h"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Graph g;
    g.addEdge(0, 1, 1);
    if (g.getEdgeHead(0) != nullptr) {
        cout << "Pass" << endl;
    }


    return 0;
}
