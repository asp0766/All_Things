// DP 26: Print Longest Common Subsequence reconstructs one actual LCS string : -


#include <bits/stdc++.h>
using namespace std;

string printLCS(const string& a, const string& b){
    int n=a.size(), m=b.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    // backtrack to build one LCS
    int i=n, j=m;
    string res; res.reserve(dp[n][m]);
    while(i>0 && j>0){
        if(a[i-1]==b[j-1]){
            res.push_back(a[i-1]);
            --i; --j;
        }else if(dp[i-1][j] >= dp[i][j-1]){
            --i;
        }else{
            --j;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    cout << printLCS("abcde","ace") << "\n"; // "ace"
}
