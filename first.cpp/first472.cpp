// DP 6: House Robber : -


#include <bits/stdc++.h>
using namespace std;

long long robLinear(const vector<int>& a){
    long long prev = 0, prev2 = 0; // dp[i-1], dp[i-2]
    for(int x : a){
        long long pick = x + prev2;
        long long cur = max(pick, prev);
        prev2 = prev;
        prev = cur;
    }
    return prev;
}

long long rob(vector<int> a){
    int n = a.size();
    if(n==1) return a[0];
    vector<int> v1(a.begin(), a.end()-1); // exclude last
    vector<int> v2(a.begin()+1, a.end()); // exclude first
    return max(robLinear(v1), robLinear(v2));
}

int main(){
    vector<int> a = {2,3,2};
    cout << rob(a) << "\n"; // 3
}
