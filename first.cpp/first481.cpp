// DP 15: Partition Equal Subset Sum : -


#include <bits/stdc++.h>
using namespace std;

bool f(int i, int t, const vector<int>& a, vector<vector<int>>& dp){
    if(t==0) return true;
    if(i==0) return a[0]==t;
    if(dp[i][t]!=-1) return dp[i][t];
    bool notTake = f(i-1,t,a,dp);
    bool take = false;
    if(a[i] <= t) take = f(i-1, t-a[i], a, dp);
    return dp[i][t] = (take || notTake);
}

bool canPartition(vector<int>& a){
    long long sum = accumulate(a.begin(), a.end(), 0LL);
    if(sum & 1) return false;
    int k = sum/2;
    vector<vector<int>> dp(a.size(), vector<int>(k+1, -1));
    return f(a.size()-1, k, a, dp);
}

int main(){
    vector<int> a = {1,5,11,5};
    cout << (canPartition(a) ? "true":"false") << "\n"; // true
}
