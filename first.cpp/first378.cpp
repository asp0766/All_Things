// Sort A Stack : - 


#include <iostream>
#include <stack>
using namespace std;

// Insert element in sorted order
void sortedInsert(stack<int>& st, int x) {
    if (st.empty() || st.top() <= x) {
        st.push(x);
        return;
    }

    int top = st.top();
    st.pop();

    sortedInsert(st, x);

    st.push(top); // Restore elements
}

// Sort stack using recursion
void sortStack(stack<int>& st) {
    if (st.empty()) return;

    int top = st.top();
    st.pop();

    sortStack(st);

    sortedInsert(st, top); // Insert in sorted order
}

int main() {
    stack<int> st;
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);

    sortStack(st);

    // Print Sorted Stack
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
