// Kth Element in Matrix : -


#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Element {
    int val, row, col;
    Element(int v, int r, int c) : val(v), row(r), col(c) {}
};

struct compare {
    bool operator()(Element const& a, Element const& b) {
        return a.val > b.val;  // Min heap
    }
};

int kthSmallest(vector<vector<int>> &matrix, int k) {
    int n = matrix.size();
    priority_queue<Element, vector<Element>, compare> minHeap;

    // Insert first column elements into min heap
    for (int i = 0; i < n; i++)
        minHeap.push(Element(matrix[i][0], i, 0));

    // Extract the smallest element k-1 times
    for (int i = 0; i < k - 1; i++) {
        Element curr = minHeap.top();
        minHeap.pop();

        int row = curr.row, col = curr.col;

        // If more elements in row, insert the next one
        if (col + 1 < n)
            minHeap.push(Element(matrix[row][col + 1], row, col + 1));
    }

    return minHeap.top().val;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };
    int k = 8;

    cout << "The " << k << "th smallest element is: " << kthSmallest(matrix, k) << endl;

    return 0;
}
