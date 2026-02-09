// Kth Largest Element : -


#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int kthLargest(vector<int> &arr, int k) {
    priority_queue<int> maxHeap(arr.begin(), arr.end());

    for (int i = 1; i < k; i++) {
        maxHeap.pop();  // Remove the largest k-1 times
    }

    return maxHeap.top();  // Kth largest element
}

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;

    cout << "Kth largest element: " << kthLargest(arr, k) << endl;
    return 0;
}
