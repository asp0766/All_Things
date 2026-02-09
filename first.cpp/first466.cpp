// DP 1 :   Knapsack template (0/1) : -


#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, vector<int>& wt, vector<int>& val) {
    int n = wt.size();
    vector<vector<int>> dp(n, vector<int>(W+1, 0));
    for (int w = wt[0]; w <= W; w++) dp[0][w] = val[0];
    for (int i = 1; i < n; i++) {
        for (int w = 0; w <= W; w++) {
            int notTake = dp[i-1][w];
            int take = (wt[i] <= w) ? val[i] + dp[i-1][w - wt[i]] : INT_MIN/2;
            dp[i][w] = max(notTake, take);
        }
    }
    return dp[n-1][W];
}

int main() {
    vector<int> wt = {1,2,4,5}, val = {5,4,8,6};
    cout << knapSack(5, wt, val) << "\n";
}
