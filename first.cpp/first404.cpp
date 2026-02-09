// Height of Heap : - 


#include <iostream>
#include <cmath>
using namespace std;

int getHeight(int n) {
    if (n == 0)
        return -1;  // Empty heap
    return floor(log2(n));
}

int main() {
    int n;
    cout << "Enter number of elements in the heap: ";
    cin >> n;

    int height = getHeight(n);
    cout << "Height of the heap: " << height << endl;

    return 0;
}
