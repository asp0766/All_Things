// Space Optimization : -


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;
    int prev2 = 0, prev1 = 1;

    for(int i=2; i<=n; i++) {
        int cur = prev1 + prev2;
        prev2 = prev1;
        prev1 = cur;
    }

    cout << prev1 << endl; // Output: 8
}
