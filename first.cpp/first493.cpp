// DP 27: Longest Common Substring finds the maximum length of a contiguous string : -


#include <bits/stdc++.h>
using namespace std;

int longestCommonSubstring(const string& a, const string& b){
    int n=a.size(), m=b.size(), ans=0;
    vector<int> prev(m+1, 0), cur(m+1, 0);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                cur[j] = 1 + prev[j-1];
                ans = max(ans, cur[j]);
            }else{
                cur[j] = 0;
            }
        }
        prev.swap(cur);
        fill(cur.begin(), cur.end(), 0);
    }
    return ans;
}

int main(){
    cout << longestCommonSubstring("abcjklp","acjkp") << "\n"; // 3 ("jkp")
}
