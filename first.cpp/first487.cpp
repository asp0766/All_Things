// DP 21: Target Sum : -


#include <bits/stdc++.h>
using namespace std;
const int MOD = 1'000'000'007;

int f(int i, int t, const vector<int>& a, vector<vector<int>>& dp){
    if(i==0){
        if(t==0 && a[0]==0) return 2;
        if(t==0 || t==a[0]) return 1;
        return 0;
    }
    if(dp[i][t]!=-1) return dp[i][t];
    long long notTake = f(i-1,t,a,dp);
    long long take = 0;
    if(a[i] <= t) take = f(i-1, t-a[i], a, dp);
    return dp[i][t] = (int)((notTake + take) % MOD);
}

int targetSumWays(vector<int>& a, int target){
    long long S = accumulate(a.begin(), a.end(), 0LL);
    if(S < llabs(target)) return 0;
    if(((S - target) & 1LL) != 0) return 0;
    int s2 = (int)((S - target)/2);
    vector<vector<int>> dp(a.size(), vector<int>(s2+1, -1));
    return f((int)a.size()-1, s2, a, dp);
}

int main(){
    vector<int> a={1,2,3,1}; int target=3;
    cout << targetSumWays(a,target) << "\n"; // 3
}
