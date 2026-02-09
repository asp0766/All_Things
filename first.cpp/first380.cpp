// Minimunm Cost To Make String Valid : - 


#include <iostream>
#include <stack>
using namespace std;

int minCostToMakeValid(string s) {
    if (s.length() % 2 != 0) return -1; // Odd length can't be balanced

    stack<char> st;
    for (char ch : s) {
        if (ch == '{') {
            st.push(ch);
        } else { // ch == '}'
            if (!st.empty() && st.top() == '{') {
                st.pop(); // Valid pair
            } else {
                st.push(ch); // Unbalanced '}'
            }
        }
    }

    // Count unbalanced '{' and '}'
    int a = 0, b = 0;
    while (!st.empty()) {
        if (st.top() == '{') a++;
        else b++;
        st.pop();
    }

    return (a + 1) / 2 + (b + 1) / 2;
}

int main() {
    string s = "{{{}"; 

    cout << "Minimum Cost: " << minCostToMakeValid(s) << endl;

    return 0;
}
