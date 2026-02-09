// Stack & Queue - by Love Babbar :  -  ( 8 Videos Playlist )
// https://youtube.com/playlist?list=PLDzeHZWIZsTrhXYYtx4z8-u8zA-DzuVsj&si=eDRM9ndBst6_Gqp-


// Stack Creation : -


#include<iostream>
#include<stack>
using namespace std;

int main(){

    // creation of stack
    stack<int> s ;

    // push operation
    s.push(2);
    s.push(3);

    //pop 
    s.pop();



    cout<<"Printing Top Element : "<<s.top()<<endl;;  // 2
    
    if(s.empty()){
        cout<<"Empty";
    }

    else{
        cout<<"Not Empty \n";    // Not Empty
    }


    cout<<"Size of Stack : "<<s.size();   // Size of Stack : 1

    return 0;

}