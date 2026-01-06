// Bubble Sort : -

// large elments come to end by swapping with adjacents.
// ascending order : small to large
#include<iostream>
using namespace std;

void print(int arr[]  , int  n)
{
    for ( int i = 0 ; i < n ;i++ ){
        cout<<arr[i]<<" ";
    }

}

void bubblesort( int arr[]  , int n )
{
    for (int i = 0 ; i <n-1 ; i++)
    {
        for(int  j  = 0 ; j < n - i - 1 ; j++){
            if(arr[j] > arr[j+1])   // if we use " > " to "  < " then output will come in desecending order
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    print(arr ,n );
}
int main()
{
    int arr[5] = {5,66,889,21,34};
    bubblesort(arr , 5 );

    return 0;

}