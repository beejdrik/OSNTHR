#pragma once
using namespace std;
#include "Graph.h"
#include <utility>


class minHeap {
private:
    pair<int, int> heapArr[Graph::maxNodes * 4];   //Maximum possible entries on the heap
    int heapCount = 0;

    void bubbleUp(int index);
    void bubbleDown(int index);

public:
    minHeap();
    ~minHeap();

    void push(const pair<int,int> &newEntry);
    pair<int,int> pop();
    pair<int,int> peek();
    bool empty();
};


