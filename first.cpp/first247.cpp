// print the numbers in reverse way from n to 1 recursion 

#include <iostream>
using namespace std; 

void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<" "<<endl; // Kaam
    print(n-1); // faith , next call
}

int main(){
    print(5);
    return 0;
}