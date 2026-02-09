// DP 52: Evaluate Boolean Expression  : -


#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

long long solve(int i, int j, int isTrue, const string& s,
                vector<vector<vector<long long>>>& dp){
    if(i>j) return 0;
    if(i==j){
        if(isTrue) return s[i]=='T';
        else return s[i]=='F';
    }
    long long& res = dp[i][j][isTrue];
    if(res!=-1) return res;
    long long ways = 0;
    for(int k=i+1; k<=j-1; k+=2){
        char op = s[k];
        long long LT = solve(i, k-1, 1, s, dp);
        long long LF = solve(i, k-1, 0, s, dp);
        long long RT = solve(k+1, j, 1, s, dp);
        long long RF = solve(k+1, j, 0, s, dp);
        if(op=='&'){
            if(isTrue) ways = (ways + (LT*RT)%MOD) % MOD;
            else ways = (ways + (LT*RF + LF*RT + LF*RF)%MOD) % MOD;
        }else if(op=='|'){
            if(isTrue) ways = (ways + (LT*RT + LT*RF + LF*RT)%MOD) % MOD;
            else ways = (ways + (LF*RF)%MOD) % MOD;
        }else{ // '^'
            if(isTrue) ways = (ways + (LT*RF + LF*RT)%MOD) % MOD;
            else ways = (ways + (LT*RT + LF*RF)%MOD) % MOD;
        }
    }
    return res = ways;
}

int countTrueWays(string s){
    int n = s.size();
    vector<vector<vector<long long>>> dp(n, vector<vector<long long>>(n, vector<long long>(2, -1)));
    return (int)solve(0, n-1, 1, s, dp);
}

int main(){
    cout << countTrueWays("T|T&F^T") << "\n";
    cout << countTrueWays("F|T^F") << "\n";
}
