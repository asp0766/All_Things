// Two Stacks in A Array : -


#include <iostream>
using namespace std;

class TwoStacks {
    int arr[10]; 
    int top1 = -1, top2 = 10; 

public:
    void push1(int x) {
         if (top1 < top2 - 1) arr[++top1] = x; 
        }


    void push2(int x) {
         if (top1 < top2 - 1) arr[--top2] = x;
         }


    int pop1() {
         return (top1 >= 0) ? arr[top1--] : -1; 
        }


    int pop2() {
         return (top2 < 10) ? arr[top2++] : -1; 
        }
};

int main() {
    TwoStacks ts;
    ts.push1(5);
    ts.push2(10);
    cout << ts.pop1() << endl; // 5
    cout << ts.pop2() << endl; // 10

    return 0;
}
