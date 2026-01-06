// N Stacks in a Array : -



#include <iostream>
using namespace std;

class NStack {
private:
    int *arr, *top, *next;
    int n, size;
    int freeSpot;

public:
    NStack(int N, int S) {
        n = N; 
        size = S;
        arr = new int[size];
        top = new int[n];
        next = new int[size];

        // Initialize all stacks as empty
        for (int i = 0; i < n; i++) top[i] = -1;

        // Initialize free list
        for (int i = 0; i < size - 1; i++) next[i] = i + 1;
        next[size - 1] = -1;

        freeSpot = 0;
    }

    // Push element to stack 'm'
    bool push(int val, int m) {
        if (freeSpot == -1) return false; // Stack overflow

        int index = freeSpot; 
        freeSpot = next[index];

        arr[index] = val;
        next[index] = top[m - 1];
        top[m - 1] = index;

        return true;
    }

    // Pop element from stack 'm'
    int pop(int m) {
        if (top[m - 1] == -1) return -1; // Stack underflow

        int index = top[m - 1];
        top[m - 1] = next[index];
        next[index] = freeSpot;
        freeSpot = index;

        return arr[index];
    }
};

int main() {
    NStack s(3, 10); // 3 stacks in 10-sized array

    s.push(15, 1);
    s.push(30, 2);
    s.push(45, 3);

    cout << s.pop(1) << endl; // 15
    cout << s.pop(2) << endl; // 30
    cout << s.pop(3) << endl; // 45

    return 0;
}
