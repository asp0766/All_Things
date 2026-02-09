// DP 16: Partition Set Into Two Subsets : -


#include <bits/stdc++.h>
using namespace std;

int minSubsetSumDifference(vector<int>& a){
    int S = accumulate(a.begin(), a.end(), 0);
    vector<char> dp(S+1, 0);
    dp[0] = 1;
    for(int x : a){
        for(int s=S; s>=x; --s){
            dp[s] = dp[s] | dp[s-x];
        }
    }
    int ans = INT_MAX;
    for(int s=0; s<=S/2; ++s){
        if(dp[s]) ans = min(ans, abs(S - 2*s));
    }
    return ans;
}

int main(){
    vector<int> a = {1,2,3,4};
    cout << minSubsetSumDifference(a) << "\n"; // 0
}
