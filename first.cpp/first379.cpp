// Redundant Brackets : - 


#include <iostream>
#include <stack>
using namespace std;

bool hasRedundantBrackets(string expr) {
    stack<char> st;

    for (char ch : expr) {
        if (ch == ')') {
            bool isRedundant = true;

            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                st.pop();

                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    isRedundant = false;
                }
            }

            st.pop(); // Remove '('

            if (isRedundant) return true;
        } else {
            st.push(ch);
        }
    }

    return false;
}

int main() {
    string expr = "((a+b))"; // Example

    if (hasRedundantBrackets(expr))
        cout << "Redundant Brackets Found\n";
    else
        cout << "No Redundant Brackets\n";

    return 0;
}
