#pragma once
using namespace std;
#include "Graph.h"
#include <utility>
#include <expected>
#include <string>


//priority queue implemented as a heap. The root is always the entry with the smallest total distance.
//This is good for building dijkstra's algorithm. It needs to know the smallest distance up to the point at which it's
//checking for the next edge to check.

class priorityQueue {
private:
    //In the pair, the first int is the total distance, second is vertex, this enables prioritization by the alg.
    pair<int, int> heapArr[Graph::maxNodes * 4];   //Maximum possible entries on the heap
    int maxHeapSize = Graph::maxNodes * 4;


//When a new entry is added to the heap, it needs to bubble up to its proper place (measured by distance value)
//bubbleDown ensures the heap remains intact when root is popped off.
    void bubbleUp(int index);
    void bubbleDown(int index);

public:
    priorityQueue();
    ~priorityQueue();

    std::expected<void, std::string> push(const pair<int,int> &newEntry);
    std::expected<pair<int,int>, std::string> pop();
    std::expected<pair<int,int>, std::string> peek();
    bool isEmpty() const;
    int heapSize = 0;
};


