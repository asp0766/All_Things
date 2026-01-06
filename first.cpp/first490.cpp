// DP 24: Rod Cutting maximizes : -


#include <bits/stdc++.h>
using namespace std;

int f(int i, int L, const vector<int>& price, vector<vector<int>>& dp){
    if(i==0) return L * price[0];                 // length 1 repeated
    if(dp[i][L]!=-1) return dp[i][L];
    int notTake = f(i-1, L, price, dp);
    int take = INT_MIN;
    int len = i+1;
    if(len <= L) take = price[i] + f(i, L - len, price, dp); // stay on i
    return dp[i][L] = max(notTake, take);
}

int cutRod(vector<int>& price){
    int n = price.size();
    vector<vector<int>> dp(n, vector<int>(n+1, -1));
    return f(n-1, n, price, dp);
}

int main(){
    vector<int> price = {2,5,7,8,10}; // for lengths 1..5
    cout << cutRod(price) << "\n";    // 12
}
