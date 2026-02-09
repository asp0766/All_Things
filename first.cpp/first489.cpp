// DP 23: Unbounded Knapsack : -


#include <bits/stdc++.h>
using namespace std;

int f(int i, int w, const vector<int>& wt, const vector<int>& val,
      vector<vector<int>>& dp){
    if(i==0) return (w / wt[0]) * val[0];
    if(dp[i][w]!=-1) return dp[i][w];
    int notTake = f(i-1, w, wt, val, dp);
    int take = INT_MIN;
    if(wt[i] <= w) take = val[i] + f(i, w - wt[i], wt, val, dp); // stay on i
    return dp[i][w] = max(notTake, take);
}

int unboundedKnapsack(int W, vector<int>& wt, vector<int>& val){
    int n = wt.size();
    vector<vector<int>> dp(n, vector<int>(W+1, -1));
    return f(n-1, W, wt, val, dp);
}
