// DP 2: Climbing Stairs : - 


#include <bits/stdc++.h>
using namespace std;

long long f(int n, vector<long long>& dp){
    if(n<=1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = f(n-1, dp) + f(n-2, dp);
}

int climbStairs(int n){
    vector<long long> dp(n+1, -1);
    return (int)f(n, dp);
}

int main(){
    int n = 5;
    cout << climbStairs(n) << "\n"; // 8
}
