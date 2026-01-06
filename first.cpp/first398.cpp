// Sum Of Miminum And Maximum Elements of All SubArrays of Size K : -


#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int sumOfMinMax(vector<int> &arr, int k) {
    deque<int> minDeque, maxDeque;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        // Remove out-of-window elements
        if (!minDeque.empty() && minDeque.front() == i - k)
            minDeque.pop_front();
        if (!maxDeque.empty() && maxDeque.front() == i - k)
            maxDeque.pop_front();

        // Remove elements from minDeque that are not useful
        while (!minDeque.empty() && arr[minDeque.back()] >= arr[i])
            minDeque.pop_back();
        
        // Remove elements from maxDeque that are not useful
        while (!maxDeque.empty() && arr[maxDeque.back()] <= arr[i])
            maxDeque.pop_back();

        // Insert current element index
        minDeque.push_back(i);
        maxDeque.push_back(i);

        // Process the first valid window
        if (i >= k - 1) {
            sum += arr[minDeque.front()] + arr[maxDeque.front()];
        }
    }
    
    return sum;
}

int main() {
    vector<int> arr = {2, 5, -1, 7, -3, -1, 2};
    int k = 3;

    cout << "Sum of min and max elements of all subarrays of size " << k << ": " 
         << sumOfMinMax(arr, k) << endl;

    return 0;
}
