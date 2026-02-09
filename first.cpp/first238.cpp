//  Spiral Matrix : - 2D Array 


#include <iostream>
using namespace std; 

void spiralmatrix(int matrix[][4], int n, int m) {
    int srow = 0, scol = 0;      // srow = starting row, scol = starting column 
    int erow = n - 1, ecol = m - 1; // erow = ending row, ecol = ending column 

    while (srow <= erow && scol <= ecol) 
    { 
        // top row
        for (int j = scol; j <= ecol; j++) {
            cout << matrix[srow][j] << " ";
        }
        srow++; // Move down to the next row

        // right column
        for (int i = srow; i <= erow; i++) {
            cout << matrix[i][ecol] << " ";
        }
        ecol--; // Move left to the previous column

        // bottom row 
        if (srow <= erow) {
            for (int j = ecol; j >= scol; j--) {
                cout << matrix[erow][j] << " ";
            }
            erow--; // Move up to the previous row
        }

        // left column
        if (scol <= ecol) {
            for (int i = erow; i >= srow; i--) {
                cout << matrix[i][scol] << " ";
            }
            scol++; // Move right to the next column
        }
    }

    cout << endl;
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}, 
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    spiralmatrix(matrix, 4, 4);

    return 0;
}