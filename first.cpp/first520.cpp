// DP 54: Partition Array for Maximum Sum partitions arr into contiguous blocks of length at most k : -


#include <bits/stdc++.h>
using namespace std;

int maxSumAfterPartitioning(vector<int>& arr, int k){
    int n = arr.size();
    vector<int> dp(n, 0);
    for(int i=0;i<n;i++){
        int mx = 0;
        for(int len=1; len<=k && i-len+1>=0; ++len){
            mx = max(mx, arr[i-len+1]);
            int prev = (i-len>=0) ? dp[i-len] : 0;
            dp[i] = max(dp[i], prev + mx*len);
        }
    }
    return dp[n-1];
}

int main(){
    vector<int> a={1,15,7,9,2,5,10}; int k=3;
    cout << maxSumAfterPartitioning(a,k) << "\n"; // 84
}
