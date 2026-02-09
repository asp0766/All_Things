// DP 51: Burst Balloons : -


#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, const vector<int>& a, vector<vector<int>>& dp){
    if(j <= i+1) return 0; // no balloon inside (i,j)
    if(dp[i][j]!=-1) return dp[i][j];
    int best = 0;
    for(int k=i+1; k<j; ++k){
        int coins = a[i]*a[k]*a[j] + f(i,k,a,dp) + f(k,j,a,dp);
        best = max(best, coins);
    }
    return dp[i][j]=best;
}

int maxCoins(vector<int> nums){
    nums.insert(nums.begin(), 1);
    nums.push_back(1);
    int m = nums.size();
    vector<vector<int>> dp(m, vector<int>(m, -1));
    return f(0, m-1, nums, dp);
}

int main(){
    cout << maxCoins({3,1,5,8}) << "\n"; // 167
}
