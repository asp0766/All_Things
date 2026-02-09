// DP 11: Triangle Minimum Path Sum finds the minimum total from the top to the bottom of a triangle : -


#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, const vector<vector<int>>& t, vector<vector<int>>& dp){
    int n = t.size();
    if(i==n-1) return t[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int down = t[i][j] + f(i+1, j, t, dp);
    int diag = t[i][j] + f(i+1, j+1, t, dp);
    return dp[i][j] = min(down, diag);
}

int minimumTotal(vector<vector<int>>& t){
    int n = t.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));
    return f(0, 0, t, dp);
}

int main(){
    vector<vector<int>> t = {{2},{3,4},{6,5,7},{4,1,8,3}};
    cout << minimumTotal(t) << "\n"; // 11
}
