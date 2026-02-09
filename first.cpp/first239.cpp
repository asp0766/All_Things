// Diagonal Sum  : - 2D Array 


#include <iostream>
using namespace std;

int diagonalsum(int mat[][4], int n) {
    int sum = 0;

    // for (int i = 0; i < n; i++) {           // rows
    //     for (int j = 0; j < n; j++) {      // columns
    //         if (i == j) {                 // Primary diagonal
    //             sum += mat[i][j];
    //         } 
    //         else if (j == n - i - 1) {   // Secondary diagonal
    //             sum += mat[i][j];
    //         }
    //     }
    // }

    

    // Second Method : - 
    for(int i = 0 ; i<n ; i++)
    {
        sum+=mat[i][i];  // primary diagonal

        if(i != n-i-1)
        {
            sum +=mat[i][n-i-1];  //Secondary diagonal
        }
    }




    cout << "Sum of diagonals is: " << sum << endl;
    return sum;
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}, 
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    diagonalsum(matrix, 4);

    return 0;
}