// pointer
// delete  old array and replace it with new array 


#include <iostream>

using namespace std;

int main()
 {
    int* oldArray = new int[4]; // assume oldArray is initialized with some values

    // delete the old array
    delete[] oldArray;

    int* newArray = new int[4]{1, 2, 3, 4}; // new array with values

    // assign the new array to the old array variable
    oldArray = newArray;

    // print the new array values
    for (int i = 0; i < 4; i++) {
        cout << oldArray[i] << " ";
    }

    return 0;
}