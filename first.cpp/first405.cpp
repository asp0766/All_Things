// Kth Smallest Element : -


#include <iostream>
#include <queue>
using namespace std;

int kthSmallest(int arr[], int n, int k) {
    priority_queue<int> maxHeap; // Max heap

    for (int i = 0; i < n; i++) {
        maxHeap.push(arr[i]);

        // If heap size exceeds k, remove the largest element
        if (maxHeap.size() > k)
            maxHeap.pop();
    }

    return maxHeap.top(); // Top is the Kth smallest
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "The " << k << "rd smallest element is: " << kthSmallest(arr, n, k) << endl;

    return 0;
}
