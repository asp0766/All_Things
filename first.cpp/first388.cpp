// Implement A Queue : - 


#include<iostream>
#include<queue>
using namespace std;

class Queue{

    int *arr;
    int qfront;
    int rear;
    int size;


    public:
    Queue(){
        size = 10000;
        arr = new int[size];
        qfront = 0 ;
        rear = 0 ;
    }


    bool isEmpty(){
        if ( qfront == rear){
            return true;
        }

        else{
            return false;
        }

    }


    void enqueue(int data){
        if( rear == size){
            cout<<"Queue is Full "<<endl;
        }

        else{
            arr[rear] = data ;
            rear++;
        }
    }

    int dequeue(){
        if( qfront == rear ){
            return -1;
        }

        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;

            if( qfront == rear){
                qfront = 0 ; 
                rear = 0 ;
            }

            return ans;
        }
    }


    int front(){
        if ( qfront == rear){
            return -1;
        }

        else{
            return arr[qfront];
        }
    }


};


int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.front() << endl;  // Output: 10

    cout << "Dequeued: " << q.dequeue() << endl;  // Output: 10
    cout << "Front: " << q.front() << endl;  // Output: 20

    cout << "Dequeued: " << q.dequeue() << endl;  // Output: 20
    cout << "Dequeued: " << q.dequeue() << endl;  // Output: 30
    cout << "Dequeued: " << q.dequeue() << endl;  // Output: -1 (Queue is empty)

    return 0;
}