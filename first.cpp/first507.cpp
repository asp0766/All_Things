// DP 41: Longest Increasing Subsequence (LIS) : -


#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& a){
    int n=a.size(), ans=0;
    vector<int> dp(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j] < a[i]) dp[i] = max(dp[i], dp[j]+1);
        }
        ans = max(ans, dp[i]);
    }
    return ans;
}

int main(){
    vector<int> v={10,9,2,5,3,7,101,18};
    cout << lengthOfLIS(v) << "\n"; // 4
}
