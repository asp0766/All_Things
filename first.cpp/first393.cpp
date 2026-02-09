// First Negative Integer in Every Window Of Size K : - 


#include <iostream>
#include <deque>
#include <vector>
using namespace std;

vector<int> firstNegativeInWindow(vector<int> &arr, int k) {
    deque<int> dq;
    vector<int> result;
    
    // Process first k elements
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            dq.push_back(i);
        }
    }

    // Process remaining elements
    for (int i = k; i < arr.size(); i++) {
        // Store result for the previous window
        result.push_back(dq.empty() ? 0 : arr[dq.front()]);

        // Remove elements out of the window
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        // Add current element if it's negative
        if (arr[i] < 0) {
            dq.push_back(i);
        }
    }

    // Add result for the last window
    result.push_back(dq.empty() ? 0 : arr[dq.front()]);

    return result;
}

int main() {
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;

    vector<int> result = firstNegativeInWindow(arr, k);

    cout << "First negative in each window: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
