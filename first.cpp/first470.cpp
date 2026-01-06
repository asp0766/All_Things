// DP 4: Frog Jump with K distances : -


#include <bits/stdc++.h>
using namespace std;

int solve(int i, int k, const vector<int>& h, vector<int>& dp){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int best = INT_MAX;
    for(int j=1;j<=k;j++){
        if(i-j>=0){
            int cost = solve(i-j,k,h,dp) + abs(h[i]-h[i-j]);
            best = min(best, cost);
        }
    }
    return dp[i]=best;
}

int frogJumpK(const vector<int>& h, int k){
    int n = h.size();
    vector<int> dp(n, -1);
    return solve(n-1, k, h, dp);
}

int main(){
    vector<int> h = {30,10,60,10,60,50};
    int k = 3;
    cout << frogJumpK(h,k) << "\n";
}
