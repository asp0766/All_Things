// DP 14: Subset Sum Equals K : - 


#include <bits/stdc++.h>
using namespace std;

bool f(int i, int t, const vector<int>& a, vector<vector<int>>& dp){
    if(t==0) return true;
    if(i==0) return a[0]==t;
    if(dp[i][t]!=-1) return dp[i][t];
    bool notTake = f(i-1,t,a,dp);
    bool take = false;
    if(a[i]<=t) take = f(i-1,t-a[i],a,dp);
    return dp[i][t] = (take || notTake);
}

bool subsetSumToK(int n, int k, const vector<int>& a){
    vector<vector<int>> dp(n, vector<int>(k+1, -1));
    return f(n-1,k,a,dp);
}

int main(){
    vector<int> a={1,2,3,4}; int k=4;
    cout << (subsetSumToK(a.size(),k,a) ? "true":"false") << "\n"; // true
}
