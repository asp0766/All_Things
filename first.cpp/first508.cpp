// DP 42: Printing Longest Increasing Subsequence reconstructs one LIS after computing standard LIS lengths : -


#include <bits/stdc++.h>
using namespace std;

vector<int> printLIS(vector<int>& a){
    int n = a.size();
    vector<int> dp(n, 1), parent(n);
    iota(parent.begin(), parent.end(), 0); // self-parent default
    int bestLen = 0, bestIdx = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j] < a[i] && dp[j] + 1 > dp[i]){
                dp[i] = dp[j] + 1;
                parent[i] = j;
            }
        }
        if(dp[i] > bestLen){
            bestLen = dp[i];
            bestIdx = i;
        }
    }
    vector<int> seq;
    for(int cur = bestIdx; parent[cur] != cur; cur = parent[cur])
        seq.push_back(a[cur]);
    seq.push_back(a[bestIdx]); // last node (self-parent)
    reverse(seq.begin(), seq.end());
    return seq;
}

int main(){
    vector<int> v = {10,9,2,5,3,7,101,18};
    auto lis = printLIS(v); // e.g., 2 3 7 18
    for(int x: lis) cout << x << " ";
    cout << "\n";
}
