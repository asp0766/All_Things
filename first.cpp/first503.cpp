// DP 37: Buy and Sell Stocks III allows at most two transactions : -


#include <bits/stdc++.h>
using namespace std;

int f(int i, int buy, int cap, const vector<int>& a,
      vector<vector<vector<int>>>& dp){
    if(i==(int)a.size() || cap==0) return 0;
    if(dp[i][buy][cap]!=-1) return dp[i][buy][cap];
    if(buy){
        int take = -a[i] + f(i+1, 0, cap, a, dp);
        int skip = f(i+1, 1, cap, a, dp);
        return dp[i][buy][cap] = max(take, skip);
    }else{
        int sell = a[i] + f(i+1, 1, cap-1, a, dp); // complete one transaction
        int skip = f(i+1, 0, cap, a, dp);
        return dp[i][buy][cap] = max(sell, skip);
    }
}

int maxProfit(vector<int>& prices){
    int n=prices.size();
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
    return f(0, 1, 2, prices, dp);
}
