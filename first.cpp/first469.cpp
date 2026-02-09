// DP 3: Frog Jump : -

// C++ memoization : -
#include <bits/stdc++.h>
using namespace std;

int f(int i, const vector<int>& h, vector<int>& dp){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int one = f(i-1,h,dp) + abs(h[i]-h[i-1]);
    int two = INT_MAX;
    if(i>1) two = f(i-2,h,dp) + abs(h[i]-h[i-2]);
    return dp[i] = min(one,two);
}

int frogJump(const vector<int>& h){
    int n = h.size();
    vector<int> dp(n, -1);
    return f(n-1, h, dp);
}

int main(){
    vector<int> h = {30,10,60,10,60,50};
    cout << frogJump(h) << "\n"; // 40
}




// C++ tabulation : -
#include <bits/stdc++.h>
using namespace std;

int frogJump(const vector<int>& h){
    int n = h.size();
    vector<int> dp(n, 0);
    dp[0]=0;
    if(n>=2) dp[1] = abs(h[1]-h[0]);
    for(int i=2;i<n;i++){
        int one = dp[i-1] + abs(h[i]-h[i-1]);
        int two = dp[i-2] + abs(h[i]-h[i-2]);
        dp[i] = min(one, two);
    }
    return dp[n-1];
}

int main(){
    vector<int> h = {30,10,60,10,60,50};
    cout << frogJump(h) << "\n"; // 40
}




// C++ space-optimized : -
#include <bits/stdc++.h>
using namespace std;

int frogJump(const vector<int>& h){
    int n = h.size();
    int prev2 = 0;                          // dp[i-2]
    int prev1 = (n>=2)? abs(h[1]-h[0]) : 0; // dp[i-1]
    if(n<=2) return prev1;
    for(int i=2;i<n;i++){
        int cur = min(prev1 + abs(h[i]-h[i-1]),
                      prev2 + abs(h[i]-h[i-2]));
        prev2 = prev1;
        prev1 = cur;
    }
    return prev1;
}

int main(){
    vector<int> h = {30,10,60,10,60,50};
    cout << frogJump(h) << "\n"; // 40
}
