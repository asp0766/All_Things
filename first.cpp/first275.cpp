// Duplicate parentheses : -


#include <iostream>
#include <stack>
using namespace std;

bool hasDuplicateParentheses(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == ')') {
            int count = 0;

            while (!st.empty() && st.top() != '(') {
                st.pop();
                count++;
            }

            if (!st.empty()) st.pop(); // Pop the opening '('

            if (count == 0) return true; // Duplicate parenthesis found
        } 
        else {
            st.push(c);
        }
    }
    return false;
}

int main() {
    string expr1 = "((a+b))";  // Duplicate
    string expr2 = "(a+(b)/c)"; // No duplicate

    cout << (hasDuplicateParentheses(expr1) ? "Duplicate Parentheses\n" : "No Duplicate Parentheses\n");
    cout << (hasDuplicateParentheses(expr2) ? "Duplicate Parentheses\n" : "No Duplicate Parentheses\n");

    return 0;
}
