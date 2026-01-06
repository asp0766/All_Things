// Insert an Element At Its Bottom In A Given Stack : - 


#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& st, int x) {
    if (st.empty()) { 
        st.push(x);
        return;
    }

    int top = st.top();
    st.pop();

    insertAtBottom(st, x); // Recursive call

    st.push(top); // Push back elements
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    int x = 0; // Insert this at the bottom
    insertAtBottom(st, x);

    // Print Stack (Top to Bottom)
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
