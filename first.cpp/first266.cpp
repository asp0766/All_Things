// Stack Using Vector & Class Template : - 


#include <iostream>
#include <vector>
#include <string>
using namespace std;


// Create Stack using Vector
template<class T>
class Stack{
    vector<T> vec;

public:
    void push(T val){  //0(1)
        vec.push_back((val));
    }

    void pop(){
        if(isEmpty()){
            cout<<"stack is empty.\n";
            return;
        }
        vec.pop_back();
    }

    T top(){
        // if(isEmpty()){
        //     cout<<"stack is empty.\n";
        //     return -1;
        // }
        int lastIndex  = vec.size() - 1 ;
        return vec[lastIndex];

    }

    bool isEmpty(){
        return vec.size() == 0 ;
    }

};

int main()
{
    Stack<string> s;
    s.push("Anurag");
    s.push("Name is");
    s.push("My");

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0 ;
}