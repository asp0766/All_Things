// DP 5: Maximum Sum of Non-Adjacent Elements : -


#include <bits/stdc++.h>
using namespace std;

long long f(int i, const vector<int>& a, vector<long long>& dp){
    if(i==0) return a[0];
    if(i<0) return 0;
    if(dp[i]!=-1) return dp[i];
    long long pick = a[i] + f(i-2,a,dp);
    long long skip = f(i-1,a,dp);
    return dp[i] = max(pick, skip);
}

long long maxNonAdjacentSum(const vector<int>& a){
    int n = a.size();
    vector<long long> dp(n, -1);
    return f(n-1, a, dp);
}

int main(){
    vector<int> a = {2,1,4,9};
    cout << maxNonAdjacentSum(a) << "\n"; // 11 (2+9)
}
