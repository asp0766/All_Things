// DP 48: Matrix Chain Multiplication : -


#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, const vector<int>& d, vector<vector<int>>& dp){
    if(i==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans = INT_MAX;
    for(int k=i; k<j; k++){
        long long cost = f(i,k,d,dp) + f(k+1,j,d,dp) + 1LL*d[i-1]*d[k]*d[j];
        ans = min(ans, (int)cost);
    }
    return dp[i][j]=ans;
}
int matrixChainMultiplication(const vector<int>& d){
    int n = (int)d.size()-1; // n matrices
    vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
    return f(1,n,d,dp);
}

int main(){
    vector<int> d = {40,20,30,10,30}; // A1:40x20, A2:20x30, A3:30x10, A4:10x30
    cout << matrixChainMultiplication(d) << "\n"; // 26000
}
