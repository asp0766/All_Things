// DP 18: Count Partitions : -


#include <bits/stdc++.h>
using namespace std;
const int MOD = 1'000'000'007;

int f(int i, int t, const vector<int>& a, vector<vector<int>>& dp){
    if(i==0){
        if(t==0 && a[0]==0) return 2;              // pick or skip zero
        if(t==0 || t==a[0]) return 1;
        return 0;
    }
    if(dp[i][t]!=-1) return dp[i][t];
    long long notTake = f(i-1,t,a,dp);
    long long take = 0;
    if(a[i] <= t) take = f(i-1, t-a[i], a, dp);
    return dp[i][t] = (int)((notTake + take) % MOD);
}

int countPartitionsWithDiff(vector<int>& a, int D){
    long long S = accumulate(a.begin(), a.end(), 0LL);
    if(S < D) return 0;
    if(((S - D) & 1LL) != 0) return 0;
    int s2 = (int)((S - D)/2);
    vector<vector<int>> dp(a.size(), vector<int>(s2+1, -1));
    return f((int)a.size()-1, s2, a, dp);
}

int main(){
    vector<int> a = {5,2,6,4}; int D = 3;
    cout << countPartitionsWithDiff(a,D) << "\n"; // 1
}
