#include "minHeap.h"

minHeap::minHeap() = default;
minHeap::~minHeap() = default;

void minHeap::bubbleDown(int index) {
    //left & right are use index math to identify the children entries of index.
    //hasLeft and hasRight are used to avoid out-of-bounds memory access and to end the loop
    int left = (2 * index) + 1;
    int right = (2 * index) + 2;
    bool hasRight = right < heapCount;
    bool hasLeft = left < heapCount;

    //while statement checks to make sure there is a least one child node of lesser distance than index
    //There is surely a better way to do this.
    while (hasLeft && (heapArr[index].first > heapArr[left].first ||
        (hasRight && heapArr[index].first > heapArr[right].first))) {

        // Checks which child has a lower distance and swaps it for index.
        if (heapArr[left].first > heapArr[right].first) {
            if (heapArr[index].first > heapArr[right].first) {
                swap(heapArr[index], heapArr[right]);
                index = right;
            }
        } else {
            if (heapArr[index].first > heapArr[left].first) {
                swap(heapArr[index], heapArr[left]);
                index = left;
            }
        }

        //Updating this data ensures left and right stay updated, and hasRight/Left are used to end the loop
        left = (2 * index) + 1;
        right = (2 * index) + 2;
        hasRight = right < heapCount;
        hasLeft = left < heapCount;
        }
}

//While not at root, and an entry's distance is less than its parent's, swap their positions. Then check again...
//This will bubble a new entry as high as it should go on the heap. (The smallest distance is the root)
void minHeap::bubbleUp(int index) {
    int parentIndex = (index - 1) / 2;
    while (index > 0 && heapArr[index].first < heapArr[parentIndex].first) {
        swap(heapArr[index], heapArr[parentIndex]);
        index = parentIndex;
        parentIndex = (index - 1) / 2;
    }
}

// newEntry is added to the heap array at index heapCount, which is then incremented.
//Then bubbleUp is called on that entry.
void minHeap::push(const pair<int,int> &newEntry) {
    heapArr[heapCount++] = newEntry;
    bubbleUp(heapCount - 1);
}