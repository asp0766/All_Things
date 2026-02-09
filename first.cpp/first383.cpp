// The Celebrity Problem : - 


#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool knows(vector<vector<int>>& M, int a, int b) {
    return M[a][b] == 1; // Returns true if 'a' knows 'b'
}

int findCelebrity(vector<vector<int>>& M, int n) {
    stack<int> st;

    // Step 1: Push all people into the stack
    for (int i = 0; i < n; i++) {
        st.push(i);
    }

    // Step 2: Find potential celebrity
    while (st.size() > 1) {
        int A = st.top(); st.pop();
        int B = st.top(); st.pop();

        if (knows(M, A, B)) {
            // A knows B -> A is not a celebrity
            st.push(B);
        } else {
            // A does not know B -> B is not a celebrity
            st.push(A);
        }
    }

    int candidate = st.top(); st.pop();

    // Step 3: Verify the candidate
    for (int i = 0; i < n; i++) {
        if (i != candidate && (knows(M, candidate, i) || !knows(M, i, candidate))) {
            return -1; // No celebrity found
        }
    }

    return candidate;
}

int main() {
    vector<vector<int>> M = {
        {0, 1, 0},
        {0, 0, 0},  // Person 1 is the celebrity
        {0, 1, 0}
    };
    
    int n = M.size();
    int celeb = findCelebrity(M, n);

    if (celeb == -1) {
        cout << "No Celebrity Found" << endl;
    } else {
        cout << "Celebrity is Person: " << celeb << endl;
    }

    return 0;
}
