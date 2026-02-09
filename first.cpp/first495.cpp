// DP 29 — Min insertions to palindrome : -


#include <bits/stdc++.h>
using namespace std;

// LCS(s, rev) length == LPS(s) length
int minInsertionsPalindrome_LPS(const string& s){
    string t = s;
    reverse(t.begin(), t.end());
    int n = s.size(), m = n;
    vector<int> prev(m+1, 0), cur(m+1, 0);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]) cur[j] = 1 + prev[j-1];
            else cur[j] = max(prev[j], cur[j-1]);
        }
        prev.swap(cur);
        fill(cur.begin(), cur.end(), 0);
    }
    int lps = prev[m];
    return n - lps;
}

int main(){
    cout << minInsertionsPalindrome_LPS("mbadm") << "\n"; // 2
}
