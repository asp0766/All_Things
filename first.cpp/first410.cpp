// Find Median in a Stream : - 


#include <iostream>
#include <queue>
using namespace std;

class MedianFinder {
    priority_queue<int> maxHeap;                          // Left half (max heap)
    priority_queue<int, vector<int>, greater<int>> minHeap;  // Right half (min heap)

public:
    // Add number to stream
    void addNum(int num) {
        if (maxHeap.empty() || num <= maxHeap.top()) {
            maxHeap.push(num);
        } else {
            minHeap.push(num);
        }

        // Balance the heaps
        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } 
        else if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    // Get the median
    double findMedian() {
        if (maxHeap.size() == minHeap.size()) {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        } 
        return maxHeap.top();  // Max heap has one more element
    }
};

int main() {
    MedianFinder mf;

    mf.addNum(1);
    cout << "Median: " << mf.findMedian() << endl;

    mf.addNum(2);
    cout << "Median: " << mf.findMedian() << endl;

    mf.addNum(3);
    cout << "Median: " << mf.findMedian() << endl;

    mf.addNum(4);
    cout << "Median: " << mf.findMedian() << endl;

    return 0;
}
