// DP 50: Minimum Cost to Cut a Stick uses interval  : -


#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, const vector<int>& c, vector<vector<int>>& dp){
    if(j <= i+1) return 0; // no cut inside
    if(dp[i][j]!=-1) return dp[i][j];
    int ans = INT_MAX;
    for(int k=i+1; k<j; ++k){
        int cost = (c[j]-c[i]) + f(i,k,c,dp) + f(k,j,c,dp);
        ans = min(ans, cost);
    }
    return dp[i][j] = (ans==INT_MAX ? 0 : ans);
}

int minCost(int n, vector<int> cuts){
    cuts.push_back(0);
    cuts.push_back(n);
    sort(cuts.begin(), cuts.end());
    int m = cuts.size();
    vector<vector<int>> dp(m, vector<int>(m, -1));
    return f(0, m-1, cuts, dp);
}

int main(){
    cout << minCost(7, vector<int>{1,3,4,5}) << "\n"; // 16
}
