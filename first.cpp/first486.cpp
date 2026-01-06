// DP 20: Minimum Coins (Coin Change – fewest coins) : -


#include <bits/stdc++.h>
using namespace std;

int INF = 1e9;

int f(int i, int t, const vector<int>& a, vector<vector<int>>& dp){
    if(i==0){
        if(t % a[0] == 0) return t / a[0];
        return INF;
    }
    if(dp[i][t] != -1) return dp[i][t];
    int notTake = f(i-1, t, a, dp);
    int take = INF;
    if(a[i] <= t){
        int sub = f(i, t - a[i], a, dp);
        if(sub != INF) take = 1 + sub;
    }
    return dp[i][t] = min(notTake, take);
}

int minimumCoins(vector<int>& a, int T){
    int n = a.size();
    vector<vector<int>> dp(n, vector<int>(T+1, -1));
    int ans = f(n-1, T, a, dp);
    return (ans >= INF) ? -1 : ans;
}

int main(){
    vector<int> coins = {1,2,3}; int T = 7;
    cout << minimumCoins(coins, T) << "\n"; // 3 (3+3+1)
}
