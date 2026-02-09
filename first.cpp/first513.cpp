// DP 47: Number of Longest Increasing Subsequences counts  : -


#include <bits/stdc++.h>
using namespace std;

int findNumberOfLIS(vector<int>& a){
    int n = a.size();
    if(n==0) return 0;
    vector<int> len(n,1), cnt(n,1);
    int best = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j] < a[i]){
                if(len[j] + 1 > len[i]){
                    len[i] = len[j] + 1;
                    cnt[i] = cnt[j];
                }else if(len[j] + 1 == len[i]){
                    cnt[i] += cnt[j];
                }
            }
        }
        best = max(best, len[i]);
    }
    long long ans = 0;
    for(int i=0;i<n;i++) if(len[i]==best) ans += cnt[i];
    return (int)ans;
}

int main(){
    vector<int> v = {1,3,5,4,7};
    cout << findNumberOfLIS(v) << "\n"; // 2
}
