// Merge K Sorted Arrays : -


#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Structure to store array element with index
struct Element {
    int value, row, col;
    Element(int v, int r, int c) : value(v), row(r), col(c) {}
};

// Comparator for min heap
struct compare {
    bool operator()(Element a, Element b) {
        return a.value > b.value;  // Min heap
    }
};

// Merge K sorted arrays
vector<int> mergeKSortedArrays(vector<vector<int>> &arr) {
    priority_queue<Element, vector<Element>, compare> minHeap;
    vector<int> result;

    int k = arr.size();

    // Insert the first element of each array into the min heap
    for (int i = 0; i < k; i++) {
        if (!arr[i].empty()) {
            minHeap.push(Element(arr[i][0], i, 0));
        }
    }

    // Extract elements and add next elements from arrays
    while (!minHeap.empty()) {
        Element curr = minHeap.top();
        minHeap.pop();

        result.push_back(curr.value);

        int row = curr.row, col = curr.col;

        // If next element exists in the array, add to the heap
        if (col + 1 < arr[row].size()) {
            minHeap.push(Element(arr[row][col + 1], row, col + 1));
        }
    }

    return result;
}

// Main function
int main() {
    vector<vector<int>> arr = {
        {2, 6, 12},
        {1, 9},
        {23, 34, 90, 2000}
    };

    vector<int> result = mergeKSortedArrays(arr);

    cout << "Merged Array: ";
    for (int num : result)
        cout << num << " ";
    cout << endl;

    return 0;
}
