// Valid Parenthesis : - 


#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            if ((c == ')' && st.top() != '(') || 
                (c == '}' && st.top() != '{') || 
                (c == ']' && st.top() != '[')) {
                return false;
            }
            st.pop();
        }
    }
    
    return st.empty();
}

int main() {
    string s = "{[()]}";
    string s1 ="{({{}{}{}{][]]}})}";
    
    cout << (isValid(s) ? "Valid Parentheses\n" : "Invalid Parentheses\n");
    cout << (isValid(s1) ? "Valid Parentheses\n" : "Invalid Parentheses\n");
    
    return 0;
}





// given a string a containing just the characters '(',')'  , '{','}' , '[' and ']' , determine if the input string is valid.
// an input string is valid if : 
// 1. open brackets must be closed by the same type of brackets.
// 2. open brackets must be closed in the correct order.
// 3. every close bracket has a corresponding open bracket of the same type.