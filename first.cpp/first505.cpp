// DP 39: Buy and Sell Stocks With Cooldown maximizes profit with unlimited transactions : -


#include <bits/stdc++.h>
using namespace std;

int f(int i, int buy, const vector<int>& a, vector<vector<int>>& dp){
    if(i >= (int)a.size()) return 0;
    if(dp[i][buy]!=-1) return dp[i][buy];
    if(buy){
        int take = -a[i] + f(i+1, 0, a, dp);
        int skip = f(i+1, 1, a, dp);
        return dp[i][buy] = max(take, skip);
    }else{
        int sell = a[i] + f(i+2, 1, a, dp); // cooldown forces jump to i+2
        int skip = f(i+1, 0, a, dp);
        return dp[i][buy] = max(sell, skip);
    }
}

int maxProfit(vector<int>& prices){
    int n=prices.size();
    vector<vector<int>> dp(n, vector<int>(2, -1));
    return f(0, 1, prices, dp);
}
