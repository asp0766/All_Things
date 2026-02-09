// DP 25: Longest Common Subsequence (LCS) : - 


#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, const string& a, const string& b, vector<vector<int>>& dp){
    if(i==0 || j==0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(a[i-1]==b[j-1]) return dp[i][j] = 1 + f(i-1,j-1,a,b,dp);
    return dp[i][j] = max(f(i-1,j,a,b,dp), f(i,j-1,a,b,dp));
}

int lcs(string a, string b){
    int n=a.size(), m=b.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
    return f(n,m,a,b,dp);
}

int main(){
    cout << lcs("acd","ced") << "\n"; // 2 ("cd")
}
