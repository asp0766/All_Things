// DP 12: Minimum/Maximum Falling Path Sum : -


#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, const vector<vector<int>>& a, vector<vector<int>>& dp){
    int n = a.size();
    if(j<0 || j>=n) return 1e9;
    if(i==0) return a[0][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int up    = a[i][j] + f(i-1, j,   a, dp);
    int left  = a[i][j] + f(i-1, j-1, a, dp);
    int right = a[i][j] + f(i-1, j+1, a, dp);
    return dp[i][j] = min({up,left,right});
}

int minFallingPathSum(vector<vector<int>>& a){
    int n=a.size(), ans=1e9;
    vector<vector<int>> dp(n, vector<int>(n, -1));
    for(int j=0;j<n;j++) ans = min(ans, f(n-1, j, a, dp));
    return ans;
}
