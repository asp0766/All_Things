// DP 46: Longest Bitonic Subsequence : -


#include <bits/stdc++.h>
using namespace std;

int longestBitonicSubsequence(vector<int>& a){
    int n=a.size();
    if(n==0) return 0;
    vector<int> lis(n,1), lds(n,1);
    // LIS ending at i
    for(int i=0;i<n;i++)
        for(int j=0;j<i;j++)
            if(a[j] < a[i]) lis[i] = max(lis[i], lis[j]+1);
    // LDS starting at i (equivalently LIS on reversed)
    for(int i=n-1;i>=0;i--)
        for(int j=n-1;j>i;j--)
            if(a[j] < a[i]) lds[i] = max(lds[i], lds[j]+1);
    int ans=0;
    for(int i=0;i<n;i++) ans = max(ans, lis[i] + lds[i] - 1);
    return ans;
}

int main(){
    vector<int> v={1,11,2,10,4,5,2,1};
    cout << longestBitonicSubsequence(v) << "\n"; // 6 (1,2,10,5,2,1)
}
