// DP 13: Ninja and His Friends (Cherry Pickup II) : -


#include <bits/stdc++.h>
using namespace std;

int f(int i, int j1, int j2, const vector<vector<int>>& g,
      vector<vector<vector<int>>>& dp){
    int n=g.size(), m=g[0].size();
    if(j1<0||j1>=m||j2<0||j2>=m) return -1e9;
    if(i==n-1){
        if(j1==j2) return g[i][j1];
        return g[i][j1]+g[i][j2];
    }
    if(dp[i][j1][j2]!=INT_MIN) return dp[i][j1][j2];
    int best = -1e9;
    for(int d1=-1; d1<=1; d1++){
        for(int d2=-1; d2<=1; d2++){
            int cur = (j1==j2? g[i][j1] : g[i][j1]+g[i][j2]);
            cur += f(i+1, j1+d1, j2+d2, g, dp);
            best = max(best, cur);
        }
    }
    return dp[i][j1][j2]=best;
}

int maximumChocolates(vector<vector<int>>& g){
    int n=g.size(), m=g[0].size();
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, INT_MIN)));
    return f(0,0,m-1,g,dp);
}
