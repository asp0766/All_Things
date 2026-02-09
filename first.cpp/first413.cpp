// Smallest Range Covering Elements from K Lists : -


#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

// Structure to store element with list and index info
struct Element {
    int val, row, col;
    Element(int v, int r, int c) : val(v), row(r), col(c) {}
};

// Comparator for min heap
struct compare {
    bool operator()(Element a, Element b) {
        return a.val > b.val;  // Min heap
    }
};

// Find the smallest range covering elements from K lists
pair<int, int> smallestRange(vector<vector<int>>& nums) {
    priority_queue<Element, vector<Element>, compare> minHeap;
    int maxElement = INT_MIN, rangeStart = 0, rangeEnd = INT_MAX;

    // Insert the first element of each list into the heap
    for (int i = 0; i < nums.size(); i++) {
        minHeap.push(Element(nums[i][0], i, 0));
        maxElement = max(maxElement, nums[i][0]);
    }

    // Process the heap
    while (!minHeap.empty()) {
        Element curr = minHeap.top();
        minHeap.pop();

        int minElement = curr.val;

        // Update the range if the current range is smaller
        if (maxElement - minElement < rangeEnd - rangeStart) {
            rangeStart = minElement;
            rangeEnd = maxElement;
        }

        // Move to the next element in the list
        if (curr.col + 1 < nums[curr.row].size()) {
            int nextVal = nums[curr.row][curr.col + 1];
            minHeap.push(Element(nextVal, curr.row, curr.col + 1));
            maxElement = max(maxElement, nextVal);
        } else {
            break;  // One list is exhausted
        }
    }

    return {rangeStart, rangeEnd};
}

// Main function
int main() {
    vector<vector<int>> nums = {
        {4, 10, 15, 24, 26},
        {0, 9, 12, 20},
        {5, 18, 22, 30}
    };

    pair<int, int> range = smallestRange(nums);
    cout << "Smallest Range: [" << range.first << ", " << range.second << "]" << endl;

    return 0;
}
