//  Selection Sort  : - 
// pick the smallest element ( form unsorted ) & put in the beginning.

#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }


        swap(arr[i], arr[minIdx]);
    }
}

int main()
{
    int arr[5] = {5, 34, 587, 2, 56};
    selectionsort(arr, 5);

   
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

