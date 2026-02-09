// Create A Stack Using Class 


#include<iostream>
#include<stack>
using namespace std;

class Stack{

    // properties
    public: 
    int *arr;
    int top;
    int size;


    // behaviour 
    Stack(int size){
        this->size =size;
        arr = new int[size];
        top = -1;
    }


    void push(int element){
        if ( size - top  > 1 ){
            top++;
            arr[top] = element ;
        }

        else{
            cout<<"Stack Overflow"<<endl;
        }

    }

    void pop(){
        if( top >= 0 ){
            top--;
        }

        else{
            cout<<"Stack Underflow"<<endl;
        }

    }

    int peek(){
        if( top >= 0 && top < size){
            return arr[top];
        }
        
        else{
            cout<<" Stack Is Empty"<<endl;
            return -1;
        }

    }

    bool isEmpty(){
        if( top == -1 ){
            return true;
        }

        else{
            return false;
        }

    }
};


int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(44);
    st.push(44);
    st.push(44);    // Stack Overflow  here we give the size of the stack is 5 and try to push 6 elements in this stack then peek else conditionis execute and show the message of Stack Overflow

    cout<<st.peek()<<endl;   // 44 
    st.pop();                // pop the upper element means 44
    cout<<st.peek()<<endl;   // 43


    cout<<st.isEmpty();   //  0 means False 


    return 0 ;
}
