// DP 53: Palindrome Partitioning II  : -


#include <bits/stdc++.h>
using namespace std;

int minCut(string s){
    int n = s.size();
    vector<vector<bool>> pal(n, vector<bool>(n, false));
    for(int center=0; center<n; ++center){
        // odd-length palindromes
        for(int l=center, r=center; l>=0 && r<n && s[l]==s[r]; --l, ++r)
            pal[l][r]=true;
        // even-length palindromes
        for(int l=center, r=center+1; l>=0 && r<n && s[l]==s[r]; --l, ++r)
            pal[l][r]=true;
    }
    vector<int> dp(n);
    for(int i=0;i<n;i++){
        if(pal[0][i]){ dp[i]=0; continue; }
        int best = i;
        for(int j=1;j<=i;j++){
            if(pal[j][i]) best = min(best, dp[j-1] + 1);
        }
        dp[i]=best;
    }
    return dp[n-1];
}

int main(){
    cout << minCut("aab") << "\n"; // 1 ("aa" | "b")
}
