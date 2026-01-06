// Stacks : -


#include <iostream>
#include <vector>
using namespace std;


// Create Stack using Vector
class Stack{
    vector<int> vec;

public:
    void push(int val){  //0(1)
        vec.push_back((val));
    }

    void pop(){
        if(isEmpty()){
            cout<<"stack is empty.\n";
            return;
        }
        vec.pop_back();
    }

    int top(){
        if(isEmpty()){
            cout<<"stack is empty.\n";
            return -1;
        }
        int lastIndex  = vec.size() - 1 ;
        return vec[lastIndex];

    }


    bool isEmpty(){
        return vec.size() == 0 ;

    }

};

int main()
{
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0 ;
}