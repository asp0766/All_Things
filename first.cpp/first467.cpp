// DP 1 :  LIS template (O(N^2) DP) : -


#include <bits/stdc++.h>
using namespace std;

int lis(vector<int>& a) {
    int n = a.size(), ans = 1;
    vector<int> dp(n, 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) dp[i] = max(dp[i], 1 + dp[j]);
        }
        ans = max(ans, dp[i]);
    }
    return ans;
}

int main() {
    vector<int> a = {10,9,2,5,3,7,101,18};
    cout << lis(a) << "\n"; // 4
}
