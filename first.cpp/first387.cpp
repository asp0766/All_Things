// Queue by Love Babbar: - 

// Intro to Queue 


#include<iostream>
#include<queue>
using namespace std;

int main(){

    // Create A Queue
    queue<int> q;

    q.push(11);
    cout<<"Front of Queue is : "<<q.front()<<endl;  // 11

    q.push(15);
    cout<<"Front of Queue is : "<<q.front()<<endl;  // 11

    q.push(13);
    cout<<"Front of Queue is : "<<q.front()<<endl;  // 11 
 
    cout<<"Size of Queue is : "<<q.size()<<endl;    // 3


    q.pop();
    q.pop();
    q.pop();


    cout<<"Size of Queue is :"<<q.size()<<endl;  // 0


    if(q.empty()){
        cout<<"Queue Is Empty "<<endl;     // Queue Is Empty
    }

    else{
        cout<<"Queue Is Not Empty"<<endl;
    }


    return 0;
}



