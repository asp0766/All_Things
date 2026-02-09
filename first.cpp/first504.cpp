// DP 38: Buy and Sell Stock IV allows at most k transactions : -


#include <bits/stdc++.h>
using namespace std;

int f(int i, int buy, int cap, const vector<int>& a,
      vector<vector<vector<int>>>& dp){
    if(i==(int)a.size() || cap==0) return 0;
    if(dp[i][buy][cap]!=-1) return dp[i][buy][cap];
    if(buy){
        int sell = a[i] + f(i+1, 0, cap-1, a, dp);
        int skip = f(i+1, 1, cap, a, dp);
        return dp[i][buy][cap] = max(sell, skip);
    }else{
        int take = -a[i] + f(i+1, 1, cap, a, dp);
        int skip = f(i+1, 0, cap, a, dp);
        return dp[i][buy][cap] = max(take, skip);
    }
}

int maxProfit(int k, vector<int>& prices){
    int n=prices.size();
    if(k >= n/2){
        int ans=0; for(int i=1;i<n;i++) if(prices[i]>prices[i-1]) ans+=prices[i]-prices[i-1];
        return ans;
    }
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k+1, -1)));
    return f(0, 0, k, prices, dp);
}
