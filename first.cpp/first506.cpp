// DP 40: Buy and Sell Stocks With Transaction Fee maximizes profit with unlimited transactions but charges a fixed fee per completed transaction : -


#include <bits/stdc++.h>
using namespace std;

int f(int i, int buy, const vector<int>& a, int fee, vector<vector<int>>& dp){
    if(i==(int)a.size()) return 0;
    if(dp[i][buy]!=-1) return dp[i][buy];
    if(buy){
        // choose to buy now (pay price + fee upfront) or skip
        int take = -a[i] - fee + f(i+1, 0, a, fee, dp);
        int skip = f(i+1, 1, a, fee, dp);
        return dp[i][buy] = max(take, skip);
    }else{
        // choose to sell now (no fee here if paid at buy) or skip
        int sell = a[i] + f(i+1, 1, a, fee, dp);
        int skip = f(i+1, 0, a, fee, dp);
        return dp[i][buy] = max(sell, skip);
    }
}

int maxProfit(vector<int>& prices, int fee){
    int n=prices.size();
    vector<vector<int>> dp(n, vector<int>(2, -1));
    return f(0, 1, prices, fee, dp);
}
