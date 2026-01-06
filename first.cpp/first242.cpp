// Matrix Pointer in Function : - 2D Array 


#include <iostream>
using namespace std;

bool searchMatrix(int (*matrix)[4], int rows, int cols, int target) {
    if (matrix == nullptr) return false;

    int row = 0;
    int col = cols - 1;

    while (row < rows && col >= 0) {
        if (matrix[row][col] == target) {
            return true; 
        } else if (matrix[row][col] > target) {
            col--; // Move left
        } else {
            row++; // Move down
        }
    }
    return false; 
}

int main() {
    int matrix[4][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60},
        {70, 80, 90, 100}
    };
    int target = 3;

    if (searchMatrix(matrix, 4, 4, target)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}