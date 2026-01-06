// DP 44: Largest Divisible Subset finds the largest subset : -


#include <bits/stdc++.h>
using namespace std;

vector<int> largestDivisibleSubset(vector<int>& a){
    int n = a.size();
    if(n==0) return {};
    sort(a.begin(), a.end());
    vector<int> dp(n,1), parent(n,-1);
    int bestLen=1, bestIdx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]%a[j]==0 && dp[j]+1>dp[i]){
                dp[i]=dp[j]+1;
                parent[i]=j;
            }
        }
        if(dp[i]>bestLen){ bestLen=dp[i]; bestIdx=i; }
    }
    vector<int> res;
    for(int cur=bestIdx; cur!=-1; cur=parent[cur]) res.push_back(a[cur]);
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    vector<int> nums={1,2,4,8};
    auto ans = largestDivisibleSubset(nums); // 1 2 4 8
    for(int x: ans) cout<<x<<" ";
    cout<<"\n";
}
