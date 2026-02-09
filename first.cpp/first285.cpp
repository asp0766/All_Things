// Double Ended Queue : - 


#include <iostream>
#include <deque>
using namespace std;

void printDeque(deque<int> dq) {
    for (int num : dq) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    deque<int> dq;
    
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(0);
    dq.push_front(-1);
    
    cout << "Deque after insertions: ";
    printDeque(dq);
    
    dq.pop_back();
    dq.pop_front();
    
    cout << "Deque after deletions: ";
    printDeque(dq);
    
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;
    
    return 0;
}
