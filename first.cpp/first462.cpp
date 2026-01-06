// Striver A2Z-DSA Course ( 316 Videos ) : - 
// https://youtube.com/playlist?list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&si=kVFHMSJ9WF-tkFPS


//  I Am Start Form DP From , Because I am Already cover all the things to DP So I Start from DP : - 
// Intro TO DP: -
// Recursive (Exponential):- 

#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n = 6;
    cout << fib(n) << endl; // Output: 8
}


