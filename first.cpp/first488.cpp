// DP 22: Coin Change II : -


#include <bits/stdc++.h>
using namespace std;

long long f(int i, int t, const vector<int>& a, vector<vector<long long>>& dp){
    if(t==0) return 1;              // one way: pick nothing
    if(i==0) return (t % a[0] == 0);
    if(dp[i][t] != -1) return dp[i][t];
    long long skip = f(i-1, t, a, dp);
    long long pick = 0;
    if(a[i] <= t) pick = f(i, t - a[i], a, dp); // stay on i (unbounded)
    return dp[i][t] = skip + pick;
}

long long change(int amount, vector<int>& coins){
    vector<vector<long long>> dp(coins.size(), vector<long long>(amount+1, -1));
    return f((int)coins.size()-1, amount, coins, dp);
}

int main(){
    vector<int> coins={1,2,5}; int amount=5;
    cout << change(amount, coins) << "\n"; // 4
}
