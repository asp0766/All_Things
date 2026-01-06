// Construct Target Array With Multiple Sums : - 


#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool isPossible(vector<int>& target) {
    priority_queue<int> maxHeap;  // Max heap
    long long totalSum = 0;

    // Insert all elements into the heap and calculate total sum
    for (int num : target) {
        maxHeap.push(num);
        totalSum += num;
    }

    while (true) {
        int largest = maxHeap.top();
        maxHeap.pop();
        totalSum -= largest;  // Sum of remaining elements

        // Base cases
        if (largest == 1 || totalSum == 1)
            return true;
        
        if (totalSum == 0 || largest <= totalSum || largest % totalSum == 0)
            return false;

        // Get the remaining value after replacement
        int newElement = largest % totalSum;
        totalSum += newElement;
        maxHeap.push(newElement);
    }
}

// Main function
int main() {
    vector<int> target = {9, 3, 5};

    if (isPossible(target)) {
        cout << "Possible to construct target array." << endl;
    } else {
        cout << "Not possible to construct target array." << endl;
    }

    return 0;
}
