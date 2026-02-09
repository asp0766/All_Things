// Delete Middle Element From Stack : -


#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&inputStack , int count ,  int size ){
    // base case 

    if ( count == size / 2 ){
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();


    // Recursive Call 
    solve( inputStack , count + 1  , size);

    inputStack.push(num);

}

void deleteMiddle(stack<int>&inputStack , int N ){

    int count = 0 ;
    solve(inputStack , count , N );
}
 
int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    deleteMiddle(st, st.size());

    // Print
    while(!st.empty()){
        cout<<st.top()<< " ";
        st.pop();
    }


    return 0;
}