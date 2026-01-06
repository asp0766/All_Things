// array

// an array is a collection of data items of the same type 
// items are stored at coniguous memory locations 
// it can also store the collection od derived data types , such as pointers , structures etc.
// a one-dimensional array like a list 
// a two-dimensionl array like a table 
// the c language places no limits on the number of dimensions in an array 
// some texts refer to one dimensional arrays as vectors , two-dimensional arrays as vectors , two-dimensional arrays as matrices , and use the general term array when the number of dimension is unspecified or unimportant


//  sum of array elements


#include <stdio.h>

int main() {
    int n; // Number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];
    
    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate sum and average
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double average = (double)sum / n;

    // Display the results
    printf("Sum of the array elements: %d\n", sum);
    printf("Average of the array elements: %.2f\n", average);

    return 0;
}