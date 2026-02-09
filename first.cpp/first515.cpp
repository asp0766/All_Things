// DP 49: Matrix Chain Multiplication : -


#include <bits/stdc++.h>
using namespace std;

// d has size n+1; matrices: A1(d0 x d1), A2(d1 x d2), ... An(d_{n-1} x d_n)
int matrixChainMultiplication(const vector<int>& d){
    int n = (int)d.size() - 1;           // number of matrices
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    for(int len=2; len<=n; ++len){       // chain length
        for(int i=1; i+len-1<=n; ++i){
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            for(int k=i; k<j; ++k){
                long long cost = dp[i][k] + dp[k+1][j] + 1LL*d[i-1]*d[k]*d[j];
                dp[i][j] = min(dp[i][j], (int)cost);
            }
        }
    }
    return dp[1][n];
}

int main(){
    vector<int> d = {40,20,30,10,30}; // A1:40x20, A2:20x30, A3:30x10, A4:10x30
    cout << matrixChainMultiplication(d) << "\n"; // 26000
}
