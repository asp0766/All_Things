// DP 17: Count Subsets with Sum K : -


#include <bits/stdc++.h>
using namespace std;

long long f(int i, int t, const vector<int>& a, vector<vector<long long>>& dp){
    if(i==0){
        if(t==0 && a[0]==0) return 2;      // pick or skip zero
        if(t==0 || t==a[0]) return 1;      // empty subset or single pick
        return 0;
    }
    if(dp[i][t]!=-1) return dp[i][t];
    long long notTake = f(i-1,t,a,dp);
    long long take = 0;
    if(a[i] <= t) take = f(i-1, t-a[i], a, dp);
    return dp[i][t] = notTake + take;
}

long long countSubsetsSumK(const vector<int>& a, int K){
    int n = a.size();
    vector<vector<long long>> dp(n, vector<long long>(K+1, -1));
    return f(n-1, K, a, dp);
}

int main(){
    vector<int> a = {0,0,1}; int K = 1;
    cout << countSubsetsSumK(a,K) << "\n"; // 3 (choose 1, or 1+first 0, or 1+second 0)
}
