// Heap Playlist : Coder Army : - ( 8 Videos Playlist )
// https://youtube.com/playlist?list=PLQEaRBV9gAFtRabbmFxqeI6wa50L9EgcF&si=ljijI7xELwgDSiqE

// Max Heap Insertion : - 


#include<iostream>
using namespace std;

class MaxHeap{

    int *arr;
    int size;   // total elements in heap
    int total_size;  // total size of array


    public:
    MaxHeap( int n ){
        arr = new int (n);
        size = 0 ;
        total_size = n ;
    }


    // insert into Heap 
    void insert( int value ) {

        // if heap size is availble or not

        if (size == total_size){
            cout<<"Heap Overflow\n";
            return;
        }

        arr[size] = value ; 
        int index = size ;
        size++;


        // Compare it with its parent
        while(index > 0 && arr[(index - 1 ) / 2 ]  < arr[index]){
            swap(arr[index] , arr[(index-1)/2]);
            index = (index - 1) / 2 ;
        };

        cout<<arr[index]<<" is inserted into the Heap\n";

    }

    void print(){
        for ( int i = 0 ; i<size ; i++){
            cout<<arr[i]<<" ";

            
        }
    }

};



int main(){

    MaxHeap H1(6);
    H1.insert(4);
    H1.insert(14);
    H1.insert(45);
    H1.insert(12);
    H1.insert(667);
    H1.print();

}